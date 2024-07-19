#pragma once
#include<memory>
#include"Windows.h"
#include"Unix.h"
#include"MacOS.h"
class Abstract_file_system_factory{
    public:
        virtual std::unique_ptr<Windows> create_windows()=0;
        virtual std::unique_ptr<Unix> create_unix()=0;
        virtual std::unique_ptr<MacOS> create_macos()=0;
};