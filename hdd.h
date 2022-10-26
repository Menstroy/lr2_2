#ifndef UNTITLED21_HDD_H
#define UNTITLED21_HDD_H
#include <iostream>
#include <string.h>
using namespace std;

class hdd {
public:
    string hd_name;
    float hd_price;
    int hd_volume;
    hdd(string hd_name, float hd_price, int hd_volume);
    hdd(string hd_name);
    hdd();
    ~hdd();
    void input();
    void output();

};

#endif //UNTITLED21_GPU_H