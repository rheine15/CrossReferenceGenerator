struct ListNodeType {
	char * identifier;	// string stored in list
	int lineNum;		// line string occurs on
	ListNode * prev;	// previous element in list
	ListNode * next;	// next element in list
};

typedef struct ListNodeType ListNode;

struct ListType {
	ListNode * head;	// head of list
	ListNode * tail;  	// tail of list
	int size;			// size of list
};

typedef struct ListType List;
/* Adds node to list */
extern List addToList(List * list, ListNode * node);
/* Adds a line number to existing node */
extern void addLine(ListNode * node, int line);
/* Creates a new node with a string and line number */
extern ListNode createListNode(char * str, int line);
