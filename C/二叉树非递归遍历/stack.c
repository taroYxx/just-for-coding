//
//  stack.c
//  堆栈
//
//  Created by Taro on 2017/7/4.
//  Copyright © 2017年 Taro. All rights reserved.
//

#include "stack.h"
#include <stdio.h>
#include <mm_malloc.h>
#define MAXSIZE 100




Stack *initStack(){
    Stack *first = (Stack*)malloc(sizeof(Stack));
    first->next = NULL;
    return first;
}

int isEmpty(Stack* stack){
    return (stack->next == NULL);
}

void push(Stack *top, BiTree T){
    Stack *insertNode = (Stack*)malloc(sizeof(Stack));
    insertNode->tree = T;
    insertNode->next = top->next;
    top->next = insertNode;
}

void pop(Stack *top, BiTree T){
    if (isEmpty(top)) {
        printf("空栈");
    }else{
        Stack *tempNode = top->next;
        top->next = tempNode->next;
        T = tempNode->tree;
//        printf("%d",tempNode->tree);
        free(tempNode);
        
        
    }
}

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    Node *stack = inin();
//    for (int i = 0; i <= 5; i++) {
//        push(stack, i);
//        
//    }
//    for (int j = 0; j <= 5; j++) {
//        pop(stack);
//    }
//    printf("\n");
//    return 0;
//}
