#include <iostream>
#include <list>

int main(){
    std::list<int> valores;
    std::list<int>::iterator iterator;

    //iterator = valores.begin();
    //std::advance(iterator,2);
    //valores.insert(iterator,69);

    for(int i = 1; i<11; i++){
        valores.push_back(i);
    }
    for(int elementos : valores){
        std::cout << elementos << std::endl;
    }
    std::cout << "tamanho da lista " << valores.size() << std::endl;
    return 0;
} 