//
// Created by misha on 6/14/20.
//

#include "milk_product.h"

milk_product::milk_product()
{
    isFermented = 0;
    milkType = "cow";
}

milk_product::milk_product(float price, char *name, int amount, char *type, float weight, bool isFermented,
                           char *milkType) : product(price, name, amount, type, weight), isFermented(isFermented),
                                             milkType(milkType) {}

bool milk_product::isFermented1() const {
    return isFermented;
}

void milk_product::setIsFermented(bool isFermented) {
    milk_product::isFermented = isFermented;
}

char *milk_product::getMilkType() const {
    return milkType;
}

void milk_product::setMilkType(char *milkType) {
    milk_product::milkType = milkType;
}

void milk_product::show() {
    product::show();
    if(isFermented) cout << "fermented" << endl;
    cout << "milk type: " << milkType << endl;
}

milk_product::~milk_product() {

}
