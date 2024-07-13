#pragma once
#include<iostream>
#include<string>
/**
 * @brief Classe Target
 */
class Shape{
    private:
        std::string name;
        unsigned int angles;
        double surface;
    public:
        explicit Shape(std::string name="Shape",unsigned int angles=3,double surface=3);
        Shape(const Shape& other);
        virtual ~Shape();
        ///@brief Questo è il metodo che sarà riscritto da Text_To_Shape_Adapter per adattare Text a Shape
        virtual void resize(int percentage);
        virtual void what_am_i();
        //G&S//
        double get_surface() const;
        void set_surface(double surface);
        std::string get_name() const;
        void set_name(std::string name);
        unsigned int get_angles() const;
        void set_angles(unsigned int angles);
};
