// все ли верно, что произойдет при запуске этого кода

/*
задача на понимание виртуальных функций, наследования и конструкторов */
#include <iostream>
 
class Base
{
public:
    Base() { init(); }
    ~Base() {}
 
    virtual void log() = 0;
 
private:
    void init() { log(); }    
};
 
class Derived: public Base
{
public:
    Derived() {}
    ~Derived() {}
 
    virtual void log() { std::cout << "Derived created" << std::endl; }
};
 
int main(int argc, char* argv[])
{
    Derived d;
    return 0;
}