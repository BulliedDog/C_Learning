#include"File_system_factory.h"
#include"Windows.h"
#include"Unix.h"
#include"MacOS.h"
std::unique_ptr<Windows> File_system_factory::create_windows(){
    return std::make_unique<Windows>();
}
std::unique_ptr<Unix> File_system_factory::create_unix(){
    return std::make_unique<Unix>();
}
std::unique_ptr<MacOS> File_system_factory::create_macos(){
    return std::make_unique<MacOS>();
}