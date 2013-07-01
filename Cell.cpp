#include "Cell.hpp"

void Cell::setCurrentTemp(int temp) {
    this->currentTemp = temp;
}

int Cell::getCurrentTemp() {
    return this->currentTemp;                                                          
}

void Cell::setMaterial(int mat) {
    this->material = mat;
}

int Cell::getMaterial() {
    return this->material;                                                          
}
