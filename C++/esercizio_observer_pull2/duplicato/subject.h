#pragma once
#include"observer.h"
#include<memory>
class Subject{
    public:
        virtual ~Subject(){}
        virtual void subscribe(std::unique_ptr<Observer>& o){}
        virtual void unsubscribe(std::unique_ptr<Observer>& o){}
        virtual void notify()=0;
};