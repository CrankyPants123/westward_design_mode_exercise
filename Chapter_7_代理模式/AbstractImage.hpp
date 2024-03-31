//
// Created by Pit Andrew on 2024/3/31.
//
#include <string>
#include <iostream>

using namespace std;

class AbstractImage {
public:
    virtual void display() = 0;
};

class Image : public AbstractImage {
public:
    explicit Image(const string fileName) : _fileName(fileName) {
        loadImage();
    }

    void loadImage() {
        cout << "Load image " << _fileName << endl;
    }

    void display() override {
        cout << "Display image " << _fileName << endl;
    }

private:
    string _fileName;
};

class ProxyImage : public AbstractImage {
public:
    ProxyImage(const string filename) : _fileName(filename) {}

    void display() override {
        auto impl = new Image(_fileName);
        impl->display();
    }

private:
    string _fileName;
};


#ifndef CHAPTER_7__ABSTRACTIMAGE_HPP
#define CHAPTER_7__ABSTRACTIMAGE_HPP

#endif //CHAPTER_7__ABSTRACTIMAGE_HPP
