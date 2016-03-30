//что выведется на экран(решать без запуска), почему.

/*
задача ни понимание работы с указателями
*/
#include <cstdlib>  
#include <stdio.h> 

int main() 
{ 
	int *ptr1, *ptr2, a[10];
    int i;
    ptr1=a+4;
	ptr2=a+9;
	r=ptr1-ptr2; 
	printf("%d\n", r); 	
	r=ptr2-ptr1; 
	printf("%d\n", r); 
	return EXIT_SUCCESS; 
}
