#ifndef UNTITLED21_PC_H
#define UNTITLED21_PC_H
#include <iostream>
#include "cpu.h"
#include "gpu.h"
#include "motherboard.h"
#include "ram.h"
#include "hdd.h"
class pc {
private:
    cpu _cpu;
    gpu _gpu;
    motherboard _motherboard;
    ram _ram;
    hdd _hdd;
public:
    pc(cpu _cpu, gpu _gpu, motherboard _motherboard, ram _ram, hdd _hdd);
    pc(cpu _cpu);
    pc();
    ~pc();
    void input();
    void output();
    float sum(pc p);
    void proverka(pc p);
};



#endif //UNTITLED21_PC_H
