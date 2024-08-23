#pragma once
#include"abstract_factory.h"
#include"modern_chair.h"
#include"modern_couch.h"
#include<memory>
class Modern_factory:public Abstract_factory{
    public:
        ~Modern_factory()=default;
        std::unique_ptr<Chair> create_chair()override{
            return std::make_unique<Modern_chair>();
        }
        std::unique_ptr<Couch> create_couch()override{
            return std::make_unique<Modern_couch>();
        }
};