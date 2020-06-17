//
// Created by misha on 6/14/20.
//

#ifndef LAB_2_MILK_PRODUCT_H
#define LAB_2_MILK_PRODUCT_H


#include "product.h"

class milk_product : public product{

private:

    bool isFermented;
    char* milkType;

public:

    milk_product();

    milk_product(float price, char *name, int amount, char *type, float weight, bool isFermented, char *milkType);

    bool isFermented1() const;

    void setIsFermented(bool isFermented);

    char *getMilkType() const;

    void setMilkType(char *milkType);

    void show();

    virtual ~milk_product();

};


#endif //LAB_2_MILK_PRODUCT_H
