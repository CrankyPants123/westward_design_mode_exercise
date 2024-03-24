#include <iostream>
#include "CreateOperate.h"
using namespace std;

int main() {
    auto operation = CreateOperate::create('-');
    operation->NumberA = 100;
    operation->NumberB = 2;
    cout<<operation->getResult()<<endl;
    // other operations below here
    // ...
    return 0;
}
