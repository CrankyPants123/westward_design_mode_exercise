#include <iostream>
#include "Factory.hpp"
#include "implementdepartment.hpp"
#include "implementuser.hpp"

int main() {
    User userXM;
    userXM.name = "xiaoming";
    userXM.id = 101;

    Dept deptXM;
    deptXM.departmentName = "Quality Assurance";
    deptXM.id = 101;

    // 在这里，更换ConcreteFactory就可以很方便的更换整个产品系列
    // 这里也可以使用依赖注入的思想，比如使用反射，将实例工厂的实例化通过外部配置文件来配置。避免代码中因为分支判断而引入耦合
//    IFac* impl = new AccessFactory;
    IFac* impl = new SqlServerFactory;

    IUser* userOperation = impl->createUser();
    userOperation->setUser(userXM);
    userOperation->getUser(101);
    IDept* deptOperation = impl->createDepartment();
    deptOperation->setDepartment(deptXM);
    deptOperation->getDepartment(101);





    return 0;
}
