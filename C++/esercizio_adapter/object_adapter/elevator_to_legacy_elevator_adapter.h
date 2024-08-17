#pragma once
#include"elevator.h"
#include"legacy_elevator.h"
#include"legacy_elevator.cpp"
class Elevator_to_legacy_elevator_adapter:public LegacyElevator{
    private:
        Elevator* el;
    public:
        Elevator_to_legacy_elevator_adapter(Elevator* elevator):el{elevator}{}
        ~Elevator_to_legacy_elevator_adapter(){}
        void move_by(int level) override{
            el->move_to(level);
        }
        void open_doors() override{
            el->open_doors();
        }
        void close_doors() override{
            el->close_doors();
        }
        void print() override{
            el->print();
        }
};