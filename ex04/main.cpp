#include <iostream>

using namespace std;

#define tamMax 15

int main()
{
    setlocale(LC_ALL, "portuguese");

    int vetV[tamMax], maior, menor, n;

    do{
        cout <<"Digite um valor (entre 1 e 15) ";
        cin >> n;

    }while(n<1 || n>tamMax);


   //leitura de dados
    for (int i=0; i<n; i++){
       cout << "Digite o "<<i+1<<"º valor: ";
       cin >>vetV[i];
    }

    maior = vetV[0];
    menor = vetV[0];

    //Cálculos solicitados
    for (int i=1; i<n; i++){
       if (vetV[i] > maior)
            maior = vetV[i];
       if (vetV[i] < menor)
           menor = vetV[i];

    }
    cout << "O menor valor é: " << menor << endl;
    cout << "O maior valor é: " << maior << endl;
    return 0;
}

/*
Faça um algoritmo que leia um vetor V com n (n <= 15) número inteiros. Determine o menor e o maior
elemento do vetor*/
