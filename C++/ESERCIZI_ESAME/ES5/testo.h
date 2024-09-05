#pragma once
#include"nota.h"
class Testo:public Nota{
    private:
        std::string testo;
    public:
        Testo(std::string t="");
        ~Testo();
        void tipo() override;
        void show() override;
};