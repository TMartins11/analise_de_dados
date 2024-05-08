/*
 * Atividade: Análise de Dados, Estimativa de localização e dispersão.
 * 
 * Prof. Luiz Eduardo da Silva
 * 
 * Aluno: Thiago Martins
 */

#include <stdio.h>
#include <math.h>

int main()
{
    //Vetor com até 100 valores
    float x[100];
    // Variáveis que iremos precisar para realizar as operações desejadas
    int n, p, i, qtdtermos = 0;
    float soma = 0,media = 0, medapara = 0,desvio = 0;
    printf("Análise de Dados, Estimativa de localização e dispersão\n");
    printf("\nInsira a quantidade de valores que serão usados no vetor: ");
    scanf("%d", &n);
    printf("\nInsira a quantidade de valores que serão desprezados em cada extremo para o cálculo da média aparada: ");
    scanf("%d", &p);
    printf("\nInsira os valores do vetor(em ordem crescente):\n");
    // Repetição para ler todos os valores do vetor
    for(i = 0; i < n; i++){
        scanf("%f", &x[i]);
        soma+= x[i];
    }
    media = soma / n;

    // Repetição para selecionar os valores que serão usados para o cálculo da média aparada
    printf("\nEsses serão os valores utilizados no cálculo da média aparada:");
    for(i = p; i < n - p; i++){
        printf("x[%d] = %.2f ", i, x[i]);
        medapara += x[i];
        qtdtermos++;
    }
    medapara = medapara / qtdtermos;
   
    // Repetição para calcular o desvio padrão
    for(i = 0; i < n; i++){
        desvio += pow((x[i] - media), 2);
    }
    desvio =  desvio / n;
    desvio = sqrt(desvio);
    
    printf("\n\nA média entre os valores do vetor é: %.2f\n", media);
    printf("\nA média aparada entre os valores do vetor é: %.2f\n", medapara);
    printf("\nO desvio padrão entre os valores do vetor é: %.2f", desvio);

    return 0;
}
