//
//  linkedList.c
//  DataStructuresInC
//
//  Created by Harshana Bandara on 2024-10-15.
//
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"



int headInsert(nodeptr* head, int val){
    if (head==NULL){
        printf("The linkedList is null\n");
        return 0;
    }
    // the head is a pointer to a pointer.
    nodeptr tmp = (nodeptr) malloc(sizeof(node));
    tmp->value = val;
    tmp->next = *head; // de-referencing a pointer to get the data.
    *head = tmp;
    return 0;
}
int tailInsert(nodeptr* head, int val){
    //if head ==NULL here
    //iterate to find the end
    nodeptr tmp = *head;
    while(tmp->next!=NULL){
        tmp = tmp->next;
    }
    nodeptr newNode = createNode(val);
    tmp ->next = newNode;
    return 0;
}
int headRemove(nodeptr* head){
    nodeptr tmp = *head;
    *head = tmp->next;
    free(tmp);
    return 0;
}
int tailRemove(nodeptr* head){
    nodeptr tmp = *head;
    if(tmp==NULL){
        return 0;
    }
    if(tmp->next ==NULL){
        free(tmp);
        *head=NULL;
        return 0;
    }
    while(tmp->next->next){
        tmp = tmp->next;
    }
    nodeptr last = tmp->next;
    printf("the last node has value %d\n",last->value);
    tmp->next=NULL;
    free(last);
    return 0;
}

int printList(nodeptr head){
    if(head==NULL){
        printf("linkedList is null\n");
        return 0;
    }
    nodeptr tmp = head;
    while(tmp){
        printf("%d\t",tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
    return 0;
}

nodeptr createNode(int val){
    printf("createNode\n");
    nodeptr newNode = (nodeptr) malloc(sizeof(node));
    if (!newNode) {
        printf("Error while creating a node\n");
        exit(1);
    }
    newNode->value=val;
    newNode->next=NULL;
    return newNode;
}
