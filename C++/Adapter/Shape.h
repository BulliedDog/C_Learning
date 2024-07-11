#pragma once
#include<iostream>
#include<string>
/**
 * @brief Classe Target
 */
class Shape{
    private:
        std::string name;
        int angles;
        unsigned int surface;
    public:
        explicit Shape(std::string name="Shape",int angles=3,unsigned int surface=3);
        Shape(const Shape& other);
        virtual ~Shape();
        ///@brief Questo è il metodo che sarà riscritto da Text_To_Shape_Adapter
        virtual void resize(int percent);
        //G&S//
        unsigned int get_surface() const;
        void set_surface(unsigned int surface);
};
