#pragma once
class Couch{
    public:
        virtual ~Couch()=default;
        virtual void lay_on()const =0;
};