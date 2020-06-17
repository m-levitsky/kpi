//
// Created by misha on 6/14/20.
//

#include "product.h"

product::product()
{
    type = "";
    weight = rand() % 15;
}

product::product(float price, char *name, int amount, char *type, float weight) : goods(price, name, amount),
                                                                                  type(type), weight(weight) {}

char *product::getType() const {
    return type;
}

void product::setType(char *type) {
    product::type = type;
}

float product::getWeight() const {
    return weight;
}

void product::setWeight(float weight) {
    product::weight = weight;
}

product::~product() {

}

void product::show() {
    goods::show();
    cout << "type: " << type << endl;
    cout << "weight: " << weight << endl;
}
