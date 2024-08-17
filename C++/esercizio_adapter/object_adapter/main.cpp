#include<iostream>
#include<vector>
#include<list>
#include<memory>
#include"legacy_elevator.h"
#include"elevator.h"
#include"elevator_to_legacy_elevator_adapter.h"
int main(){
    std::list<std::unique_ptr<LegacyElevator>> elevators;
    elevators.push_back(std::make_unique<LegacyElevator>());
    Elevator el(4);
    elevators.push_back(std::make_unique<Elevator_to_legacy_elevator_adapter>(el));
    for(auto& x:elevators){
        x->move_by(-2);
        x->move_by(-2);
        x->open_doors();
        x->print();
    }
}