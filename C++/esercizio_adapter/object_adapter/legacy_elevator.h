#pragma once
#include<iostream>
class LegacyElevator{
    private:
        int level;
        bool door_open;
    public:
        LegacyElevator(int level=0,bool door_open=true);
        int get_current_level() const;
        virtual void move_by(int level);
        virtual void open_doors();
        virtual void close_doors();
        virtual void print();
};