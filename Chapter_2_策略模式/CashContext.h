//
// Created by Pit Andrew on 2024/3/24.
//

#ifndef CHAPTER_2__CASHCONTEXT_H
#define CHAPTER_2__CASHCONTEXT_H
#include <string>

class CashSuper;
class CashContext {
public:
    explicit CashContext(const std::string& controlStr);
    double getResult(double money);
private:
    CashSuper *pCashSuper = nullptr;
};


#endif //CHAPTER_2__CASHCONTEXT_H
