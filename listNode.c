/*
 * node.c
 *
 *  Created on: Dec 26, 2009
 *      Author: Han
 */

#include <stdio.h>
#include <stdlib.h>
#include "listNode.h"

/*
 * Description: 		This function creates a new node by allocating memory for it.
 * Input parameters: 	The item you want to append.
 * Returns: 			Returns a pointer to the allocated memory.
 */
listNode* makeNode(int x)
{
	listNode *newNodePtr = malloc(sizeof(listNode));
	if(newNodePtr == NULL)
	{
		printf("unable to create new node. exiting..");
		exit(1);
	}
	else
	{
		newNodePtr->content = x;
		newNodePtr->nextPtr = NULL;
	}
	return newNodePtr;
}
