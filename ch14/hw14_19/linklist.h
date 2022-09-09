/* linklist.h */

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

/*NODE *createList(int *, int);
void printList(NODE *)
void freeList(NODE *);
void insertNode(NODE *, int);
NODE *searchNode(NODE *, int);
NODE *deleteNode(NODE *, NODE *);*/

NODE *createList(int *arr, int len){

    int i;
    NODE *first, *current, *previous;

    for(i = 0; i < len; i++)
    {
        current = (NODE *)malloc(sizeof(NODE));
        current->data = arr[i];
        if(i == 0)
            first = current;
        else
            previous->next = current;
        current->next = NULL;
        previous = current;
    }

    return first;

}

void printList(NODE *first){

    NODE* node = first;

    if(first == NULL)
        printf("List is empty!\n");
    else
    {
        while(node != NULL)
        {
            printf("%3d", node->data);
            node = node->next;
        }
        printf("\n");
    }

}

void freeList(NODE* first){

    NODE *current, *tmp;
    current = first;

    while(current != NULL)
    {
        tmp = current;
        current = current->next;
        free(tmp);
    }

}

void insertNode(NODE *node, int item){

    NODE *newnode;

    newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = item;
    newnode->next = node->next;
    node->next = newnode;
    
}

NODE *searchNode(NODE* first, int item){

    NODE *node = first;
    while(node != NULL)
    {
        if(node->data == item)
            return node;
        else
            node = node->next;
    }

    return NULL;

}

NODE* deleteNode(NODE *first, NODE *node){

    NODE *ptr = first;

    if(first == NULL)
    {
        printf("Nothing to delete!\n");
        return NULL;
    }

    if(node == first)
        first = first->next;
    else
    {
        while(ptr->next != node)
            ptr = ptr->next;
        ptr->next = node->next;
    }

    free(node);

    return first;
    
}
