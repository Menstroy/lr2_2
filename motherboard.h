#ifndef UNTITLED21_MOTHERBOARD_H
#define UNTITLED21_MOTHERBOARD_H
#include <iostream>
#include <string.h>
using namespace std;

class motherboard {
public:
    string mb_name;
    float mb_price;
    int mb_year;
    motherboard(string motherboard_name, float motherboard_price, int motherboard_year);
    motherboard(string motherboard_name);
    motherboard();
    ~motherboard();
    void input();
    void output();

};

#endif //UNTITLED21_motherboard_H