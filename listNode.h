/*
 * node.h
 *
 *  Created on: Dec 26, 2009
 *      Author: Han
 */

#ifndef LIST_NODE_H_
#define LIST_NODE_H_

typedef struct listnode
{
	int content;
	struct listNode *nextPtr;
} listNode;

listNode* makeNode(int x);

#endif /* LIST_NODE_H_ */
