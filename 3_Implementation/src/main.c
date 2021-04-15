#include"header.h"

int main(){

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
                insert(NULL);
                break;
            case 2:
                search(NULL);
                break;
            case 3:
                Delete(NULL);
                break;
            case 4:
                update(NULL);
                break;
            case 5:
                display(NULL);
                break;
        }
        
    } while (choice != 0);
}
