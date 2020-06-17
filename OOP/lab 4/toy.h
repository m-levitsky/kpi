//
// Created by misha on 6/14/20.
//

#ifndef LAB_2_TOY_H
#define LAB_2_TOY_H



#include "goods.h"

class toy : public goods{

private:

    int ageLimit;
    char* material;

public:

    toy();

    toy(float price, char *name, int amount, int ageLimit, char *material);

    int getAgeLimit() const;

    void setAgeLimit(int ageLimit);

    char *getMaterial() const;

    void setMaterial(char *material);

    void show();

    virtual ~toy();

};


#endif //LAB_2_TOY_H
