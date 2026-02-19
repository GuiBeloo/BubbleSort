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
            break;
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
    int n = 7;
    
    printf("Vetor original: ");
    imprimirVetor(dados, n);
    
    bubbleSort(dados, n);
    
    printf("Vetor ordenado: ");
    imprimirVetor(dados, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);
    
    
    //TESTES
    printf("\nTESTES:\n\n");

    printf("\nVETOR VAZIO:\n");
    n = 0;
    int vazio[] = {};
    bubbleSort(vazio, n);
    printf("Vetor ordenado: ");
    imprimirVetor(vazio, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    printf("\n1 ELEMENTO:\n");
    n = 1;
    int unico[] = {1};
    bubbleSort(unico, n);
    printf("Vetor ordenado: ");
    imprimirVetor(unico, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    printf("\nJÁ ORDENADO[1,2,3,4,5]:\n");
    n = 5;
    int ordenado[] = {1,2,3,4,5};
    bubbleSort(ordenado, n);
    printf("Vetor ordenado: ");
    imprimirVetor(ordenado, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    printf("\nINVERSO[5,4,3,2,1]:\n");
    n = 5;
    int inverso[] = {5,4,3,2,1};
    bubbleSort(inverso, n);
    printf("Vetor ordenado: ");
    imprimirVetor(inverso, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    printf("\nREPETIDOS[3,1,3,2,3]:\n");
    n = 5;
    int repetidos[] = {3,1,3,2,3};
    bubbleSort(repetidos, n);
    printf("Vetor ordenado: ");
    imprimirVetor(repetidos, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);


    return 0;
}