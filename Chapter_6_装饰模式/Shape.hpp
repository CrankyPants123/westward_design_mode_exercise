//
// Created by Pit Andrew on 2024/3/31.
//

#ifndef CHAPTER_6__SHAPE_HPP
#define CHAPTER_6__SHAPE_HPP

#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Shape: Circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Shape: Rectangle." << endl;
    }
};

#endif //CHAPTER_6__SHAPE_HPP
