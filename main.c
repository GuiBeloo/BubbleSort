#include <stdio.h>
#include <stdlib.h>
 
int comparacoes = 0;  // Contador global
int trocas = 0;       // Contador global
 
void bubbleSort(int v[], int n) {
    // TODO: Implementar aqui
    // Incrementar comparacoes++ a cada comparação
    // Incrementar trocas++ a cada troca
}
 
void imprimirVetor(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
 
int main() {
    int dados[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    
    printf("Vetor original: ");
    imprimirVetor(dados, n);
    
    bubbleSort(dados, n);
    
    printf("Vetor ordenado: ");
    imprimirVetor(dados, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);
    
    return 0;
}