#include "dar.h"
#include<stdlib.h>
#include<stdio.h>

Dar* new_Dar(){
    Dar* d;
    d=(Dar*)malloc(sizeof(Dar));
    d->ar=(int*)malloc(sizeof(int)); //allocting space for one element
    d->size=1;
    d->length=0;
    return d;
}

int length(const Dar* d){
    return d->length;
}
void insert(Dar* d,const int pos,const ARRAY_TYPE value){
        if(pos<d->size){
            _normalinsert(d,pos,value);
        }else{
            _expandInsertion(d,pos,value);
        }


}

void dar_free(Dar* d){
    free(d->ar);
}

//_normalinsert, insert's an element without expanding array
void _normalinsert(Dar* d,const int pos,const ARRAY_TYPE value){
    if(pos>=d->length){
        *(d->ar+pos)=value;
        d->length=pos+1; //setting new position
    }else{
        //we need to shift array elements
        for(int i=d->length;i>pos;i--){
            *(d->ar+i)=*(d->ar+i-1);
        }
        *(d->ar+pos)=value;
        d->length++;
    }
}


void _expandInsertion(Dar* d,const int pos,const ARRAY_TYPE value){
    //it means we need to expand the array 
    int ns=sizeof(int)*(1+2*d->size);
    d->ar=(int*)realloc(d->ar,ns);
    *(d->ar+pos)=value;
    d->length=pos+1;
    d->size=ns/sizeof(int);
}

int size(const Dar* d){
    return d->size;
}

void printArray(const Dar* d){
    for(int i=0;i<length(d);i++){
        printf("\nar[%d] =  %d",i,*(d->ar+i));
    }
}