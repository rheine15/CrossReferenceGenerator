/*****************************
 * Bob Heine
 * CIS 361
 * Node of a list element
 ****************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "list.h"
#include "queue.h"

#define MAXLEN 32

/* Adds node to list */
void addNodeToList(List * list, ListNode * node) {
	if(list->head == NULL) {
		list->head = node;
		list->tail = node;
		list->size = 1;
	} else {
		list->tail->next = node;
		node->prev = list->tail;
		list->tail = node;
	}
	list->size++;
}

/* Adds a line number to existing node */
void addLine(ListNode * node, int line) {
	node->lineNum = line; 
}

/* Creates a new node with a string and line number */
ListNode createNode(char * str, int line) {
	ListNode x;
	x.lineNum = line;
	strcpy(x.identifier, str);
}

/* Returns the node with the given identifier */
void * getNode(List * list, char * identifier) {
	ListNode * temp = list->head;
	while(temp != NULL) {
		if(!strcmp(temp->identifier, identifier)) {
			return temp;
		}
	}
	return NULL;
}

/* Returns 1 if identifier found, 0 otherwise */
int inList(List * list, char * identifier) {
	ListNode * temp = list->head;
	while(temp != NULL) {
		if(!strcmp(temp->identifier, identifier)) {
			return 1;
		} 
		temp = temp->next;
	}
	return 0;
}

/* Returns 1 if deletion successful, 0 otherwise */
int removeFromList(List * list, ListNode * node) {
	if(node == NULL) {
		return 0;
	}
	if(list->tail == node) {
		list->tail = node->prev;
	}
	if(list->head == node) {
		list->head = node->next;
	}
	ListNode * prev = node->prev;
	ListNode * next = node->next;
	prev->next = next;
	next->prev = prev;
	//free(node);
	list->size--;
	return 1;
}

/* Converts list to queue */
QueueNode convertToQueue(List * list) {
	int min = list->head->lineNum;
	ListNode *temp = list->head;
	int error = 0;
	QueueNode * queueHead;
	while(list->size > 0) {
		while(temp != NULL) {
			if (temp->lineNum < min) {
				min = temp->lineNum;
			}
			temp = temp->next;
		} 
		temp = list->head;
		while(temp->lineNum != min) {
			if(temp == NULL) {
				error = 1;
				break;
			}
			temp = temp->next;
		}
		if(error){
			printf("Loop Error\n");
			return;
		} else {
			if(queueHead->identifier == '\0') {
				initQueue(temp->identifier, temp->lineNum);
			} else {
				addQueueNode(queueHead, temp->identifier, temp->lineNum);
			}
		}
	}
	return *queueHead;
}
