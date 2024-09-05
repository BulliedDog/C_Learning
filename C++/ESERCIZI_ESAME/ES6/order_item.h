#pragma once
#include"product.h"
class OrderItem{
    private:
        Product* product;
    public:
        OrderItem(Product* p);
        Product* get_product() const;
};