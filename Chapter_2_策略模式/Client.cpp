//
// Created by Pit Andrew on 2024/3/24.
//

#include "Client.h"
#include "CashContext.h"
#include <iostream>

Client::Client() {
    // 当前的活动模式
    std::string currentMode = "满300减100";
    double money = 500.0;
     auto cashier = new CashContext(currentMode);
     std::cout<<"当前顾客的收费金额为："<<money<<std::endl;
     std::cout<<"最终结算金额为："<<cashier->getResult(money)<<std::endl;
}
