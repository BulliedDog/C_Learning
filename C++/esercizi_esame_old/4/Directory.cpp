#pragma once
#include<iostream>
#include<string>
#include<list>
#include<memory>
#include"File.h"
#include"Directory.h"
Directory::Directory(){

}
Directory::Directory(std::string nome):nome{nome}{

}
Directory::~Directory(){

}
Directory::Directory(const Directory& other):nome(other.nome){

}
void Directory::add_file(File& file){
    this->files.push_back(std::make_unique<File>(file));
}
void Directory::remove_file(File& file){
    this->files.remove(std::make_unique<File>(file));
}
