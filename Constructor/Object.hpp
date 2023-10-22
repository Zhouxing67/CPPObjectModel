#include <iostream>
#include <string>
#ifndef OBJECT
#define OBJECT
class Car
{
private:
    std::string name;
    int number;

public:
    Car() : name("Jeep"), number(1)
    {
    }
    void display_information()
    {
        std::cout << "name : " << name << std::endl;
        std::cout << "num : " << number << std::endl;
    }
};

class Company
{
private:
    int id;
    Car car;

public:
    Company() : id(1)
    {
    }
    void display_information()
    {
        std ::cout << "id : " << id << std::endl;
        car.display_information();
    }
};

class Driver
{
private:
    int id;
    int salary;

public:
    void dispaly_informaton()
    {
        std::cout << "driver id : " << id << std::endl;
        std::cout << " driver salary : " << salary << std::endl;
    }
};

class Person{
private:
    char *name = "Bob";
    int age = 10;
public:
    virtual void display()
    {
        std::cout << "This is Base Class" << std::endl;
    }
};

class Man : public Person
{
private:
    char *sex = "man";
public :
    void display() override
    {
        std::cout << "This ia Deliver Class" << std::endl;
        std::cout << "The sex is" << sex << std::endl;
    }
};

#endif