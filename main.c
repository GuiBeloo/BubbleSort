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
 
void bubbleSortDec(int v[], int n){
    comparacoes = 0;
    trocas = 0;
    int i, j, aux, houveTrocas;
    for(i = n-1; i > 0; i--){
        houveTrocas = 0;
        for(j = i; j > 0 ; j--){
            comparacoes++;
            if(v[j] > v[j-1]){
                aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
                houveTrocas = 1;
                trocas++;
            }
        }
        if(houveTrocas == 0){
            return;
        }
    }


}



void imprimirVetor(int v[], int n) {
    for(int i = 0; i < n; i++)
    printf("%d ", v[i]);
    printf("\n");
}

void escolheBubble(int v[], int n, int x){
    switch (x)
    {
    case 1:
        bubbleSort(v, n);
        break;
    case 2:
        bubbleSortDec(v,n);    
        break;
    default:
        break;
    }
}

int main() {
    int dados[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    int x;
    printf("Escolha de que forma quer ordenar:\n1-Crescente\n2-Decrescente\n");
    scanf("%d", &x);
    printf("Vetor original: ");
    imprimirVetor(dados, n);
    
    escolheBubble(dados,n,x);

    printf("Vetor ordenado: ");
    imprimirVetor(dados, n);
    printf("Comparações: %d | Trocas: %d\n", comparacoes, trocas);

    

    return 0;
}