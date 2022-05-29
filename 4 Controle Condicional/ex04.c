#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, emprestimo;
    scanf("%f %f", &salario, &emprestimo);
    if(emprestimo > salario * 0.2){
        printf("Emprestimo nao concedido\n");
    }else{
        printf("Emprestimo concedido\n");
    }
    return 0;
}