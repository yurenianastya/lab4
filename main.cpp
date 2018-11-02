#include "laptop.h"
#include <string.h>
#include <iostream>
using namespace std;
int main(){
    Laptop number_1(" Windows ",8,345,3256," Lenovo ",34," N7365er ");
    Laptop number_2(" IoT ",4,3245,553256," HP ",64," T4365er ");
    Laptop number_3(" Linux ",28,44575,243256," Meizu ",54," UIe65er ");
    cout <<"Model:" << number_2.getModel() << " OS:" << number_2.getOS() << " Firm:" << number_2.getNameOfFirm() << " RAM:" <<
    number_2.getStorageRAM() << " Diagonal:" << number_2.getDiagonal() << " CPU Gen:" << number_2.getCPUgeneration() << " CPU speed:" << number_2.getSpeedCPU() << "\n";
    cout <<"Model:" << number_1.getModel() << " OS:" << number_1.getOS() << " Firm:" << number_1.getNameOfFirm() << " RAM:" <<
         number_1.getStorageRAM() << " Diagonal:" << number_1.getDiagonal() << " CPU Gen" << number_1.getCPUgeneration() << " CPU speed:" <<
         number_1.getCPUgeneration() << " CPU speed:" << number_1.getSpeedCPU() << "\n";
    cout << "Model:" << number_3.getModel() << " OS:" << number_3.getOS() << " Firm:" << number_3.getNameOfFirm() << " RAM:" <<
         number_3.getStorageRAM() << " Diagonal:" << number_3.getDiagonal() << " CPU Gen:" << number_3.getCPUgeneration() << " Cpu Speed:" <<
         number_3.getCPUgeneration() << " Cpu speed:" << number_3.getSpeedCPU() << "\n";
    return 0;

}