#include <stdio.h>
#include <stdlib.h>
#define MG 1.07
#define SP 1.12
#define RJ 1.15
#define MS 1.08

int main(){
    float preco, preco_final;
    char c1, c2;
    scanf("%f %c%c", &preco, &c1, &c2);
    //printf("%c%c", c1,c2);
    if((c1 == 'm' || c1 == 'M') && (c2 == 'g' || c2 == 'G')){
        preco_final = preco * MG;
    }else{
        if((c1 == 's' || c1 == 'S') && (c2 == 'p' || c2 == 'P')){
            preco_final = preco * SP;
        }else{
            if((c1 == 'r' || c1 == 'R') && (c2 == 'j' || c2 == 'J')){
                preco_final = preco * RJ;
            }else{
                if((c1 == 'm' || c1 == 'M') && (c2 == 's' || c2 == 'S')){
                    preco_final = preco * MS;
                }else{
                    printf("entrada incorreta\n");
                    return 0;
                }
            }
        }
    }
    printf("%f\n", preco_final);
    return 0;
}