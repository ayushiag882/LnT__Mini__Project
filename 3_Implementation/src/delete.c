#include "header.h"
void Delete(int rollnumber)

{

    struct Student * temp1 = head;
	struct Student * temp2 = head; 
	while(temp1!=NULL){
		
		if(temp1->rollnumber==rollnumber){
			
			printf("Record with roll number %d Found !!!\n", rollnumber);
			
			if(temp1==temp2){
				// this condition will run if
				// the record that we need to delete is the first node
				// of the linked list
				head = head->next;
				free(temp1);
			}
			else{
				// temp1 is the node we need to delete
				// temp2 is the node previous to temp1
				temp2->next = temp1->next;
				free(temp1); 
			}
			
			printf("Record Successfully Deleted !!!\n");
			return;
			
		}
		temp2 = temp1;
		temp1 = temp1->next;
		
	}
	printf("Student with roll number %d is not found !!!\n", rollnumber);
	
}