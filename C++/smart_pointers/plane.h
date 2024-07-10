#pragma once
#include<string>
/**
 * @brief Classe di aeroplani
 */
class Plane{
    private:
        std::string name;
        std::string model;
        int wings;
        int propellers;
    public:
        Plane(std::string name="Plane",std::string model="Unknown",int wings=2,int propellers=1);
        Plane(Plane& other);
        ~Plane();
        void what();
        //getter and setter
        void set_name(std::string name);
        void set_model(std::string model);
        void set_wings(int wings);
        void set_propellers(int propellers);
        std::string get_name();
        std::string get_model();
        int get_wings();
        int get_propellers();
};