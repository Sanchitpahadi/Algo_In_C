
typedef struct Node {
    int data;    
    struct Node *next;
}Node;

typedef struct 
{
    Node * head;
    int size;
}linkedList;

linkedList *create_linkedList()
{
    linkedList * list = malloc(sizeof(linkedList));
    if (list == NULL) return NULL;

    list->head = NULL;
    list->size = 0;

    return list;
}

Node *create_Node(int data)
{
    Node * n = malloc(sizeof(Node));
    if (n == NULL) return NULL;

    n->data = data;
    n->next = NULL;

    return n;
}

void back_ll(linkedList * list, int data)
{
    Node *n = create_Node(data);
    if (n == NULL) return ;

    if(list->head == NULL)
    {
        list->head = n;
    }
    else
    {
        Node * curr = list->head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = n;
    }

    list->size++;
}

void print_ll(linkedList *list)
{
    Node *n = list->head;
    if(n==NULL)
    {
        return;
    }
    while(n!=NULL)
    {
        printf("%d ->",n->data);
        n = n->next;
    }
    printf("NULL  \n size = %d \n",list->size);
}
   
   void find_n_ll(linkedList *list, int target)
    {
            Node *n = list->head;
            int i = 1;
            if(n==NULL)
            {
                return;
            }
            while(n!=NULL)
            {
                if(n->data == target)
                {
                    printf("fount its on number %d \n",i);
                }
                n = n->next;
                i++;
            }

    }

    void replace_n_ll(linkedList *list, int target, int replace)
    {
            Node *n = list->head;
            int i = 1;
            if(n==NULL)
            {
                return;
            }
            
            while(n!=NULL)
            {
                if(n->data == target)
                {
                    n->data = replace;
                    printf("found and replaced \n");
                }
                n = n->next;
                i++;
            }

    }

    void add_infron_ll(linkedList *list, int data)
    {
        Node * temp = list ->head;
        if(temp == NULL)
        {
            printf("linked list is emty or there are errors ");
        }

        Node *n = create_Node(data);
        list->head = n;
        n->next = temp;

    }

