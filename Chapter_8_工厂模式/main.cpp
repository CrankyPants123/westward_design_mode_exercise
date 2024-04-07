#include <iostream>
#include "leifengfactory.hpp"


int main() {
    Leifeng *leifeng = LeifengFactory::CreateLeifeng();
    leifeng->Wash();

    leifeng = UndergraduateFactory::CreateLeifeng();
    leifeng->Buyrice();

    leifeng = VolunteerFactory::CreateLeifeng();
    leifeng->Sweep();

    return 0;
}
