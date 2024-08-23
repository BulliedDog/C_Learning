#pragma once
#include"chair.h"
#include"couch.h"
#include<memory>
class Abstract_factory{
    public:
        virtual ~Abstract_factory()=default;
        virtual std::unique_ptr<Chair> create_chair()=0;
        virtual std::unique_ptr<Couch> create_couch()=0;
};