/***********************
 * Bob Heine
 * Cross-Reference Generator
 * 10/24/2016
 * 
 * ********************/

#include <stdlib.h>
#include <ctype.h>

#include "queue.h"
#include "list.h"

char isIdentifier(char[] str);
char inList(char * str);
void addToList(int lineNumber, char * str);

int main(int argc, char * argv[]) {
	
}

// Returns 1 if input is identifier else returns 0
char isIdentifier(char[] str) {
	if (!strcmp(str, NULL)) {
		return 0;
	} else if (!isalpha(str[0]) || strcmp(str[0], '_')) {
		return 0;
	} else {
		return 1;
	}
}

// Returns 1 if str is in linked list else returns 0
char inList(char * str) {
	while(1)
		if (1) {
			return 1;
		}
	}
	return 0;
}
