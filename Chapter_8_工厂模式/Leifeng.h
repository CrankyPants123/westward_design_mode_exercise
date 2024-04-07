//
// Created by Pit Andrew on 2024/4/7.
//

#ifndef CHAPTER_8__LEIFENG_H
#define CHAPTER_8__LEIFENG_H

#include <iostream>

using namespace std;

class Leifeng {
public:
    virtual void Wash() {
        cout << "Leifeng wash" << endl;
    }

    virtual void Sweep() {
        cout << "Leifeng sweep" << endl;
    }

    virtual void Buyrice() {
        cout << "Leifeng buy rice" << endl;
    };
};

class Volunteer : public Leifeng {
public:
    void Wash() override {
        cout << "Volunteer wash." << endl;
    }

    void Sweep() override {
        cout << "Volunteer sweep." << endl;
    }

    void Buyrice() override {
        cout << "Volunteer buy rice." << endl;
    }
};

class Undergraduate : public Leifeng {
public:
    void Wash() override {
        cout << "Undergraduate wash." << endl;
    }

    void Sweep() override {
        cout << "Undergraduate sweep." << endl;
    }

    void Buyrice() override {
        cout << "Undergraduate buy rice." << endl;
    }
};

#endif //CHAPTER_8__LEIFENG_H
