//
// Created by misha on 6/14/20.
//

#ifndef LAB_2_PRODUCT_H
#define LAB_2_PRODUCT_H


#include "goods.h"

class product : public goods{

protected:

    char* type;
    float weight;

public:

    product();

    product(float price, char *name, int amount, char *type, float weight);

    char *getType() const;

    void setType(char *type);

    float getWeight() const;

    void setWeight(float weight);

    virtual void show();

    virtual ~product();

};


#endif //LAB_2_PRODUCT_H
