#ifndef OBJECT_
#define OBJECT_
#include <cstring>
#include <cstdio>

class Person
{
private:
    Person *parent;
    int age;
    char *name;
    void clear()
    {
        printf("Clear Person data\n");
        delete parent;
        delete name;
    }

public:
    Person()
        : parent(nullptr), age(0), name(nullptr)
    {
    }

    Person(int _age, char *_name)
        : parent(nullptr), age(_age), name(new char[strlen(_name)])
    {
        strcpy(name, _name);
    }

    virtual ~Person()
    {
        clear();
    }
    Person(const Person &other) = delete;
    Person &operator=(const Person &other) = delete;

public:
    virtual void display()
    {
        printf("My name is %s\n", name);
        printf("this year my age is %d\n", age);
    }
};

class Student final : public Person
{
private:
    char *school;
    char *sex;
    void free()
    {
        printf("Clear Student data\n");
        delete school;
        delete sex;
    }

public:
    Student() : Person(), school(nullptr), sex(nullptr)
    {
    }

    Student(int _age, char *_name, char *_school, char *_sex)
        : Person(_age, _name), school(new char[strlen(_school)]), sex(new char[strlen(_sex)])
    {
        strcpy(school, _school);
        strcpy(sex, _sex);
    }

    ~Student()
    {
        free();
    }

    Student(const Student &other) = delete;
    Student &operator=(const Student &other) = delete;

public:
    void display() override
    {
        Person::display();
        printf("My sex is %s\n", sex);
        printf("My school is %s\n", school);
    }
};

#endif