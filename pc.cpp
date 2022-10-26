#include <iostream>
#include "pc.h"
#include <ctime>

pc::pc(cpu _cpu, gpu _gpu, motherboard _motherboard, ram _ram, hdd _hdd) {
    this->_cpu = _cpu;
    this->_gpu = _gpu;
    this->_motherboard = _motherboard;
    this->_ram = _ram;
    this->_hdd = _hdd;
}

pc::pc(cpu _cpu) {
    this->_cpu = _cpu;
}

pc::pc() {

}

pc::~pc() {

}

void pc::input() {
    _cpu.input();
    _gpu.input();
    _motherboard.input();
    _ram.input();
    _hdd.input();
}

void pc::output() {
    _cpu.output();
    _gpu.output();
    _motherboard.output();
    _ram.output();
    _hdd.output();
}

float pc::sum(pc p) {
    float sum = 0;
    sum = p._cpu.cp_price+p._gpu.gp_price+p._motherboard.mb_price+p._ram.rm_price+p._hdd.hd_price;
    return sum;
}

void pc::proverka(pc p){
    if(p._cpu.cp_price > p._gpu.gp_price){
        printf("видеокарта не оптимальна подобрана под процессор, рекомендуем выбрать подороже видеокарту или более бюджетный процессор");
        int a;
        printf("вы будете менять видеокарту или процессор?\n 1-карту,0-процессор\n");
        cin >> a;
        if(a==1){
            _gpu.input();
        }
        else{
            _cpu.input();
        }
    }

}