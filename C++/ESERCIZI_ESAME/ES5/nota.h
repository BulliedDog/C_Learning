#pragma once
#include<list>
#include<iostream>
class Nota{
    protected:
        std::list<std::string> tags;
    public:
        Nota();
        virtual ~Nota();
        virtual void tipo()=0;
        virtual void show()=0;
        void add_tag(std::string tag);
        void show_tags();
        std::list<std::string> get_tags() const;
};