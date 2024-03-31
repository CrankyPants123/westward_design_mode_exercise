#include <iostream>
#include <unistd.h>
#include "AbstractImage.hpp"

int main() {
    string file = "test_10m.img";

    auto *pImage = new ProxyImage(file);
    sleep(3);
    pImage->display();

    return 0;
}
