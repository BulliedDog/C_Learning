#pragma once
#include<vector>
template<typename T>
class Backpack{
    protected:
        int max_volume;
        int volume_left;
        std::vector<T> items;
    public:
        Backpack(int max_volume=0):max_volume{max_volume},volume_left{max_volume}{}
        Backpack(const Backpack& other)=default;
        ~Backpack()=default;
        bool add(T item,int volume){
            if(volume_left-volume<0)
                return false;
            this->items.push_back(item);
            this->volume_left-volume;
            return true;
        }
        void remove(int volume){
            this->items.pop_back();
            this->volume_left+=volume;
        }
};