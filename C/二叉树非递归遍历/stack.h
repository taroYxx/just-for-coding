//
//  stack.h
//  堆栈
//
//  Created by Taro on 2017/7/4.
//  Copyright © 2017年 Taro. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>

typedef struct BiTree{
    char data;
    struct BiTree* rightT;
    struct BiTree* leftT;
}BiTNode, *BiTree;

typedef struct Stack{
    struct BiTree* tree;
    struct Stack* next;
}Stack,*Next;

Stack *initStack();

int isEmpty(Stack* stack);
void push(Stack *top, BiTree tree);
void pop(Stack *top, BiTree T);


#endif /* stack_h */
