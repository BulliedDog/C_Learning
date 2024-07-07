#pragma once
#include "fly.h"
class Helicopter:public Fly{
    private:
        int propellors;
    public:
        void turn_off() override;
};