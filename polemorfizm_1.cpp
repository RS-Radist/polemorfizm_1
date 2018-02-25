//Создать абстрактный базовый класс Employer (служащий) с чисто виртуальной функцией Print(). Создайте три производных класса: President, Manager, Worker. Переопределите функцию Print() для вывода информации, соответствующей каждому типу служащего.
#include <iostream>

class Employer
{
public:
    virtual void Print(void)
    {}
};
class President:public Employer
{
public:
    void Print()
    {
        std::cout<<"President\n";
    }
};
class Manager:public Employer
{
public:
    void Print()
    {
        std::cout<<"Manager\n";
    }
};
class Worker:public Employer
{
public:
    void Print()
    {
        std::cout<<"Worker\n";
    }
};
int main()
{
    President president;
    Manager manager;
    Worker worker;
    
    Employer* emp=&president;
    emp->Print();
    emp=&manager;
    emp->Print();
    emp=&worker;
    emp->Print();
}
