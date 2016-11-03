struct ListType {
	ListNode * head;	// head of list
	ListNode * tail;  	// tail of list
	int size;			// size of list
};

struct ListNodeType {
	char * identifier;	// string stored in list
	int lineNum;		// line string occurs on
	ListNode * prev;
	ListNode * next;
};

typedef struct ListType *List;
typedef struct ListNodeType *ListNode;
/* Adds node to list */
extern List addToList(List * list, ListNode * node);
/* Adds a line number to existing node */
extern void addLine(ListNode * node, int line);
/* Creates a new node with a string and line number */
extern ListNode createListNode(char * str, int line);
