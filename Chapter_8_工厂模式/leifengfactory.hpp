//
// Created by Pit Andrew on 2024/4/7.
//

#include <iostream>
#include "Leifeng.h"

using namespace std;

class LeifengFactory {
public:
    static Leifeng *CreateLeifeng() {
        return new Leifeng;
    }
};

class UndergraduateFactory : public LeifengFactory {
public:
    static Leifeng *CreateLeifeng() {
        return new Undergraduate;
    }
};

class VolunteerFactory : public LeifengFactory {
public:
    static Leifeng *CreateLeifeng() {
        return new Volunteer;
    }
};

#ifndef CHAPTER_8__LEIFENG_HPP
#define CHAPTER_8__LEIFENG_HPP

#endif //CHAPTER_8__LEIFENG_HPP
