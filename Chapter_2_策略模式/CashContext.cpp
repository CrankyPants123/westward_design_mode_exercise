//
// Created by Pit Andrew on 2024/3/24.
//

#include "CashContext.h"
#include "CashSuper.h"

CashContext::CashContext(const std::string& controlStr) {
    if("打8折" == controlStr){
        pCashSuper = new CashRebate(0.8);
    }else if("满300减100" == controlStr){
        pCashSuper = new CashReturn(300,100);
    }else{
        pCashSuper = new CashNormal();
    }
}

double CashContext::getResult(double money) {
    return pCashSuper->acceptCash(money);
}
