#pragma once
#include"File.h"
#include"Permission.h"
#include"Directory.h"
#include"File_system.h"
#include<algorithm>
#include<memory>
#include<list>
class Windows:public Permission,public Directory,public File_system{
    private:
        std::list<std::unique_ptr<Directory>> directories;
    public:
        Windows(){this->set_type("Windows");}
        ~Windows(){}
        void add_directory(Directory& directory) override{
            directories.push_back(std::make_unique<Directory>(directory));
        }
        void remove_directory(Directory& directory) override{
            directories.erase(std::find(directories.begin(),directories.end(),std::make_unique<Directory>(directory)));
        }
        void add_file(File& file) override{}
        void remove_file(File& file) override{}
        void rename(std::string nome) override{}
        void add_user(std::string nome) override{}
        void remove_user(std::string nome) override{}
        void print() override{
            std::cout<<"I am "<<this->get_type()<<std::endl;
        }
};