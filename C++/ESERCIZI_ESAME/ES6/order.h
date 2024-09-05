#pragma once
#include<list>
#include"order_item.h"
class Order{
    private:
        std::list<OrderItem*> items;
        float total_cost{0};
        int qta{0};
    public:
        Order();
        void cost();
        void show_items() const;
        void add_item(OrderItem* item);
        void remove_item(OrderItem* item);
        float get_total_cost() const;
};