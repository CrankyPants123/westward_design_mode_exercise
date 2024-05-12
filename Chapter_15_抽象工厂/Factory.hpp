//
// Created by Pit Andrew on 2024/5/12.
//

#ifndef CHAPTER_15__FACTORY_HPP
#define CHAPTER_15__FACTORY_HPP
#include "implementuser.hpp"
#include "implementdepartment.hpp"

typedef class AbstractSQLFactory {
public:
    virtual IUser* createUser(){};
    virtual IDept *createDepartment(){};
}IFac;

class SqlServerFactory:public IFac{
public:
    IUser* createUser() override {
        return new SqlServerUser;
    }
    IDept* createDepartment() override {
        return new SqlServerDepartment;
    }
};

class AccessFactory:public IFac{
public:
    IUser* createUser() override {
        return new AccessUser;
    }
    IDept* createDepartment() override {
        return new AccessDepartment;
    }
};


#endif //CHAPTER_15__FACTORY_HPP
