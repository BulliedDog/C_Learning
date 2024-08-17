#pragma once
#include"elevator.h"
#include"legacy_elevator.h"
#include"legacy_elevator.cpp"
class Elevator_to_legacy_elevator_adapter:public LegacyElevator,private Elevator{
    public:
        Elevator_to_legacy_elevator_adapter(const Elevator& elevator):Elevator(elevator){}
        ~Elevator_to_legacy_elevator_adapter(){}
        void move_by(int level) override{
            Elevator::move_to(level);
        }
        void open_doors() override{
            Elevator::open_doors();
        }
        void close_doors() override{
            Elevator::close_doors();
        }
        void print() override{
            Elevator::print();
        }
};