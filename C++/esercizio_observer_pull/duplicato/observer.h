#pragma once
#include<iostream>
class Observer{
    public:
        virtual void attach()=0;
        virtual void detatch()=0;
        virtual void update()=0;
};