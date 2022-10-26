#include "test_h.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

Node_list* New_First_Node(void){
    Node_list* startNode=malloc(sizeof(Node_list));
    startNode->head=NULL;
    startNode->length=0;
    return startNode;
}

void appendNode(Node_list* node_l, int value){
    Node_t* New_Node=malloc(sizeof(Node_t));
    New_Node->Link=NULL;
    New_Node->data=value;
     
    if (node_l->head==NULL){        
        node_l->head=New_Node;
    }
    else{
        Node_t* current=node_l->head;
        while(current->Link!=NULL){
            current=current->Link;
        }
        current->Link=New_Node;
    }

    node_l->length++;
    printf("length : %d\n",node_l->length);
}
/* 삭제 종류 pop, delete*/
int pop(Node_list* node_l){
    Node_t* current=node_l->head;
    int temp=0;
    assert(current!=NULL);

    if (current->Link==NULL){
        temp=current->data;
        free(current);
        node_l->head=NULL;
    }
    else{
        while(current->Link->Link!=NULL){
            current=current->Link;
        }
        temp=current->Link->data;
        free(current->Link);
        current->Link=NULL;
    }
    node_l->length--;
    return temp;
}

void delete_node(Node_list* node_l, int value){
    Node_t* p=node_l->head; // 노드가 저장된애들
    Node_t* deleted_Node; // 지울꺼를 

    while(p!=NULL){
        if(p->Link==NULL){
            printf("없는 값 입니다.\n");
            break;
        }        
        else if(p->Link->data==value){
            deleted_Node=p->Link;
            p->Link=p->Link->Link;            
            free(deleted_Node);
            node_l->length--;
            break;
        }        
        else{
            p=p->Link;
        }
    }    
}


/* 찾기 */
void find_node(Node_list* node_l, int value){ // list 반환
    Node_t *fd_node=node_l->head;    

    while(fd_node!=NULL){
        if(fd_node->data==value){
            printf(" %d 은(는) 있습니다.\n",value);
            break;
        }
        else{
            fd_node=fd_node->Link;
        }
    }
    if(fd_node==NULL){
        printf(" %d 은(는) 없습니다.\n",value);
    }
}

/* 출력 */
void print_list(Node_list* node_l){ // list 반환
    Node_t* print_Node=node_l->head;
    if (print_Node->Link!=NULL){
        for(int i=0;i<node_l->length;i++){
            printf("%d ->",print_Node->data);
            print_Node=print_Node->Link;
        }
    }
    printf("NULL \n");
}


