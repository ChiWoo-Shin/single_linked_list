#ifndef _SINGLE_LINKED_H_
#define _SINGLE_LINKED_H_

#include <stddef.h>
// #include <stdio.h>

typedef struct Node_t // Node structure 만들기
{
    int data; // 값
    struct Node_t* Link; // 주소가 연결될 곳
}Node_t;

typedef struct Node_list
{
    int length;
    struct Node_t* head;
}Node_list;

Node_list* New_First_Node(void);
void appendNode(Node_list* node_l, int value);
void print_list(Node_list* node_l);
int pop(Node_list* node_l);
void find_node(Node_list* node_l, int value);
void delete_node(Node_list* node_l, int value);
// Node_t* appendNode(Node_list* node_l, int value);
// Node_t* deleteNode_First(Node_list* node_l);
// Node_t* delete_data(Node_list* node_l, int value);

#endif
