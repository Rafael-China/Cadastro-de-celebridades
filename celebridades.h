#ifndef CELEBRIDADES_H_
#define CELEBRIDADES_H_

// TODO: Declare aqui seu tipo de dados celebridade
typedef struct celebridade {
    // ...
    char nome[100];
    int dia_nascimento;
    int mes_nascimento;
    int ano_nascimento;
} celebridade;

celebridade le_celebridade();

void exibe_celebridade(celebridade c);

void adiciona_celebridades(celebridade *cs, int n);

void exibe_celebridades(celebridade *cs, int n);

#endif
