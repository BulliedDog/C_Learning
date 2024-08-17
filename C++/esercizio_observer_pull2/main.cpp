#include<iostream>
#include"observer.h"
#include"subject.h"
#include"character.h"
#include"window.h"
int main(){
    Character character(10,20);
    Window window(&character);
    
    return 0;
}