#ifndef UNTITLED21_GPU_H
#define UNTITLED21_GPU_H
#include <iostream>
#include <string.h>
using namespace std;

class gpu {
public:
    string gp_name;
    float gp_price;
    int gp_core;
    gpu(string gpu_name, float gpu_price, int gpu_core);
    gpu(string gpu_name);
    gpu();
    ~gpu();
    void input();
    void output();

};


#endif //UNTITLED21_GPU_H
