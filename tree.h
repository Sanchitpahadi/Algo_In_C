#ifndef TREE_H
#define TREE_H


typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

Node * create_t(int data)
{
    Node *n  = malloc(sizeof(Node));

    n->data = data;
    n->left = NULL;
    n->right = NULL;
    
    return n;
}

Node *insert_t(Node * root , int data)
{
    if(root==NULL) return create_t(data);

    if(data < root->data) 
    {
        root->left = insert_t(root->left,data);
    }
    else if (data > root->data)
    {
        root ->right = insert_t(root->right,data);
    }

    return root;
}

int search(Node * root, int target)
{
    if(root==NULL)return 0;
    if(root->data == target) return 1;

    if(root->data > target) 
    { 
       return search(root->left,target);
    }
    else if(root->data < target)
    {
        return search(root->right,target);
    }
}

Node * delete_tn(Node *root,int target)
{
    if(root==NULL){return;}
    if(root->data > target)
    {
        return delete_tn(root->left,target);
    }
    else if(rooot->data < target)
    {
        return delete_tn(root->right,target);
    }
    else
    {

    }

}

void inorder(Node * root)
{
    if(root == NULL) return;
    inorder(root->left);
    printf("[%d]->",root->data);
    inorder(root->right);

}

#endif
