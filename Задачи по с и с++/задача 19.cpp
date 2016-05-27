// все ли верно, что произойдет при запуске этого кода

#include <iostream>

int main() {
    const int SIZE = 5;
    int a[SIZE][SIZE];
    for (int i=0; i<SIZE; i++)
        for (int j=0; j<SIZE; j++)
            a[i][j] = i+j;
    std::cout << a[2,3] << std::endl;
}
