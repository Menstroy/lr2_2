#ifndef UNTITLED21_RAM_H
#define UNTITLED21_RAM_H
#include <iostream>
#include <string.h>
using namespace std;

class ram {
public:
    string rm_name;
    float rm_price;
    int rm_volume;
    ram(string ram_name, float ram_price, int ram_volume);
    ram(string ram_name);
    ram();
    ~ram();
    void input();
    void output();

};

#endif //UNTITLED21_GPU_H