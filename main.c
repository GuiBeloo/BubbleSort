#include <stdio.h>
#include <stdlib.h>
 
int comparacoes = 0;  // Contador global
int trocas = 0;       // Contador global
 
void bubbleSort(int v[], int n) {
    comparacoes = 0;
    trocas = 0;
    int i, j, aux, houveTrocas;
    for(i = 0; i< n-1; i++){
        houveTrocas = 0;
        for(j = 0; j < n-i-1; j++){
            comparacoes++;
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                houveTrocas = 1;
                trocas++;
            }
        }
        if(houveTrocas == 0){
            return;
        }
    }
}
 
void bubbleSortSemEarly(int v[], int n) {
    comparacoes = 0;
    trocas = 0;
    int i, j, aux;
    for(i = 0; i< n-1; i++){
        for(j = 0; j < n-i-1; j++){
            comparacoes++;
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                trocas++;
            }
        }
    }
}
 

void imprimirVetor(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
 
int main() {
    int dados[] = {64, 34, 25, 12, 22, 11, 90};
    int dados2[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    
    printf("Vetor original: ");
    imprimirVetor(dados, n);
    
    bubbleSort(dados, n);
    printf("Vetor ordenado: ");
    imprimirVetor(dados, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);
    bubbleSortSemEarly(dados2, n);
    printf("Comparações Sem Early Stop: %d | Trocas: %d\n", comparacoes, trocas);

    return 0;
}