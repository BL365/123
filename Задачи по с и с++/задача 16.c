/* написать программу, которая печатает в консоли фразу "Hello world". И всё бы ничего, если бы после этого стояла точка. Но фраза продолжается: при условии, что функция main() данной программы выглядит следующим образом:*/

int main(void) 
{
    return 0;
}

/*
#include <stdio.h>
int printHelloWorld() { printf("Hello World"); return 0; }
static int testVar = printHelloWorld();
int main ()
{
    return 0;
}
*/

/*
#define return puts("Hello World"); return

int main ()
{
  return 0;
}
*/

/*
#include <stdio.h>
int s = printf("Hello world");

int main(int argc, char *argv[])
{
    return 0;
}
*/