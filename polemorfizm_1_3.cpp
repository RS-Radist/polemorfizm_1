//Создать абстрактный базовый класс Employer (служащий) с чисто виртуальной функцией Print(). Создайте три производных класса: President, Manager, Worker. Переопределите функцию Print() для вывода информации, соответствующей каждому типу служащего.
#include <iostream>
using namespace std;
class Employer
{
public:
    virtual char* Print()=0;
};
class President:public Employer
{
public:
    char* Print()
    {
        return "President\n";
    }
};
class Manager:public Employer
{
public:
    char* Print()
    {
        return "Manager\n";
    }
};
class Worker:public Employer
{
public:
    char*  Print()
    {
        return "Worker\n";
    }
};


int main()
{
    President president;
    Manager manager;
    Worker worker;
    Employer* emp=&president;
    cout<<emp->Print();
    emp=&manager;
    cout<<emp->Print();
    emp=&worker;
    cout<<emp->Print();
}