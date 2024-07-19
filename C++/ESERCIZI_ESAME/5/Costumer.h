#pragma once
#include<string>
class Costumer{
    private:
        std::string nome;
        std::string numero;
    public:
        Costumer(std::string nome,std::string numero);
        ~Costumer();
        std::string get_nome() const;
        void set_nome(std::string& nome);
        std::string get_numero() const;
        void set_numero(std::string& numero);
};