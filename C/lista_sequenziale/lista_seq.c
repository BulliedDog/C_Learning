#include<stdlib.h>
#include<stdio.h>
typedef unsigned short int boolean;
#define true 1
#define false 0
struct list_seq{
    float * buffer;
    int head;
    int tail;
    int size;
};
void init(struct list_seq * ptr, int size){
    ptr->buffer=(float *)malloc(size*sizeof(float));
    ptr->head=0;
    ptr->tail=0;
    ptr->size=size;
}
boolean pre_insert(struct list_seq * ptr, float value){
    if((ptr->tail+1)%ptr->size!=ptr->head){ //se la lista non è piena
        ptr->head=(ptr->head-1+ptr->size)%ptr->size;
        ptr->buffer[ptr->head]=value;
        return true;
    }
    return false;
}
boolean suf_insert(struct list_seq * ptr, float value){
    if((ptr->tail+1)%ptr->size!=ptr->head){ //se la lista non è piena
        ptr->buffer[ptr->tail]=value;
        ptr->tail=(ptr->tail+1)%ptr->size;
        return true;
    }
    return false;
}
void print(struct list_seq * ptr){
    if(ptr->head!=ptr->tail){   //se la lista non è vuota
        printf("Stampa lista: ");
        for(int x=ptr->head;x<ptr->tail;x=(x+1)%ptr->size)
            printf("[%f]",ptr->buffer[x]);
        printf("\n");
    }
}
boolean search(struct list_seq * ptr, float target, int * index){
    boolean found=false;
    if(ptr->head!=ptr->tail){
        int x=0;
        while(x<ptr->size&&found==false){
            if(ptr->buffer[x]==target){
                *index=x;
                printf("il valore %f si trova nella posizione %d", target, *index);
                printf("\n");
                found=true;
            }
            x++;
        }
    }
    return found;
}
int main(){
    struct list_seq * lista=(struct list_seq*)malloc(sizeof(struct list_seq));
    init(lista, 10);
    for(int x=0;x<lista->size;x++)
        suf_insert(lista, x+1);
    int index_target;
    if(pre_insert(lista, 0)==false)
        printf("errore la lista è piena!\n");
    else{
        search(lista,0,&index_target);
    }
    print(lista);
    search(lista, 5, &index_target);
    return 0;
}