/*
 * list.c
 *
 *  Created on: Dec 26, 2009
 *      Author: Han
 */

#include <stdlib.h>
#include <stdio.h>
#include "listFunctions.h"

/*
 * Description: 		This function creates an instance of a list what will hold the current number of items that are currently in the list.
 * Input parameters: 	Nil.
 * Returns: 			Returns a pointer to the address of where the List is created.
 */
List *makeList()
{
	List *ptr = malloc(sizeof(List));
	if(ptr == NULL)
	{
		printf("unable to create list..");
		exit(1);
	}
	else
	{
		return ptr;
	}
}

/*
 * Description: 		This function initialises the list. It sets count to 0, firstNode which is a pointer to the first node to NULL,
 * 						and the lastNode which is a pointer to the last node in the list to NULL.
 * Input parameters: 	A pointer to an allocated List.
 * Returns: 			Nil.
 */
void initialiseList(List *listPtr)
{
	listPtr->count = 0;
	listPtr->firstNode = NULL;
	listPtr->lastNode = NUL;
}

/*
 * Description: 		This function returns 1 if the list is empty, and 0 if the list is not empty.
 * Input parameters: 	A pointer to an allocated List.
 * Returns: 			Returns 1 if the list is empty, and 0 if the list is not empty.
 */
int isListEmpty(List *listPtr)
{
	/*
	 * Note: !! returns 0 if the count is 0, and 1 for any count > 0.
	 * 		 Followed by a !, as we want it to return 1 if it is empty, and 0 if it is not.
	 */
	return !(!!listPtr->count);
}

/*
 * Description: 		This function appends items to the end of the list.
 * Input parameters: 	A pointer to an allocated List, and the item you want to append.
 * Returns: 			Nil.
 */
void appendItem(List *listPtr, int item)
{
	listNode *newNode = makeNode(item);
	if(listPtr->count == 0)
	{
		listPtr->firstNode = newNode;
	}
	else
	{
		listPtr->lastNode->nextPtr = newNode;
	}
	listPtr->lastNode = newNode;
	listPtr->count++;
}

/*
 * Description: 		This function iterates through the whole list and prints out all the contents.
 * Input parameters: 	A pointer to an allocated List.
 * Returns: 			Nil.
 */
void printList(List *listPtr)
{
	listNode *tempNode = listPtr->firstNode;
	while(tempNode != NULL)
	{
		printf("%d ", tempNode->content);
		tempNode = tempNode->nextPtr;
	}
}
