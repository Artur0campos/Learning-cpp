#include <iostream>


void somar(int *var , int valor);
//um ponteiro recebe um endereço

int main(){
    int num = 0;

    somar(&num,10);//&num entrega o endereço de num
    std::cout << num;

    return 0;
}

void somar(int *var , int valor){
    *var+= valor;
}