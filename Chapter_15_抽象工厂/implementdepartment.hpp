//
// Created by Pit Andrew on 2024/5/12.
//

#ifndef CHAPTER_15__IMPLEMENTDEPARTMENT_HPP
#define CHAPTER_15__IMPLEMENTDEPARTMENT_HPP

#include<iostream>

typedef class Department {
public:
    std::string departmentName;
    int id;
}Dept;

typedef class AbstractedDepartment {
public:
    virtual void setDepartment(const Department&) = 0;
    virtual Department* getDepartment(const int id) = 0;
}IDept;

class SqlServerDepartment :public IDept {
public:
    void setDepartment(const Department& dept) override {
        std::cout<<"SqlServer set a department: "<<dept.departmentName<<std::endl;
    }
    Department* getDepartment(const int id) override{
        std::cout<<"SqlServer get a department. Department id is:"<<id<<std::endl;
    }
};
class AccessDepartment: public IDept {
public:
    void setDepartment(const Department& dept) override {
        std::cout<<"Access set a department: "<<dept.departmentName<<std::endl;
    }
    Department* getDepartment(const int id) override {
        std::cout<<"Access get a department. Department id is:"<<id<<std::endl;
    }
};
#endif //CHAPTER_15__IMPLEMENTDEPARTMENT_HPP
