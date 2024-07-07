#include<stdlib.h>
#include<stdio.h>
typedef unsigned short int boolean;
#define true 1
#define false 0
struct list{
    float value;
    int code;
    struct list * next_ptr;
};
void init(struct list ** ptrptr){
    *ptrptr=NULL;
}
void pre_insert(struct list ** ptrptr, float value){
    struct list * tmp=*ptrptr;
    (*ptrptr)=(struct list*)malloc(sizeof(struct list));
    (*ptrptr)->value=value;
    (*ptrptr)->next_ptr=tmp;
}
void suf_insert(struct list ** ptrptr, float value){
    while(*ptrptr!=NULL)
        ptrptr=&((*ptrptr)->next_ptr);
    pre_insert(ptrptr, value);
}
void print(struct list * ptr){
    printf("Stampa valori lista: ");
    while(ptr!=NULL){
        printf("[%f]",ptr->value);
        ptr=ptr->next_ptr;
    }
    printf("\n");
}
float * get_value_ptr(struct list * ptr, int count){
    for(int x=0;x<count;x++)
        ptr=ptr->next_ptr;
    return &ptr->value;
}
void swap(float * a, float * b){
    float tmp=*a;
    *a=*b;
    *b=tmp;
}
void bubs(struct list * ptr){
    int iter=0,N=0,count=0;float *a,*b;
    boolean swap_found=false,iter_without_swap=false;
    struct list * pos = ptr;
    while(pos!=NULL){
        pos=pos->next_ptr;
        N++;    //dimensione lista
    }
    while(iter_without_swap==false){
        for(count=0,swap_found=false;count<N-iter-1;count++){
            a=get_value_ptr(ptr,count);
            b=get_value_ptr(ptr,count+1);
            if(*a>*b){
                swap(a,b);
                swap_found=true;
            }
        }
        if(swap_found==false)
            iter_without_swap=true;
        else
            iter++;
    }
}
void search(struct list ** ptrptr, float value){
    if(*ptrptr!=NULL){
        struct list * pos=*ptrptr;
        while(pos!=NULL){
            if(pos->value == value)
                return true;
            else
                pos=pos->next_ptr;
        }
    }
}
int main(){
    struct list * lista;
    init(&lista);
    for(int x=0;x<10;x++)
        pre_insert(&lista,x+1);
    suf_insert(&lista,0);
    pre_insert(&lista,2.5);
    print(lista);
    printf("Ordinamento lista...");
    bubs(lista); //ordinamento lista
    printf("\n");
    print(lista);
    return 0;
}