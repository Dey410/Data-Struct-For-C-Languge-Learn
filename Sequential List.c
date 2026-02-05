//顺序表
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
typedef int ElemType;

//顺序表定义
typedef struct 
{
    ElemType data[MAXSIZE];
    int length;
}SeqList;

// 初始化顺序表
SeqList* initList() {
    SeqList* List = (SeqList*)malloc(sizeof(SeqList));
    List->data = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
    List->length = 0;
    return List;
}
//在尾部添加元素
int appendElem(SeqList *List,ElemType valuue){
    if (List->length>=MAXSIZE)
    {
        printf("顺序表已满\n");
        return 0;
    }
    List->data[List->length] = valuue;
    List->length++;
    return 1;
}

//打印链表内容
void PrintListElem(SeqList *List){
    for(int i=0;i<List->length-1;i++){
        printf("%d->",List->data[i]);
    }
    printf("%d\n",List->data[List->length-1]);
}

//删除尾部元素
int DeleteBackElem(SeqList *List){
    if(List->length == 0){
        printf("顺序表无元素");
        return 0;
    }
    List->length--;
    return 1;
}
//插入元素
void InsertElem(SeqList *List,int pot,ElemType value){
    if(pot<=List->length){
        for(int i = List->length-1;i>=pot-1;i--){
            List->data[i+1] = List->data[i];
        }
        List->length++;
        List->data[pot] = value;
    }
    return 0;
}

//查找数据位置
int findElem(SeqList *List,ElemType value){
    int size = 0;
    while (List->length != size)
    {
        if(List->data[size] == value){
            printf("%d的位置是:%d\n",value,size+1);
            return size;
        }
        size++;
    }
    return -1;
    
}

int main(int argc, char const *argv[])
{
    SeqList List;
    initList();
    appendElem(&List,23);
    appendElem(&List,49);
    appendElem(&List,36);
    appendElem(&List,58);
    PrintListElem(&List);
    InsertElem(&List,1,1);
    findElem(&List,23);
    return 0;
}
