#include <iostream>

int main(){
    int *ponteiro;
    int array[10];

    ponteiro = array;// está sendo setado o o valor do primeiro(0) indice do array
    *ponteiro = 10;
    std::cout << *ponteiro << std::endl;

    //o endereço da proxima variavel em seguida deve retornar o valor seguinte na memoria
    //lembrando que um "int" tem 4 byts
    *(ponteiro += 1);
    *ponteiro = 20;
    std::cout << *ponteiro << std::endl;

    //e assim por diante, lembrando que está em hexadecimal
    *(ponteiro += 1);
    *ponteiro = 30;
    std::cout << *ponteiro << std::endl;
    return 0;


}