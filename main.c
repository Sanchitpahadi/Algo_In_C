#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tree.h"



int main()
{

  Node *root = NULL;
  

    for(int i =0 ; i <200;i++)
    {
    root =  insert_t(root,i);
    }

    int found = search(root,19);
    root =delete_tn(root,15);
    root =delete_tn(root,16);
    root =delete_tn(root,17);

    printf(" if find print 19 %d \n",found);
    
    inorder(root);


    return 0;
}