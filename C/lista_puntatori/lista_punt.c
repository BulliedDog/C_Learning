#include<stdlib.h>
#include<stdio.h>
typedef unsigned short int boolean;
#define true 1
#define false 0
struct list{
    float value;
    struct list * next_ptr;
};
void init(struct list ** ptrptr){
    *ptrptr=NULL;
}
void pre_insert(struct list ** ptrptr, float value){
    struct list * tmp_ptr;
    tmp_ptr=*ptrptr;
    *ptrptr=(struct list *)malloc(sizeof(struct list));
    (*ptrptr)->value=value;
    (*ptrptr)->next_ptr=tmp_ptr;
}
void suf_insert(struct list ** ptrptr, float value){
    while((*ptrptr)!=NULL)
        ptrptr=&((*ptrptr)->next_ptr);
    pre_insert(ptrptr, value);
}
void print(struct list ** ptrptr){
    printf("stampa valori lista: ");
    while((*ptrptr)!=NULL){
        printf("[%f]", (*ptrptr)->value);
        ptrptr=&((*ptrptr)->next_ptr);
    }
    printf("\n");
}
boolean consume_firt(struct list ** ptrptr, float * value){ //mangia il primo elemento della lista e lo schianta in value nel main
    if((*ptrptr)!=NULL){ //se la lista non è vuota
        *value=(*ptrptr)->value;
        struct list * tmp_ptr;
        tmp_ptr=*ptrptr;
        *ptrptr=(*ptrptr)->next_ptr;
        free(tmp_ptr);
        return true;
    }
    return false;
}
boolean rearch(struct list ** ptrptr, float target, int * count){ 
    boolean found=false;
    *count=0;
    int x=0;
    while((*ptrptr)!=NULL){
        x++;
        if((*ptrptr)->value==target){
            found = true;
            ptrptr = &((*ptrptr)->next_ptr);
            *count = x;
        }
    }
    return found;
}
boolean search_r(struct list ** ptrptr, float target){
    boolean found=false;
    if((*ptrptr)->value==target){
        found = true;
        return true;
    }
    return search_r(&(*ptrptr)->next_ptr, target);
}
int main(){
    struct list * lista;
    init(&lista);
    for(int x=0;x<10;x++)
        suf_insert(&lista, x+1);
    pre_insert(&lista, 45);
    if(search_r(&lista, 10))
        printf("il valore 10 è presente nella lista\n");
    else
        printf("il valore 10 non è presente nella lista\n");
    if(search_r(&lista, 11))
        printf("il valore 11 è presente nella lista\n");
    else
        printf("il valore 11 non è presente nella lista\n");
    print(&lista);

}