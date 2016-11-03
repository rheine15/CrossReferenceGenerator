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
	char isHead;		// bool to determine if at queue head
	char * identifier;	// string stored in node
	int lineNum;		// line num on which string occurs
	QueueNode next;		// next node in queue
};

typedef struct QueueNodeType *QueueNode;

/* Initializes queue with an identifier and line number */
QueueNode initQueue(char * identifier, int lineNum) {
	QueueNode node;
	node->identifier = (char*)malloc(sizeof(char)*strlen(identifier));
	strcpy(node->identifier, identifier);
	node->lineNum = lineNum;
	node->isHead = 1;
}

/* Adds the given identifier and line num to the tail of the queue */
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

/* Prints the contents of the queue */
void printQueue(QueueNode head) {
	while(head != NULL) {
		printf("%s: line %i\n", head.identifier, head.lineNum);
		head = head.next;
	}
}