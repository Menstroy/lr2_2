#include <iostream>
#include "motherboard.h"
using namespace std;

motherboard::motherboard(string motherboard_name, float motherboard_price, int motherboard_year) {
    this->mb_name = motherboard_name;
    this->mb_price = motherboard_price;
    this->mb_year = motherboard_year;
}

motherboard::motherboard(string motherboard_name) {
    this->mb_name = motherboard_name;
}

motherboard::motherboard() {
}

motherboard::~motherboard() = default;

void motherboard::input() {
    cout<<"Введите название материнской платы:";
    cin>>mb_name;
    cout<<"Введите цену материнской платы:";
    cin>>mb_price;
    cout<<"Введите год материнской платы:";
    cin>>mb_year;
}

void motherboard::output() {
    cout<<"название материнской платы-"<< mb_name << "цена материнской платы-" << mb_price << "год выпуска материнской платы-" << mb_year << endl;
}