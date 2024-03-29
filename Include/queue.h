#ifndef Queue_H_INCLUDED
#define Queue_H_INCLUDED
#include "BST.h"

/*
This is a Queue implementation using a linked list. This will be a queue storing Nodes of type node_t specifically
created for level order traversal of my binary tree 
*/

typedef struct list_node {
    node_t *node;
    struct list_node *next;
}node_q;

typedef struct List{
    node_q *head, *tail;
    unsigned int size;
}q_list;

void init_qlist(q_list *list);
node_q *create_nodeq(node_t *node);
void insert_head_qlist(q_list *list, node_t *node);
void insert_tail_qlist(q_list *list, node_t *node);
void pop_head_qlist(q_list *list); //do not need to use our popped value in our level order
node_q *get_qlist_head(q_list *list);
void destroy_qlist(q_list *list);

typedef struct Queue{
    q_list *storage; // dynamically allocated array of node_t nodes
    unsigned int size;
    unsigned int empty;
}queue;

void init_q(queue *q);
void insert_q(queue *q, node_t *node);
void pop_q(queue *q);
node_t *peek_q(queue *q);
unsigned int is_empty_q(queue *q);
void destroy_q(queue *q);

#endif