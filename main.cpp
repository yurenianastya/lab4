#include "laptop.h"
#include <string.h>
#include <iostream>
using namespace std;
int main(){
    Laptop number_1(" Windows ",8,345,3256," Lenovo ",34," N7365er ");
    Laptop number_2(" IoT ",4,3245,553256," HP ",64," T4365er ");
    Laptop number_3(" Linux ",28,44575,243256," Meizu ",54," UIe65er ");
    cout << "Model:" << number_2.getModel() << endl;
    cout << "OS:" << number_2.getOS() << endl;
    cout << "Firm:" << number_2.getNameOfFirm() << endl;
    cout << "RAM:" << number_2.getStorageRAM() << endl;
    cout << "Diagonal:" << number_2.getDiagonal() << endl;
    cout << "CPU Gen:" << number_2.getCPUgeneration() << endl;
    cout << "CPU speed:" << number_2.getSpeedCPU() << endl;
    cout << "Model:" << number_1.getModel() << endl;
    cout << "OS:" << number_1.getOS() << endl << "\n";
    cout << "Firm:" << number_1.getNameOfFirm() << endl;
    cout << "RAM:" << number_1.getStorageRAM() << endl;
    cout << "Diagonal:" << number_1.getDiagonal() << endl;
    cout << "CPU Gen" << number_1.getCPUgeneration() << endl;
    cout << "CPU speed:" << number_1.getCPUgeneration() << endl;
    cout << "CPU speed:" << number_1.getSpeedCPU() << endl << "\n";
    cout << "Model:" << number_3.getModel() << endl;
    cout << "OS:" << number_3.getOS() << endl;
    cout << "Firm:" << number_3.getNameOfFirm() << endl;
    cout << "RAM:" << number_3.getStorageRAM() << endl;
    cout << "Diagonal:" << number_3.getDiagonal() << endl;
    cout << "CPU Gen:" << number_3.getCPUgeneration() << endl;
    cout << "Cpu Speed:" << number_3.getCPUgeneration() << endl;
    cout << "Cpu speed:" << number_3.getSpeedCPU() << endl << "\n";
    return 0;
}