#include <iostream>
#include <string>

struct Aluno{
    std::string nome;
    int idade;
    float nota;

    void insere(std::string struct_nome, int struct_idade, float struct_nota){
        nome = struct_nome;
        idade = struct_idade;
        nota = struct_nota;
    }

    void print(){
         std::cout << nome << " tem " << idade << " anos e tirou " << nota << " em matematica";
    }
};

int main(){
    Aluno aluno_1;
    aluno_1.insere("artur", 17, 10);
    aluno_1.print();
    return 0;
}