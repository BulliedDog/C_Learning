#pragma once
#include"antique_chair.h"
#include"antique_couch.h"
#include"abstract_factory.h"
class Antique_factory:public Abstract_factory{
    public:
        ~Antique_factory()=default;
        std::unique_ptr<Chair> create_chair()override{
            return std::make_unique<Antique_chair>();
        }
        std::unique_ptr<Couch> create_couch()override{
            return std::make_unique<Antique_couch>();
        }
};