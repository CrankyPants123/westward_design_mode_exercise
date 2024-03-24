//
// Created by Pit Andrew on 2024/3/24.
//

#ifndef CHAPTER_2__CASHSUPER_H
#define CHAPTER_2__CASHSUPER_H

#include <cmath>

class CashSuper {
public:
    virtual double acceptCash(double money) = 0;
};
//普通收费子类
class CashNormal:public CashSuper {
    double acceptCash(double money) override{
        return money;
    }
public:
};
//打折收费子类
class CashRebate:public CashSuper{
public:
    explicit CashRebate(double discount):_discount(discount){}
    double acceptCash(double money) override{
        return money * _discount;
    }
private:
    double _discount = 0;
};
// 返利收费子类（eg:满300减100）
class CashReturn:public CashSuper {
public:
    CashReturn(double moneyCondition,double moneyReturn):_moneyCondition(moneyCondition),_moneyReturn(moneyReturn){}
    double acceptCash(double money) override{
        return money - std::floor(money/_moneyCondition)*_moneyReturn;
    }
private:
    double _moneyCondition = 0.0;
    double _moneyReturn = 0.0;
};


#endif //CHAPTER_2__CASHSUPER_H
