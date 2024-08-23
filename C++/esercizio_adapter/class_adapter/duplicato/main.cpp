#include<iostream>
#include<list>
#include"character.h"
#include"plant.h"
#include"adapter.h"
int main(){
    std::list<Character*> lista;
    Character alberto;
    lista.push_back(&alberto);
    Plant apple;
    Adapter adapter(apple);
    lista.push_back(&adapter);
    for(auto it=lista.begin();it!=lista.end();it++)
        (*it)->die();
    return 0;
}