#include "laptop.h"
#include <string.h>
#include <iostream>
using namespace std;
void Laptop::setCPUgeneration(int t_CPUgeneration) {
    CPUgeneration = t_CPUgeneration;
}
void Laptop::setDiagonal(int t_diagonal) {
    diagonal = t_diagonal;
}
void Laptop::setModel(string t_model) {
    model = t_model;
}
void Laptop::setNameOfFirm(string t_nameOfFirm) {
    nameOfFirm = t_nameOfFirm;
}
void Laptop::setOS(string t_OS) {
    OS = t_OS;
}
void Laptop::setStorageRAM(int t_storageRAM) {
    storageRAM = t_storageRAM;
}
void Laptop::setSpeedCPU(int t_speedCPU) {
    speedCPU = t_speedCPU;
}
int Laptop::getCPUgeneration() {
    return CPUgeneration;
}
int Laptop::getSpeedCPU() {
    return speedCPU;
}
int Laptop::getDiagonal() {
    return diagonal;
}
int Laptop::getStorageRAM() {
    return storageRAM;
}
std::string Laptop::getNameOfFirm() {
    return nameOfFirm;
}
std::string Laptop::getOS() {
    return OS;
}
std::string Laptop::getModel() {
    return model;
}
Laptop::Laptop(string t_OS, int t_CPUgeneration, int t_speedCPU, int t_storageRAM, string t_nameOfFirm,
                    int t_diagonal, string t_model) {
    OS = t_OS;
    CPUgeneration = t_CPUgeneration;
    speedCPU = t_speedCPU;
    storageRAM = t_storageRAM;
    nameOfFirm = t_nameOfFirm;
    diagonal = t_diagonal;
    model = t_model;

}
Laptop::Laptop() {
    cout << "ConstrDone";
}
Laptop::~Laptop() {
    cout << "DestrDone ";
}