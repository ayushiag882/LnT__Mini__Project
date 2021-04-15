#include "header.h"

error_t Delete(student*h)
{
	int roll;// Delete by ISBN because ISBN is unique
	student*p = h->next;
	student*tail = h;
	printf("Enter the Roll no. to be deleted:");
	scanf("%d", &roll);
    
	while(p!=NULL){
		
		if (p->rollnumber != roll)
		{
			p = p->next;
			tail = tail->next;
		}
		else
		{
			tail->next = p->next;
			free(p);
			return SUCCESS;
		}			
		
	}

	return SUCCESS;	
	
}