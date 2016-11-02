/*******************************
 * Bob Heine
 * CIS 361
 * A queue of identifier nodes
 ******************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "queue.h"

#define MAXLEN 50

struct QueueNodeType {
	char isHead;
	char * identifier;
	int lineNum;
	QueueNode next;
};

typedef struct QueueNodeType *QueueNode;

QueueNode initQueue(char * identifier, int lineNum) {
	QueueNode node;
	node->identifier = (char*)malloc(sizeof(char)*strlen(identifier));
	strcpy(node->identifier, identifier);
	node->lineNum = lineNum;
	node->isHead = 1;
}

void addQueueNode(QueueNode *head, char * identifier, int lineNum) {
	QueueNode node;
	node->isHead = 0;
	node->identifier = (char *)malloc(sizeof(char)*(strlen(identifier)));
	strcpy(node->identifier, identifier);
	node->lineNum = lineNum;
	while(head->next != NULL) {
		*head = head->next;
	}
	head->next = node;
}
