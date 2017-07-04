//
//  main.c
//  二叉树非递归遍历
//
//  Created by Taro on 2017/7/4.
//  Copyright © 2017年 Taro. All rights reserved.
//

#include <stdio.h>
#include "stack.h"
#include <mm_malloc.h>


//typedef struct BiTree{
//    char data;
//    struct BiTree* rightT;
//    struct BiTree* leftT;
//}BiTNode, *BiTree;

BiTree initTree(){
    char inputdata;
    BiTree T;
    scanf("%c",&inputdata);
    if (inputdata == '#') {
        T = NULL;
    }else{
        T = (BiTree)malloc(sizeof(BiTree));
        if (!T) {
            printf("创建内存失败");
            return NULL;
        }
        T->data = inputdata;
        T->leftT = initTree();
        T->rightT = initTree();
    }
    return T;
}

void inOrderTraverse(BiTree T){
    
    Stack *stack = initStack();
    push(stack, T);
    BiTree popT = NULL;
    
    while (T || !isEmpty(stack)) {
        while (T) {
            push(stack, T);
            T = T->leftT;
        }
        if (!isEmpty(stack)) {
            pop(stack,popT);
            printf("%c",popT->data);
            T = T->rightT;
        }
    }
}


int main(int argc, const char * argv[]) {
    
    BiTree T = initTree();
    
    inOrderTraverse(T);
    
    
    
    
//    Stack *stack = inin();
//        for (int i = 0; i <= 5; i++) {
//            push(stack, i);
//    
//        }
//        for (int j = 0; j <= 5; j++) {
//            pop(stack);
//        }
//        printf("\n");
//    
    
    return 0;
}
