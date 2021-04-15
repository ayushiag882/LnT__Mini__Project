#include "header.h"
error_t display(student*h)
{
	student*p;
	for (p = h->next; p != NULL; p = p->next)
	{
		printf("Roll Number: %d\n", p->rollnumber);
		printf("Name: %s\n", p->name);
		printf("Phone: %s\n", p->phone);
		printf("Percentage: %0.4f\n\n", p->percentage);
	}

	return SUCCESS;
}