#pragma once
#include"observer.h"
class Subject{
    public:
        virtual ~Subject(){}
        virtual void subscribe(Observer* o)=0;
        virtual void unsubscribe(Observer* o)=0;
        virtual void notify()=0;
};