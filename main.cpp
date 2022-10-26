#include <iostream>
#include "cpu.h"
#include "gpu.h"
#include "motherboard.h"
#include "ram.h"
#include "hdd.h"
#include "pc.h"
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float summ;
    cpu _cpu = cpu("cp_name", 0, 0);
    gpu _gpu = gpu("gp_name", 0, 0);
    motherboard _motherboard = motherboard("motherboard_name", 0, 0);
    ram _ram = ram("ram_name", 0,0);
    hdd _hdd = hdd("hdd_name", 0, 0);
    pc *config = new pc[2];
    config[0] = pc(_cpu, _gpu, _motherboard, _ram, _hdd);
    config[0].input();
    summ = config->sum(*config);
    config->proverka(*config);
    config[0].output();
    delete config;
    delete[] config;
}