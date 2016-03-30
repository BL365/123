// все ли в этой задаче хорошо? (скомпилируется? выполнится без ошибок?) 
// если нет, то что не так и почему?  и как это исправить?

/* 
Проверка на знание порядка вызова конструкторов и десрукторов при наследовании.
фиртуальный деструктор, и принимание работы с указателями*/

#include <cstdlib> 
#include <iostream> 

using std::cout; 
using std::endl; 

class A { 
	public: 
		A() { cout « "A()" « endl; } 

		~A() { cout « "~A()" « endl; } 
}; 

class B : public A { 
		int * b_int; 
	public: 
		B() { 
			cout « "B()" « endl; 
			b_int = new int; 
		} 
		~B() { 
			cout « "~B()" « endl; 
			delete b_int; 
		} 
}; 

int main() 
{ 
	A * aPtr = new B(); 
	delete aPtr; 
	return EXIT_SUCCESS; 
}
