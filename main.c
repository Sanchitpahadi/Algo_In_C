#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tree.h"

int main()
{
    Node *root = NULL;
  

    for(int i =0 ; i <20000;i++)
    {
    root =  insert_t(root,i);
    }

    int found = search(root,1999);

    printf(" if find print 1 %d",found);
    
    inorder(root);







    return 0;
}