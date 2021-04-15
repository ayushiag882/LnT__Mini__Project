#include "header.h"
void search(student*h)
{
    int roll;
	student*p = h->next;
	printf("Enter the Roll no. to find:");
	scanf("%d", &roll);
	while (p != NULL)
	{
		if (p->rollnumber != roll)
		{
			p = p->next;
		}
		else
		{
			printf("Roll Number: %d\n", p->rollnumber);
			printf("Name: %s\n", p->name);
			printf("Phone: %s\n", p->phone);
			printf("Percentage: %0.4f\n", p->percentage);
			return;
		}
	}
	if (p == NULL)
	{
		printf("Not found! \n");
	}
}