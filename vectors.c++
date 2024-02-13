#include <iostream>

int main(){
    int  const tamanho = 2;
    int array[tamanho];
    array[0] = 10;
    array[1] = 20;

    for(int i=0; i < tamanho; i++){
        std::cout << array[i] << std::endl;
    }

    return 0;
}