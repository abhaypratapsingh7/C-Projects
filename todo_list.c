#include <stdio.h>
#include <string.h>

#define MAX_TASKS 50
#define MAX_LEN 100

char tasks[MAX_TASKS][MAX_LEN];
int count = 0;

void show_tasks() {
    if (count == 0) {
        printf("No tasks yet.\n");
        return;
    }
    for (int i = 0; i < count; i++)
        printf("%d. %s\n", i + 1, tasks[i]);
}

int main() {
    int choice, num;

    while (1) {
        printf("\n1. Add task  2. View tasks  3. Remove task  4. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            if (count >= MAX_TASKS) {
                printf("Task list is full.\n");
                continue;
            }
            printf("Enter task: ");
            fgets(tasks[count], MAX_LEN, stdin);
            tasks[count][strcspn(tasks[count], "\n")] = '\0';
            count++;
        } else if (choice == 2) {
            show_tasks();
        } else if (choice == 3) {
            show_tasks();
            printf("Task number to remove: ");
            scanf("%d", &num);
            if (num < 1 || num > count) {
                printf("Invalid number.\n");
            } else {
                for (int i = num - 1; i < count - 1; i++)
                    strcpy(tasks[i], tasks[i + 1]);
                count--;
            }
        } else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
} 
