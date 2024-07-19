#pragma once
#include<memory>
#include"Windows.h"
#include"Unix.h"
#include"MacOS.h"
class Abstract_file_system_factory{
    public:
        virtual std::unique_ptr<File_system> create_file_system()=0;
};