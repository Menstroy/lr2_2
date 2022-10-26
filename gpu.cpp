#include <iostream>
#include "gpu.h"
using namespace std;

gpu::gpu(string gpu_name, float gpu_price, int gpu_year) {
    this->gp_name = gpu_name;
    this->gp_price = gpu_price;
    this->gp_core = gpu_year;
}

gpu::gpu(string gpu_name) {
    this->gp_name = gpu_name;
}

gpu::gpu() {
}

gpu::~gpu() = default;

void gpu::input() {
    cout<<"Введите название видеокарты:";
    cin>>gp_name;
    cout<<"Введите цену видеокарты:";
    cin>>gp_price;
    cout<<"Введите год выпуска видеокарты:";
    cin>>gp_core;
}

void gpu::output() {
    cout<<"название видеокарты-"<< gp_name << "цена видеокарты-" << gp_price << "год выпуска видеокарты-" << gp_core << endl;
}