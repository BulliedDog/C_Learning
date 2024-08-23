#pragma once
class Chair{
    public:
        virtual ~Chair()=default;
        virtual void sit_on()const=0;
};