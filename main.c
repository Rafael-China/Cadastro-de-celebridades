#include <stdio.h>

#include "celebridades.h"

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    char teste[10];
    fgets(teste, 10, stdin);
    celebridade vetor[n];
    adiciona_celebridades(&vetor[0], n);
    exibe_celebridades(&vetor[0], n);
    return 0;
}
