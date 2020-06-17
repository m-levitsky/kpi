//
// Created by misha on 6/14/20.
//

#include "toy.h"

toy::toy()
{
    srand(time(0));

    material = "plastic";
    ageLimit = rand() % 16;
    type = "toy";
}

toy::toy(float price, char *name, int amount, int ageLimit, char *material) : goods(price, name, amount),
                                                                              ageLimit(ageLimit), material(material) {
    type = "toy";
}

int toy::getAgeLimit() const {
    return ageLimit;
}

void toy::setAgeLimit(int ageLimit) {
    toy::ageLimit = ageLimit;
}

char *toy::getMaterial() const {
    return material;
}

void toy::setMaterial(char *material) {
    toy::material = material;
}

toy::~toy() {

}

void toy::show() {
    goods::show();

    cout << "material: " << material << endl;
    cout << "age limit: " << ageLimit << endl;
}
