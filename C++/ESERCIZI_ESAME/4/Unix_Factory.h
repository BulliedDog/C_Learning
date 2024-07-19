#pragma once
#include"Abstract_file_system_factory.h"
class Unix_Factory:public Abstract_file_system_factory{
    public:
        std::unique_ptr<File_system> create_file_system() override{
            return std::make_unique<Unix>();
        }
};