/*
 * main.c
 *
 *  Created on: Dec 26, 2009
 *      Author: Han
 */
#include <stdio.h>
#include <stdlib.h>
#include "listNode.h"
#include "listFunctions.h"

int main()
{
	List *list = makeList();
	initialiseList(list);

	int i;
	for(i=0; i<10; i++)
	{
		appendItem(list, i);
	}

	printf("end!\n");
	printList(list);
	return 0;
}
