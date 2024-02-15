#include <iostream>

int main(){
    std::string joagdor = "cristiano ronaldo";
    std::string *ponteiro;
    ponteiro = &joagdor;
    std::cout <<  ponteiro << std::endl;
    std::cout << *ponteiro << std::endl;

    //manipulando a variavel:
    
    *ponteiro = "lionel messi";  
    std::cout <<  ponteiro << std::endl;
    std::cout << *ponteiro << std::endl;

    return 0;
}