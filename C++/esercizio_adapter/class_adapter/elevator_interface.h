#pragma once
class Elevator_interface{
    public:
        virtual ~Elevator_interface(){}
        virtual void move_to(int level) = 0;
        virtual void open_doors() = 0;
        virtual void close_doors() = 0;
};