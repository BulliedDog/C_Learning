#pragma once
#include"Abstract_file_system_factory.h"
#include<memory>
#include"Windows.h"
#include"Unix.h"
#include"MacOS.h"
class File_system_factory:public Abstract_file_system_factory{
    public:
        std::unique_ptr<Windows> create_windows() override;
        std::unique_ptr<Unix> create_unix() override;
        std::unique_ptr<MacOS> create_macos() override;
};