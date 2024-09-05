#include<iostream>
#include<memory>
#include<list>
#include"adapter.h"
#include"object.h"
#include"sword.h"
#include"abstract.h"
int main(){
    std::list<std::unique_ptr<Object>> objects;
    objects.push_back(std::make_unique<Sword>());
    Abstract abstract;
    objects.push_back(std::make_unique<Adapter>(abstract));
    for(std::list<std::unique_ptr<Object>>::iterator it=objects.begin();it!=objects.end();it++)
        (*it)->print_name();
    return 0;
}