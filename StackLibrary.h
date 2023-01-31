typedef struct Node{
    void **value;
    struct Node *next;
    struct Node *previous;
} NODE;

typedef struct LList{
    NODE* head;
    NODE* tail;
    int count;
} LIST;

typedef struct Stack{
    int Count;
    LIST *OurStack;
}STACK;