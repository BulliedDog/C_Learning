#pragma once
#include<string>
#include<list>
class Permission{
    private:
        bool read_only;
        std::list<std::string> utenti;
    public:
        Permission(bool read_only=false);
        virtual ~Permission();
        virtual void add_user(std::string nome);
        virtual void remove_user(std::string nome);
        void flip_read_only();
        bool get_read_only() const;
        void set_read_only(bool read_only);
};