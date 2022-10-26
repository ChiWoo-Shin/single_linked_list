#include "test_h.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Node_list* node_l=New_First_Node();

    appendNode(node_l,10);
    appendNode(node_l,20);
    appendNode(node_l,30);    
    print_list(node_l);
    pop(node_l);
    print_list(node_l);

    find_node(node_l,10);
    find_node(node_l,40);
    appendNode(node_l,50);
    appendNode(node_l,60);
    print_list(node_l);
    delete_node(node_l,20);
    print_list(node_l); 

}
