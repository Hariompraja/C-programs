#include <stdio.h>
#include <string.h>

#define MAX 100  
// Patient details
struct Patient {
    int id;
    char name[50];
};


// Queue
struct Queue {
    struct Patient data[MAX];
    int front;
    int rear;
};


void init(struct Queue *q) {
    q->front = 0;
    q->rear = -1;
}

int isEmpty(struct Queue *q) {
    if (q->front > q->rear)
        return 1;
    else
        return 0;
}

int isFull(struct Queue *q) {
    if (q->rear == MAX - 1)
        return 1;
    else
        return 0;
}

int enqueue(struct Queue *q, struct Patient p) {
    int token;

    if (isFull(q)) {
        printf("Queue is full. Cannot add more patients.\n");
        return -1;
    }

    q->rear++;
    q->data[q->rear] = p;

    token = (q->rear - q->front) + 1;  // token number
    return token;
}

struct Patient dequeue(struct Queue *q) {
    struct Patient temp;
    temp.id = -1;   // used if queue is empty

    if (isEmpty(q)) {
        printf("No patients to serve.\n");
        return temp;
    }

    temp = q->data[q->front];
    q->front++;

    return temp;
}

int main() {

    struct Queue waiting;
    struct Queue discharged;

    init(&waiting);
    init(&discharged);

    int choice;
    int nextId = 1;

    while (1) {

        printf("\n===== HOSPITAL MENU =====\n");
        printf("1. Check-in Patient\n");
        printf("2. Serve Patient\n");
        printf("3. Show Waiting Patients\n");
        printf("4. Show Discharged Patients\n");
        printf("5. Statistics\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        
        // 1. Check-in Patient
        if (choice == 1) {

            struct Patient p;
            p.id = nextId++;

            printf("Enter name: ");
            scanf("%s", p.name);

            int token = enqueue(&waiting, p);

            if (token != -1) {
                printf("Patient added.\n");
                printf("Your Token Number: %d\n", token);
            }
        }

        // 2. Serve Patient
        else if (choice == 2) {

            struct Patient served = dequeue(&waiting);

            if (served.id != -1) {
                printf("Serving: %s (ID: %d)\n", served.name, served.id);

                enqueue(&discharged, served);   // move to discharged list
            }
        }


        // 3. View Waiting List
        else if (choice == 3) {

            if (isEmpty(&waiting)) {
                printf("No patients waiting.\n");
            }
            else {
                printf("\n--- Waiting Patients ---\n");

                int i;
                for (i = waiting.front; i <= waiting.rear; i++) {
                    int pos = i - waiting.front + 1;

                    printf("Token: %d | ID: %d | Name: %s\n",
                           pos,
                           waiting.data[i].id,
                           waiting.data[i].name);
                }
            }
        }

        // 4. View Discharged List
        else if (choice == 4) {

            if (isEmpty(&discharged)) {
                printf("No discharged patients.\n");
            }
            else {
                printf("\n--- Discharged Patients ---\n");

                int i;
                for (i = discharged.front; i <= discharged.rear; i++) {
                    printf("ID: %d | Name: %s\n",
                           discharged.data[i].id,
                           discharged.data[i].name);
                }
            }
        }

        // 5. Stats
        else if (choice == 5) {

            int wCount = isEmpty(&waiting) ? 0 : (waiting.rear - waiting.front + 1);
            int dCount = isEmpty(&discharged) ? 0 : (discharged.rear - discharged.front + 1);

            printf("\n--- Statistics ---\n");
            printf("Patients Waiting: %d\n", wCount);
            printf("Patients Discharged: %d\n", dCount);
            printf("Total Patients: %d\n", wCount + dCount);
        }

        // 6. Exit
        else if (choice == 6) {
            printf("Exiting program...\n");
            break;
        }


        else {
            printf("Wrong choice. Try again.\n");
        }
    }

    return 0;
}
