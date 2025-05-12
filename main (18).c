/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int fatorial (int n){
    int i;
    int resultado = 1;
    for (i = 1; i<= n; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){
    int n;
    printf("Digite o numero para calcular o fatorial: ");
    scanf("%d", &n);
    if (n < 0){
        printf("Nao existe fatorial negativo");
    } else {
        printf("O fatorial de %d eh: %d", n, fatorial(n));
    }
    return 0;
}
