#include <iostream>
#include "cpu.h"
using namespace std;

cpu::cpu(string cpu_name, float cpu_price, int cpu_core) {
    this->cp_name = cpu_name;
    this->cp_price = cpu_price;
    this->cp_core = cpu_core;
}

cpu::cpu(string cpu_name) {
    this->cp_name = cpu_name;
}

cpu::cpu() {
}

cpu::~cpu() = default;

void cpu::input() {
    cout<<"Введите название процессора:";
    cin>>cp_name;
    cout<<"Введите цену процессора:";
    cin>>cp_price;
    cout<<"Введите количество ядер:";
    cin>>cp_core;
}

void cpu::output() {
    cout<<"название процессора-"<< cp_name << "цена процессора- " << cp_price << "количество ядер-" << cp_core << endl;
}