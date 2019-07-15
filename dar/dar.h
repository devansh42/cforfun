
#ifndef DAR_H

#define DAR_H

#define ARRAY_TYPE int

typedef struct {
    int length;
    int size;
    ARRAY_TYPE *ar;
    
} Dar; //Dar = > Dynamic array


Dar* new_Dar() ;
void _normalinsert(Dar*,const int,const ARRAY_TYPE);
void _expandInsertion(Dar*,const int,const ARRAY_TYPE);
void insert(Dar*,const int,const ARRAY_TYPE);
int length(const Dar*);
int size(const Dar*);
void dar_free(Dar*);
void printArray(const Dar*);
#endif
