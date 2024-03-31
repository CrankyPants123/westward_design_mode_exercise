//
// Created by Pit Andrew on 2024/3/31.
//

#ifndef CHAPTER_6__SHAPEDECORATOR_HPP
#define CHAPTER_6__SHAPEDECORATOR_HPP

#include "Shape.hpp"

class ShapeDecorator : public Shape {
public:
    explicit ShapeDecorator(Shape *decoratedShape) : _decoratedShape(decoratedShape) {}

    void draw() override {
        _decoratedShape->draw();
    }

protected:
    Shape *_decoratedShape = nullptr;

};

class RedShapeDecorator : public ShapeDecorator {
public:
    explicit RedShapeDecorator(Shape *decoratedShape) : ShapeDecorator(decoratedShape) {}

    void draw() override {
        ShapeDecorator::draw();
        cout << "Color: Red." << endl << endl;
    }
};


#endif //CHAPTER_6__SHAPEDECORATOR_HPP
