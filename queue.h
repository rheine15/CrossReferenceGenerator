struct QueueNodeType {
	char isHead;		// bool to determine if at queue head
	char * identifier;	// string stored in node
	int lineNum;		// line num on which string occurs
	struct QueueNode * next;// next node in queue
};

typedef struct QueueNodeType QueueNode;
/* Initializes queue with an identifier and line number */
extern QueueNode initQueue(char * identifier, int lineNum);
/* Adds the given identifier and line num to the tail of the queue */
extern void addQueueNode(QueueNode * head, char * identifier, int lineNum);
/* Prints the contents of the queue */
extern void printQueue(QueueNode * head);
