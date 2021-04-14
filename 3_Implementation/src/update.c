#include "header.h"
void update(int rollnumber)
{
	
    struct Student * temp = head;
	while(temp!=NULL){
		
		if(temp->rollnumber==rollnumber){
			printf("Record with roll number %d Found !!!\n", rollnumber);
			printf("Enter new name: ");
			scanf("%s", temp->name);
			printf("Enter new phone number: ");
			scanf("%s", temp->phone);
			printf("Enter new percentage: ");
			scanf("%f",&temp->percentage);
			printf("Updation Successful!!!\n");
			return;
		}
		temp = temp->next;
		
	}
	printf("Student with roll number %d is not found !!!\n", rollnumber);
	
}