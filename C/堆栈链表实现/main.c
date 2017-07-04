//
//  main.c
//  堆栈链表实现
//
//  Created by Taro on 2017/7/3.
//  Copyright © 2017年 Taro. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>
#define MAXSIZE 100


typedef struct Node{
    int data;
    struct Node* next;
}Node,*Next;

Node *inin(){
    Node *first = (Node*)malloc(sizeof(Node));
    first->next = NULL;
    return first;
}

int isEmpty(Node* stack){
    return (stack->next == NULL);
}

void push(Node *top, int data){
    Node *insertNode = (Node*)malloc(sizeof(Node));
    insertNode->data = data;
    insertNode->next = top->next;
    top->next = insertNode;
}

void pop(Node *top){
    if (isEmpty(top)) {
        printf("空栈");
    }else{
        Node *tempNode = top->next;
        top->next = tempNode->next;
        printf("%d",tempNode->data);
        free(tempNode);
        
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Node *stack = inin();
    for (int i = 0; i <= 5; i++) {
        push(stack, i);
        
    }
    for (int j = 0; j <= 5; j++) {
        pop(stack);
    }
    printf("\n");
    return 0;
}
