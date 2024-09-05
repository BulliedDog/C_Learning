#pragma once
#include"order.h"
class Costumer{
    private:
        std::list<Order*> orders;
    public:
        void add_order(Order* o);
        void remove_order(Order* o);
        void show_orders() const;
        void calculate_costs();
};