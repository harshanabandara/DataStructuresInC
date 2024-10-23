//
//  linkedList.h
//  DataStructuresInC
//
//  Created by Harshana Bandara on 2024-10-15.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node{
    int value;
    struct node* next;
};
typedef struct node node;
typedef node* nodeptr;

nodeptr createNode(int val);
int headInsert(nodeptr* head, int val);
int tailInsert(nodeptr* head, int val);
int headRemove(nodeptr* head);
int tailRemove(nodeptr* head);
int printList(nodeptr head);

#endif
