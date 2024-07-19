#pragma once
#include<iostream>
#include<string>
#include<list>
#include<memory>
#include"File.h"
class Directory:public File{
    private:
        std::string nome;
        std::list<std::unique_ptr<File>> files; //ho deciso di cambiare in unique pointers invece di raw pointers
    public:
        Directory();
        Directory(std::string nome);
        Directory(const Directory& other);
        virtual ~Directory();
        virtual void add_file(File& file);
        virtual void remove_file(File& file);
};