#include "header.h"
void display()
{
    struct Student * temp = head;
	while(temp!=NULL){
		
		printf("Roll Number: %d\n", temp->rollnumber);
		printf("Name: %s\n", temp->name);
		printf("Phone: %s\n", temp->phone);
		printf("Percentage: %0.4f\n\n", temp->percentage);
		temp = temp->next;
		
	}
}