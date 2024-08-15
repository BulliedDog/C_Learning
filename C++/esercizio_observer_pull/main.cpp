#include<iostream>
#include"character.h"
#include"observer.h"
#include"subject.h"
#include"window.h"
int main(){
    Character character(1,5);
    Window window(&character);
    character.print();
    window.print();
    character.set_posx(2);
    character.set_posy(4);
    character.print();
    window.print();
    return 0;
}