#include<stdlib.h>
#include<stdio.h>
typedef unsigned short int boolean;
#define true 1
#define false 0
struct record{
    float value;
    int next;
};
struct list{
    struct record * buffer;
    int first;
    int free;
    int size;
};
void init(struct list * ptr, int size){
    ptr->buffer=(struct record*)malloc(size*sizeof(struct record));
    ptr->first=size;
    ptr->free=0;
    ptr->size=size;
    for(int x=0;x<ptr->size;x++)
        ptr->buffer[x].next=x+1;
} 
boolean pre_insert(struct list * ptr, float value){
    if(ptr->free!=ptr->size){
        int moved;
        moved=ptr->free;
        ptr->free=ptr->buffer[ptr->free].next;
        ptr->buffer[moved].value=value;
        ptr->buffer[moved].next=ptr->first;
        ptr->first=moved;
        return true;
    }
    return false;
}
boolean suf_insert(struct list * ptr, float value){
    if(ptr->free!=ptr->size){   //se la lista non è piena
        int moved;
        int * pos_ptr;
        moved=ptr->free;
        ptr->free=ptr->buffer[ptr->free].next;
        pos_ptr=&ptr->first; //puntatore per arrivare all'ultimo next
        while(*pos_ptr!=ptr->size)
            pos_ptr=&ptr->buffer[*pos_ptr].next;
        *pos_ptr=moved;
        ptr->buffer[moved].value=value;
        ptr->buffer[moved].next=ptr->size;
        return true;
    }
    return false;
}
void print(struct list * ptr){
    if(ptr->first!=ptr->size){ //se non è vuota
        printf("stampa valori lista: ");
        for(int x=ptr->first;x<ptr->size;x=ptr->buffer[x].next)
            printf("[%f]",ptr->buffer[x].value);
        printf("\n");
    }
}
boolean search(struct list * ptr, float target, int * index){
    boolean found=false;
    if(ptr->first!=ptr->size){ //se la lista non è vuota
        int x=0;
        while(x<ptr->size&&found==false){
            if(ptr->buffer[x].value==target){
                found=true;
                *index=x;
            }
        }
    }
    return found;
}
int main(){
    struct list * lista = (struct list*)malloc(sizeof(struct list));
    init(lista, 10);
    for(int x=0;x<lista->size;x++)
        suf_insert(lista, x+1);
    print(lista);
}