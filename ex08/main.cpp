#include <iostream>

using namespace std;

#define tamMax 15

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, vetV[tamMax], aux;

    do{
        cout << "Digite um valor: ";
        cin >> n;
    }while(n<1 || n>tamMax);

    //leitura de Dados;
    for (int i=0; i< n; i++){
        cout << "Digite o " << i+1 <<"� valor: ";
        cin >> vetV[i];
    }

    //ordenandoVetor crescente (para decrescente o if � se o valor for menor que o pr�ximo ele troca;
    for (int i=0; i< n-1; i++){
        for (int j=i+1; j<n; j++){
            if(vetV[i] > vetV[j]){
                aux = vetV[i];
                vetV[i] = vetV[j];
                vetV[j] = aux;
            }
        }
    }


    //Apresentando o vetor ordenado
    cout << "Vetor Ordenado" <<endl;
    for (int i=0; i< n; i++){
        cout << "[" << vetV[i] <<"] ";
    }

    return 0;
}

/*
Fa�a um algoritmo que leia n (n <= 15) n�meros inteiros e armazene-os em um vetor. Coloque-o em
ordem crescente. Mostre o vetor ap�s a ordena��o.*/
