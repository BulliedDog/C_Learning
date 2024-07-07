#include<stdlib.h>
#include<stdio.h>
typedef unsigned short int boolean;
#define true 1
#define false 0
#define PRECISION .000001
struct list{
    float * buffer;
    int head;
    int tail;
    int size;
};
void init(struct list * ptr, int size){
    ptr->buffer=(float *)malloc(size*sizeof(float));
    ptr->head=0;
    ptr->tail=0;
    ptr->size=size;
    //non importa effettuare alcun ciclo for mentre nella lista collegata con array e indici sì
}
boolean pre_insert(struct list * ptr, float value){
    if((ptr->tail+1)%ptr->size!=ptr->head){ //la lista non è piena
        ptr->head=(ptr->head-1+ptr->size)%ptr->size;
        ptr->buffer[ptr->head]=value;
        return true;
    }
    return false;
}
boolean suf_insert(struct list * ptr, float value){
    if((ptr->tail+1)%ptr->size!=ptr->head){ //sempre se la lista non è piena
        ptr->buffer[ptr->tail]=value;
        ptr->tail=(ptr->tail+1)%ptr->size;
        return true;
    }
    return false;
}
void print(struct list * ptr){
    if(ptr->tail!=ptr->size){ //se la lista non è vuota
        printf("Valori lista: ");
        for(int x=ptr->head;x<ptr->tail;x=(x+1)%ptr->size)
            printf("[%f]",ptr->buffer[x]);
        printf("\n");
    }
}
int main(){
    struct list * lista = (float*)malloc(sizeof(struct list));
    init(lista, 20);
    for(int x=0;x<lista->size;x++)
        suf_insert(lista, x+1);
    print(lista);
    return 0;
}