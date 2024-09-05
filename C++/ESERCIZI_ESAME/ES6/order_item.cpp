#pragma once
#include"order_item.h"
OrderItem::OrderItem(Product* p):product(p){}
Product* OrderItem::get_product() const{return product;}