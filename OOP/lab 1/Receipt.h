//
// Created by misha on 6/14/20.
//

#ifndef LAB_1_RECEIPT_H
#define LAB_1_RECEIPT_H


class Receipt {
private:

    int number;
    int date;
    float sum;

public:
    Receipt();

    Receipt(int number, int date, float sum);

    Receipt(const Receipt& obj);

    int getNumber() const;

    void setNumber(int number);

    int getDate() const;

    void setDate(int date);

    float getSum() const;

    void setSum(float sum);

    void Show();

    virtual ~Receipt();
};


#endif //LAB_1_RECEIPT_H
