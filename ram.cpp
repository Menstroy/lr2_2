#include <iostream>
#include "ram.h"
using namespace std;

ram::ram(string ram_name, float ram_price, int ram_volume) {
    this->rm_name = ram_name;
    this->rm_price = ram_price;
    this->rm_volume = ram_volume;
}

ram::ram(string ram_name) {
    this->rm_name = ram_name;
}

ram::ram() {
}

ram::~ram() = default;

void ram::input() {
    cout<<"Введите название оперативной памяти:";
    cin>>rm_name;
    cout<<"Введите цену оперативной памяти:";
    cin>>rm_price;
    cout<<"Введите объем оперативной памяти:";
    cin>>rm_volume;
}

void ram::output() {
    cout<<"название оперативной памяти-"<< rm_name << "цена оперативной памяти-" << rm_price << "объем оперативной памяти-" << rm_volume << endl;
}