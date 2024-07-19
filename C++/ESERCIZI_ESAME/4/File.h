#pragma once
#include<string>
#include"Permission.h"
class File{
    private:
        std::string nome;
        int dimensione;
        Permission permission;
    public:
        File();
        File(std::string nome,int dimensione,bool read_only=false);
        virtual ~File();
        virtual void rename(std::string nome);
        std::string get_name() const;
        void set_name(std::string nome);
        int get_dimensione() const;
        void set_dimensione(int dimensione);
};