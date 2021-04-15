#include "header.h"

error_t insert(student*h)
{
	student*p;
    p = (student*)malloc(sizeof(student));

	printf("Roll no.:");
	scanf("%s", &p->rollnumber);
	printf("Name:");
	scanf("%s", &p->name);
	printf("Phone:");
	scanf("%s", &p->phone);
	printf("Percent:");
	scanf("%f", &p->percentage);

	p->next = h->next;
	h->next = p;

	return SUCCESS;
	
}