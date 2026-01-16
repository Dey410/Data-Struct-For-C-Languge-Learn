/*设计一个函数，传入两个int参数，并交换这两个参数的值。
#include <stdio.h>

void swap(int *p1,int *p2){
    int temp;
    temp = *p1;*p1 = *p2;*p2 = temp;
}

int main(){
    int m = 5;
    int n = 10;
    int *p1 = &m,*p2 = &n;
    printf("m=%d,n=%d\n",*p1,*p2);
    swap(p1,p2);
    printf("m=%d,n=%d\n",*p1,*p2);
    return 0;
}
*/