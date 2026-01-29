#include <stdio.h>
#include <string.h>

typedef struct book
{
    int isbn;
    char bookName[20];
    double price;
}book;
 
int main(){
    book b;
    b.isbn = 76698;
    strcpy(b.bookName,"Java编程思想");
    b.price = 90.0;
    return 0;
}