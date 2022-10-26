#ifndef UNTITLED21_CPU_H
#define UNTITLED21_CPU_H
#include <iostream>
#include <string.h>
using namespace std;

class cpu {
public:
    string cp_name;
    float cp_price;
    int cp_core;
    cpu(string cpu_name, float cpu_price, int cpu_core);
    cpu(string cpu_name);
    cpu();
    ~cpu();
    void input();
    void output();
};

#endif //UNTITLED21_CPU_H
