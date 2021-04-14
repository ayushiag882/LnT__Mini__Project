#include"header.h"
int main(){
 head = NULL;

    int choice;
    char name[100];
    char phone[100];
    int rollnumber;
    float percentage;
    printf("1 to insert student details\n2 to search for student details\n3 to delete student details\n4 to update student details\n5 to display all student details");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter roll number: ");
                scanf("%d", &rollnumber);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter phone number: ");
                scanf("%s", phone);
                printf("Enter percentage: ");
                scanf("%f", &percentage);
               void insert(rollnumber, name, phone, percentage);
                break;
            case 2:
                printf("Enter roll number to search: ");
                scanf("%d", &rollnumber);
               void search(rollnumber);
                break;
            case 3:
                printf("Enter roll number to delete: ");
                scanf("%d", &rollnumber);
               void  Delete(rollnumber);
                break;
            case 4:
                printf("Enter roll number to update: ");
                scanf("%d", &rollnumber);
                update(rollnumber);
                break;
            case 5:
               void display();
                break;
        }
        
    } while (choice != 0);
}
