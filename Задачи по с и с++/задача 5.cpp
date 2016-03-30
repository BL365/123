//что выведется на экран(решать без запуска), почему.

/*
задача ни понимание переопределения функций, фиртуальные функции, позднее и раннее связывание
*/
#include <cstdlib> 
#include <iostream> 

using std::cout; 
using std::endl; 

class A { 
	public: 
		virtual void f(int a) { cout « "A::f()" « endl; } 
}; 

class B : public A { 
	public: 
		void f(double a) { cout « "B::f()" « endl;} 
}; 

int main() 
{ 
	A * aPtr = new B(); 
	aPtr->f(1); 
	aPtr->f(1.2); 
	delete aPtr; 
	return EXIT_SUCCESS; 
}
