#include "fly.h"
double Fly::get_speed()
{
    return speed;
}
void Fly::set_speed(double amount)
{
    speed = amount;
}
void Fly::change_speed(double amount)
{
    speed += amount;
}