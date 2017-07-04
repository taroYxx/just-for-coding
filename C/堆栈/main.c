//
//  main.c
//  堆栈
//
//  Created by Taro on 2017/7/3.
//  Copyright © 2017年 Taro. All rights reserved.
//

#include <stdio.h>
#include <mm_malloc.h>

#define Maxsize 100

static int *array = NULL;
static int count = 0;


void init(){
    array = (int *)malloc(sizeof(int)*Maxsize);
    if (!array) {
        printf("创建失败");
    }
}

void Push(int item){
    array[count++] = item;
}

void Pop(){
    printf("%d",array[count-1]);
    count--;
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int i = 0;
    init();
    for (; i<=5; i++) {
        printf("%d",i);
        Push(i);
        
    }
    printf("\n");
    for (i=0; i<=5; i++) {
        Pop();
        
    }
    
    
    
    return 0;
}
