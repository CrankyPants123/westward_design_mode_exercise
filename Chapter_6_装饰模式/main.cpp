#include <iostream>
#include "ShapeDecorator.hpp"

int main() {
    auto pCircle = new Circle;
    auto pRectangle = new Rectangle;

    auto pRedCircle = new RedShapeDecorator(pCircle);
    auto pRedRectangle = new RedShapeDecorator(pRectangle);

    pRedCircle->draw();
    pRedRectangle->draw();

    return 0;
}
