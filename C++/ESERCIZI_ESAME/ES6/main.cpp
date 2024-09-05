#include<iostream>
#include"costumer.h"
#include"order.h"
#include"product.h"
#include"order_item.h"
#include"costumer.cpp"
#include"order.cpp"
#include"product.cpp"
#include"order_item.cpp"
int main(){
    Product p1(20,"Apple");
    Product p2(7,"Milk");
    Product p3(90,"Egg");
    OrderItem order_item1(&p1);
    OrderItem order_item2(&p2);
    OrderItem order_item3(&p3);
    Order order1;
    Order order2;
    order1.add_item(&order_item1);
    order1.add_item(&order_item2);
    order2.add_item(&order_item3);
    Costumer costumer;
    costumer.add_order(&order1);
    costumer.add_order(&order2);
    costumer.show_orders();
    costumer.calculate_costs();
    return 0;
}