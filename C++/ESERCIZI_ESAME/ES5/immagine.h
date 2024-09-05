#pragma once
#include"nota.h"
class Immagine:public Nota{
    private:
        std::string path;
        int dim;
    public:
        Immagine(std::string path,int dim);
        ~Immagine();
        void tipo() override;
        void show() override;
};