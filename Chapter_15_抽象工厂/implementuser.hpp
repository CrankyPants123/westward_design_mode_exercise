//
// Created by Pit Andrew on 2024/5/12.
//

#ifndef CHAPTER_15__IMPLEMENTUSER_HPP
#define CHAPTER_15__IMPLEMENTUSER_HPP

#include <string>
#include <iostream>

class User {
public:
    std::string name;
    int id;
};

typedef class AbstractUser {
public:
    virtual void setUser(const User &) = 0;

    virtual User *getUser(const int id) = 0;
}IUser;

class SqlServerUser : public IUser {
public:
    void setUser(const User &user) override {
        std::cout << "SqlServer set a user :" << user.name << std::endl;
    }

    User *getUser(const int id) override {
        std::cout << "SqlServer get a user. User id is" << id << std::endl;
    }
};

class AccessUser : public IUser {
public:
    void setUser(const User &user) override {
        std::cout << "Access set a user :" << user.name << std::endl;
    }

    User *getUser(const int id) override {
        std::cout << "Access get a user. User id is" << id << std::endl;
    }
};


#endif //CHAPTER_15__IMPLEMENTUSER_HPP
