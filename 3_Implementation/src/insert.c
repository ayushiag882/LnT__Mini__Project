


#include "header.h"
void insert(int rollnumber, char* name, char* phone, float percentage)
{
	
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
	student->rollnumber = rollnumber;
	strcpy(student->name, name);
	strcpy(student->phone, phone);
	student->percentage = percentage;
	student->next = NULL;
	
	if(head==NULL){
		// if head is NULL
		// set student as the new head
		head = student;
	}
	else{
		// if list is not empty
		// insert student in beginning of head
		student->next = head;
		head = student;
	}
	
}