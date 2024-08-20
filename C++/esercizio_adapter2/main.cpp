#include<iostream>
#include<memory>
#include"adapter.h"
#include"target.h"
#include"adaptee.h"
#include<list>
int main(){
    std::list<Target> list;
    Target target1("Jhonny");
    Target target2("Kyle");
    Adaptee adaptee1;
    Adaptee adaptee2("Not Random");
    Adapter adapter1(adaptee1);
    Adapter adapter2(adaptee2);
    list.push_back(target1);
    list.push_back(target2);
    //list.push_back(adaptee1); NOT OF SAME TYPE!!!
    list.push_back(adapter1); //correct way!
    list.push_back(adapter2);
    for(auto it=list.begin();it!=list.end();it++)
        (*it).print();
    return 0;
}