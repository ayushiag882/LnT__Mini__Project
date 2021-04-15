#include "header.h"
void update(student*h)
{
	int roll;
	student*p = h->next;
	printf("Enter the Roll no. to find:");
	scanf("%d", &roll);

	while(p!=NULL){
		
		if (p->rollnumber != roll)
		{
			p = p->next;
		}
		else
		{
			printf("Record with roll number %d Found !!!\n", roll);
			printf("Enter new name: ");
			scanf("%s", p->name);
			printf("Enter new phone number: ");
			scanf("%s", p->phone);
			printf("Enter new percentage: ");
			scanf("%f",&p->percentage);
			printf("Updation Successful!!!\n");
			return;
		}
		
	}
	
	if (p == NULL)
	{
		printf("Not found! \n");
	}
	
}