#include<iostream>
#include"backpack.h"
#include"object.h"
#include"potion.h"
#include<iostream>
#include<memory>
int main(){
    Backpack<std::unique_ptr<Object>> backpack(10);
    if(backpack.add(std::make_unique<Potion>(8),8))
        std::cout<<"Elemento aggiunto con successo!"<<std::endl;
    else
        std::cerr<<"Elemento supera il volume disponibile!"<<std::endl;
    if(backpack.add(std::make_unique<Potion>(8),8))
        std::cout<<"Elemento aggiunto con successo!"<<std::endl;
    else
        std::cerr<<"Elemento supera il volume disponibile!"<<std::endl;
    return 0;
}