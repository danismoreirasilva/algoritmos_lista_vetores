#include <iostream>

using namespace std;

#define tamMax 100

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, vetX[tamMax], vetY[tamMax], contDiv = 0, contPrimo = 0;

    do{
       cout <<"Digite a quantidade de elementos: ";
       cin >> n;
    }while(n<1 || n>tamMax);

    //leitura de dados;
    for (int i=0; i < n; i++){
        do{
            cout <<i+1<<"º valor: ";
            cin >> vetX[i];
        }while(vetX[i]<1);

    }

    //verificando quem é primo:
    for (int i=0; i<n; i++){
        contDiv = 0;
        for (int j=1; j <= vetX[i]; j++){
            if(vetX[i]%j == 0){
              contDiv++;
            }
        }

        if(contDiv==2){
           vetY[contPrimo] = vetX[i];
           contPrimo++;
        }
    }

    cout<<" Vetor de Números Primos: ";
    for (int i=0; i < contPrimo; i++){
        cout <<"[" <<vetY[i] <<"] ";

    }
    cout<<endl;
    cout<<" Tamanho do Vetor Y: "<<contPrimo;


    return 0;
}

/*
Faça um algoritmo que leia o conteúdo de um vetor X de n (1 <= n <= 100) elementos inteiros e “construa”
um vetor Y contendo apenas os elementos primos de X.*/
