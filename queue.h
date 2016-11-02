typedef struct QueueNodeType *QueueNode;

extern QueueNode initQueue(char * identifier, int lineNum);

extern void addQueueNode(QueueNode * head, char * identifier, int lineNum);
