#pragma once
#include"nota.h"
class Audio:public Nota{
    private:
        std::string path;
        float durata;
    public:
        Audio(std::string path,float durata);
        ~Audio();
        void tipo() override;
        void show() override;
};