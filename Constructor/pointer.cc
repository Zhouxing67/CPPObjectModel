#include "Object.hpp"

int main()
{
    Person *p = nullptr;
    Man Bob;
    p = &Bob;
    std::cout << p << std::endl;
    p->display();
    Bob.display();
}