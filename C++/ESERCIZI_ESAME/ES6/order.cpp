#pragma once
#include"order.h"
Order::Order(){}
void Order::cost(){
    total_cost=0;
    for(auto& i:items)
        total_cost+=i->get_product()->get_price();
}
void Order::show_items() const{
    std::cout<<"lista: "<<std::endl;
    for(auto& i:items)
        std::cout<<i->get_product()->get_name()<<std::endl;
}
void Order::add_item(OrderItem* item){
    items.push_back(item);
    qta++;
}
void Order::remove_item(OrderItem* item){
    items.remove(item);
    qta--;
}
float Order::get_total_cost() const{return total_cost;}