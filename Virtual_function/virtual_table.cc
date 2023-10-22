#include "Object.hpp"

#include <vector>
int main()
{
    Person *p = new Person(18, "zhouX");
    Student *s = new Student(10, "zhouX", "nullptr", "nullptr");

    p->display();
    printf("\n");
    s->display();
    printf("\n");
    delete p;
    printf("\n");
    p = s;
    p->display();
    printf("\n");
    delete s;

    std::vector<int> vet({1, 2, 3, 4, 5, 6});
}