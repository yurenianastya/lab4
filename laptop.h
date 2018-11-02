#ifndef CLASSES_LAPTOP_H
#define CLASSES_LAPTOP_H
#include <string.h>
#include <iostream>
using namespace std;
class Laptop {
public:
    Laptop();
    Laptop(string t_OS,int t_CPUgeneration,int t_speedCPU,int t_storageRAM,
           string t_nameOfFirm,int t_diagonal,string t_model);
    ~Laptop();
    string OS;
    int CPUgeneration;
    void setOS(string t_OS);
    void setCPUgeneration(int t_CPUgeneration);
    void setSpeedCPU(int t_speedCPU);
    void setStorageRAM(int t_storageRAM);
    void setNameOfFirm(string t_nameOfFirm);
    void setDiagonal(int t_diagonal);
    void setModel(string t_model);
    int getSpeedCPU();
    std::string getOS();
    int getCPUgeneration();
    int getStorageRAM ();
    std::string getNameOfFirm ();
    int getDiagonal();
    std::string getModel ();
private:
    int speedCPU;
    int storageRAM;
    std::string nameOfFirm;
protected:
    int diagonal;
    std::string model;
};


#endif //CLASSES_LAPTOP_H
