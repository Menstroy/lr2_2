#include <iostream>
#include "hdd.h"
using namespace std;

hdd::hdd(string hdd_name, float hdd_price, int hdd_volume) {
    this->hd_name = hdd_name;
    this->hd_price = hdd_price;
    this->hd_volume = hdd_volume;
}

hdd::hdd(string hdd_name) {
    this->hd_name = hdd_name;
}

hdd::hdd() {
}

hdd::~hdd() = default;

void hdd::input() {
    cout<<"Введите название жесткого диска:";
    cin>>hd_name;
    cout<<"Введите цену жесткого диска:";
    cin>>hd_price;
    cout<<"Введите объем жесткого диска:";
    cin>>hd_volume;
}

void hdd::output() {
    cout<<"название жесткого диска-"<< hd_name << "цена жесткого диска-" << hd_price << "объем жесткого диска-" << hd_volume << endl;
}