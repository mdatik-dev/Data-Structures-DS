#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void displayList(struct node *start) {
    struct node *temp = start;
    printf("\nCurrent Sorted Linked List: ");
    while(temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node* insertSorted(struct node *start, int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(start == NULL || value < start->data) {
        newnode->next = start;
        start = newnode;
    } else {
        struct node *temp = start;
        while(temp->next != NULL && temp->next->data < value)
            temp = temp->next;
        newnode->next = temp->next;
        temp->next = newnode;
    }

    return start;
}

struct node* deleteValue(struct node *start, int value) {
    struct node *temp = start, *prev = NULL;

    while(temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) {
        printf("\nItem NOT FOUND!\n");
        return start;
    }

    if(prev == NULL) {
        start = temp->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
    printf("Item Deleted Successfully.\n");
    return start;
}

void showProcedure() {
    printf("\nLinked List Procedure:\n");
    printf("1. List is always kept in sorted order (ascending).\n");
    printf("2. New node is inserted in appropriate position based on value.\n");
    printf("3. Search finds a value using linear traversal.\n");
    printf("4. Update deletes the old value and reinserts the new one.\n");
    printf("5. 5%% Bonus adds 5%% to a given value, then reinserts it in sorted order.\n");
}

int main()
{
    int num, value, choice, searchValue, newValue;
    struct node *start = NULL;

    printf("Enter the total number of nodes: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        printf("\nEnter the %d Node Data = ", i + 1);
        scanf("%d", &value);
        start = insertSorted(start, value);
    }

    displayList(start);

    do {
        printf("\nMenu:\n");
        printf("1. Search Value\n");
        printf("2. Update Value\n");
        printf("3. Show Procedure\n");
        printf("4. Add 5%% Bonus to Value\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter value to Search: ");
                scanf("%d", &searchValue);
                struct node *temp = start;
                int found = 0;
                while(temp != NULL) {
                    if(temp->data == searchValue) {
                        printf("Value %d Found in the List!\n", searchValue);
                        found = 1;
                        break;
                    }
                    temp = temp->next;
                }
                if(!found)
                    printf("Value NOT Found!\n");
                break;

            case 2:
                printf("\nEnter value to Update: ");
                scanf("%d", &searchValue);
                printf("Enter new value: ");
                scanf("%d", &newValue);
                start = deleteValue(start, searchValue);
                start = insertSorted(start, newValue);
                displayList(start);
                break;

            case 3:
                showProcedure();
                break;

            case 4:
                printf("\nEnter value to apply 5%% bonus: ");
                scanf("%d", &searchValue);
                start = deleteValue(start, searchValue);
                int bonusValue = searchValue + (searchValue * 5 / 100);
                printf("New Value after 5%% Bonus = %d\n", bonusValue);
                start = insertSorted(start, bonusValue);
                displayList(start);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice. Try Again!\n");
        }

    } while(choice != 5);

    return 0;
}
