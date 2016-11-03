/*****************************
 * Bob Heine
 * CIS 361
 * Node of a list element
 ****************************/

#include <string.h>

#include "list.h"

#define MAXLEN 32

struct ListNodeType {
	char * identifier;	// string stored in list
	int lineNum[MAXLEN];// lines string occurs on
};

typedef struct ListNodeType *ListNode;

/* Adds a line number to existing node */
void addLine(ListNode * node, int line) {
	int * x;
	x = node->lineNum;
	while (x < &node->lineNum+1) {
		x++;
	}
	*(node->lineNum+x) = line; 
}

/* Creates a new node with a string and line number */
ListNode createNode(char * str, int line) {
	listNode x;
	x->lineNum[0] = line;
	strcpy(x->identifier, str);
}
