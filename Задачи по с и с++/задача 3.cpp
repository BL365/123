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
		virtual void f() { cout « "A::f()" « endl; } 
}; 

class B : public A { 
	public: 
		void f() { cout « "B::f()" « endl; } 
}; 

int main() 
{ 
	A * aPtr = new B(); 
	B * bPtr = new B(); 
	aPtr->f(); 
	bPtr->f(); 
	delete aPtr, bPtr; 
	return EXIT_SUCCESS; 
}