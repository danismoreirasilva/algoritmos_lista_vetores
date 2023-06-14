#include <iostream>

using namespace std;

#define tamMax 10

int main()
{
    setlocale(LC_ALL, "portuguese");

    int vetX[tamMax],n, valorAux;

    do{
       cout << "Digite a quantidade e n(entre 1 e 10): ";
       cin >> n;
    }while(n<1||n>tamMax);

    //leitura de Dados
    for(int i=0; i<n ;i++){
       cout << i+1<<"º valor: ";
       cin >>vetX[i];
    }


    //Calculos solicitados
    for(int i=0; i<n/2 ;i++){
       valorAux = vetX[i];
       vetX[i] = vetX[n-1-i];
       vetX[n-1-i] = valorAux;
    }

    cout<<endl;
    //Apresentando o resultado dos dados
    for(int i=0; i<n ;i++){
       cout << "["<<vetX[i]<<"] ";
    }

    return 0;
}



/*
Desenvolva um algoritmo que leia n (1 < n < 10) números inteiros e armazene-os no vetor X. Realize
um processo que troque a disposição dos elementos do vetor X de forma que o primeiro elemento seja
trocado com o último, o segundo seja trocado com o penúltimo e assim sucessivamente. Mostre os
elementos do vetor X após este processo. Não utilizar vetor auxiliar.*/
