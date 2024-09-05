#pragma once
#include<iostream>
class Observer{
    public:
        virtual ~Observer()=default;
        virtual void update()=0;
};