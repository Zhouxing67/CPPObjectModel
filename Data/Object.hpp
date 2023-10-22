#ifndef OBJECT
#define OBJECT
struct Person
{
    int age;
    char *name;
    static int nation;
};
int Person::nation = 1;
struct Point3d
{
    float x;
    float y;
    float z;
};

#endif