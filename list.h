struct ListNodeType {
	char * identifier;	// string stored in list
	int lineNum;		// line string occurs on
	struct ListNode * prev;	// previous element in list
	struct ListNode * next;	// next element in list
};

typedef struct ListNodeType ListNode;

struct ListType {
	ListNode * head;	// head of list
	ListNode * tail;  	// tail of list
	int size;			// size of list
};

typedef struct ListType List;
/* Adds node to list */
extern void addNodeToList(List * list, ListNode * node);
/* Adds a line number to existing node */
extern void addLine(ListNode * node, int line);
/* Creates a new node with a string and line number */
extern ListNode createNode(char * str, int line);
/* Returns the node with the given identifier */
extern void * getNode(List * list, char * identifier);
/* Returns 1 if identifier found, 0 otherwise */
extern int inList(List * list, char * identifier);
/* Returns 1 if deletion successful, 0 otherwise */
extern int removeFromList(List * list, ListNode * node);
/* Converts list to queue */
extern QueueNode convertToQueue(List * list);
