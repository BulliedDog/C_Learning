#pragma once
class Fly{
    private:    
        double speed;
        const double max_speed;
    public:
        Fly(double speed, double max_speed):speed(speed),max_speed(max_speed){};
        ~Fly(){};
        double get_speed();
        void set_speed(double amount);
        virtual void turn_off();
        void change_speed(double amount);
};