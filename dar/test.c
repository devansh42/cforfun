#include<stdio.h>
#include"dar.h"

void main(){
    Dar* d;
    d=new_Dar();
    insert(d,1,20);
    insert(d,2,30);
    insert(d,3,40);
    insert(d,10,500);

    printArray(d);
    insert(d,3,400);
    printArray(d);
    dar_free(d); //deallocating array
}