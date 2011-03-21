/*
 * list.h
 *
 *  Created on: Dec 26, 2009
 *      Author: Han
 */

#ifndef LIST_H_
#define LIST_H_

#include "listNode.h"

typedef struct list
{
	int count;
	listNode *firstNode;
	listNode *lastNode;
} List;

List *makeList();
void initialiseList(List *listPtr);
int isListEmpty(List *listPtr);
void appendItem(List *listPtr, int item);
void printList(List *listPtr);
#endif /* LIST_H_ */
