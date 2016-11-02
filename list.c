/*****************************
 * Bob Heine
 * CIS 361
 * Node of a list element
 ****************************/

#include <string.h>

#include "list.h"

#define MAXLEN 32

struct ListNodeType {
	char identifier[MAXLEN];
	int lineNum[MAXLEN];
};

typedef struct ListNodeType *ListNode;

void addLine(ListNode * node, int line) {
	int * x;
	x = node->lineNum;
	while (x < &node->lineNum+1) {
		x++;
	}
	*(node->lineNum+x) = line; 
}

ListNode createNode(char[] str, int line) {
	listNode x;
	x->lineNum[0] = line;
	int c = 0;
	while(c < strlen(str)) {
		x->identifier[c] = str[c];
	}
}
