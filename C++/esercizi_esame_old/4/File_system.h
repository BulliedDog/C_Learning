#pragma once
#include<iostream>
class File_system{
    private:
        std::string type;
    public:
        virtual ~File_system(){};
        virtual void print()=0;
        std::string get_type(){return type;}
        void set_type(std::string type){this->type=type;}
        virtual void add_directory(Directory& directory)=0;
        virtual void remove_directory(Directory& directory)=0;
};