//
// Created by Pit Andrew on 2024/3/24.
//

#ifndef CHAPTER_1__OPERATION_H
#define CHAPTER_1__OPERATION_H

#include <cassert>

class Operation {
public:
    int NumberA = 0;
    int NumberB = 0;
    virtual double getResult() = 0;
};
class OperationAdd:public Operation{
    double getResult() override {
        return NumberA+NumberB;
    }
};

class OperationMul:public Operation{
    double getResult() override{
        return NumberA * NumberB;
    }
};

class OperationSub:public Operation{
    double getResult() override{
        return NumberA - NumberB;
    }
};
class OperationDiv:public Operation{
    double getResult() override{
        assert(NumberB);
        return NumberA / NumberB;
    }
};
#endif //CHAPTER_1__OPERATION_H
