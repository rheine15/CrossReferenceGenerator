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

/* Initializes queue with an identifier and line number */
QueueNode initQueue(char * identifier, int lineNum) {
	QueueNode * node;
	node->identifier = (char*)malloc(sizeof(char)*strlen(identifier));
	strcpy(node->identifier, identifier);
	node->lineNum = lineNum;
	node->isHead = 1;
}

/* Adds the given identifier and line num to the tail of the queue */
void addQueueNode(QueueNode *head, char * identifier, int lineNum) {
	QueueNode * node;
	QueueNode * temp = head;
	node->isHead = 0;
	node->identifier = (char *)malloc(sizeof(char)*(strlen(identifier)));
	strcpy(node->identifier, identifier);
	node->lineNum = lineNum;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = node;
}

/* Prints the contents of the queue */
void printQueue(QueueNode * head) {
	while(head->identifier != '\0') {
		printf("%s: line %i\n", head->identifier, head->lineNum);
		head = head->next;
	}
}
