#include"File.h"
#include"File.cpp"
#include"Directory.h"
#include"Directory.cpp"
#include"Abstract_file_system_factory.h"
#include"File_system_factory.h"
#include"File_system_factory.cpp"
#include"MacOS.h"
#include"Permission.h"
#include"Permission.cpp"
#include"Unix.h"
#include"Windows.h"
#include"File_system.h"
#include<iostream>
#include<string>
#include<memory>
#include<list>
int main(){
    std::list<std::unique_ptr<File_system>> lista_file_system;
    File_system_factory factory;
    lista_file_system.push_back(factory.create_windows());
    lista_file_system.push_back(factory.create_unix());
    lista_file_system.push_back(factory.create_macos());
    for(auto it=lista_file_system.begin();it!=lista_file_system.end();it++){
        (*it)->print();
    }
}