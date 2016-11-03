typedef struct ListNodeType *ListNode;
/* Adds a line number to existing node */
extern void addLine(ListNode * node, int line);
/* Creates a new node with a string and line number */
extern ListNode createListNode(char[] str, int line);
