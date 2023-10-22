#include<iostream>
#include<cstdio>
#include "Object.hpp"
using namespace std;

int main()
{
    Person Joe;


    printf("%d\n", &Person::age);

    int *ptr = &Joe.age;
    printf("%p\n", ptr);
}
