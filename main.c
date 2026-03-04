#include <stdio.h>
#include <stdlib.h>

#include"linkedList.h"

int main()
{
    linkedList * list = create_linkedList();
    back_ll(list, 10);
    back_ll(list, 20);
    back_ll(list, 30);
    back_ll(list, 40);
    back_ll(list, 50);
    back_ll(list, 60);

    print_ll(list);

    find_n_ll(list,50);

    replace_n_ll(list,50,80);
    print_ll(list);

    add_infron_ll(list,1);
    print_ll(list);

    return 0;
}