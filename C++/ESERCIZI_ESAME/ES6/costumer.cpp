#pragma once
#include"costumer.h"
void Costumer::add_order(Order* o){
    orders.push_back(o);
}
void Costumer::remove_order(Order* o){
    orders.remove(o);
}
void Costumer::show_orders() const{
    int i=0;
    for(auto& o:orders){
        std::cout<<"Order "<<++i<<std::endl;
        o->show_items();
    }
}
void Costumer::calculate_costs(){
    int i=0;
    for(auto& o:orders){
        std::cout<<"Order "<<++i<<" total cost is ";
        o->cost();
        std::cout<<o->get_total_cost()<<"€"<<std::endl;
    }
}