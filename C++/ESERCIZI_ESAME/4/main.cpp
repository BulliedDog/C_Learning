#include"File.h"
#include"File.cpp"
#include"Directory.h"
#include"Directory.cpp"
#include"Abstract_file_system_factory.h"
#include"MacOS_Factory.h"
#include"Unix_Factory.h"
#include"Windows_Factory.h"
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
    MacOS_Factory macos_factory;
    Windows_Factory windows_factory;
    Unix_Factory unix_factory;
    lista_file_system.push_back(macos_factory.create_file_system());
    lista_file_system.push_back(windows_factory.create_file_system());
    lista_file_system.push_back(unix_factory.create_file_system());
    for(auto it=lista_file_system.begin();it!=lista_file_system.end();it++){
        (*it)->print();
    }
    Directory cartella("ciao");
    (*lista_file_system.begin())->add_directory(cartella);
}