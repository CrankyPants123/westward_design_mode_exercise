//
// Created by Pit Andrew on 2024/3/24.
//

#ifndef CHAPTER_1__CREATEOPERATE_H
#define CHAPTER_1__CREATEOPERATE_H
#include "Operation.h"

class CreateOperate {
public:
    static Operation *create(char operation){
        Operation *ret = nullptr;
        switch (operation) {
            case '+':
                ret = new OperationAdd();
                break;
            case '-':
                ret = new OperationSub();
                break;
            case '*':
                ret = new OperationMul();
                break;
            case '/':
                ret = new OperationDiv();
                break;
        }
        return ret;
    }
};


#endif //CHAPTER_1__CREATEOPERATE_H
