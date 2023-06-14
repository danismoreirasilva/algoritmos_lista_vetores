#include <iostream>

using namespace std;

#define tamMax 15

int main()
{

    setlocale(LC_ALL, "portuguese");

    float vetV[tamMax], vetW[tamMax], vetResp[tamMax];
    float prodEscalar = 0.0;
    int n;

    do{
        cout <<"Digite o valor de n (entre 1 e 15): ";
        cin >> n;
    }while(n<1|| n>tamMax);

    cout <<" " <<endl;

    //Leitura dos dados Vetor V:
    for (int i=0; i<n ; i++){
        cout <<"Digite o "<<i+1 <<"º valor do vetor V: ";
        cin >> vetV[i];
    }

    //Leitura dos dados Vetor W:
    for (int i=0; i<n ; i++){
        cout <<"Digite o "<<i+1 <<"º valor do vetor W: ";
        cin >> vetW[i];
    }


    //Realizando as operações dos dados:
    cout <<"Vetor Soma ";
    for (int i=0; i<n ; i++){
        vetResp[i] = vetV[i] + vetW[i];
        cout <<"["<<vetResp[i]<<"] ";
    }

    cout <<"" <<endl;
    cout <<"Vetor Subtração ";
    for (int i=0; i<n ; i++){
        vetResp[i] = vetV[i] - vetW[i];
        cout <<"["<<vetResp[i]<<"] ";
    }

    cout <<"" <<endl;
    cout <<"Vetor Multiplicação ";
    for (int i=0; i<n ; i++){
        vetResp[i] = vetV[i] * vetW[i];
        prodEscalar += vetV[i] * vetW[i];
        cout <<"["<<vetResp[i]<<"] ";
    }

    cout <<"" <<endl;
    cout <<"Vetor Divisão ";
    for (int i=0; i<n ; i++){
        if(vetW[i]==0){
            vetResp[i] = 0;
        }else{
            vetResp[i] = vetV[i] / vetW[i];
        }
        cout <<"["<<vetResp[i]<<"] ";
    }


    cout <<"" <<endl;
    if(prodEscalar == 0){
       cout << "Os vetores V e W são ortogonais!" << endl;
    }else{
        cout << "Os vetores V e W NÃO são ortogonais!" << endl;
    }

    return 0;
}


/*
Faça um algoritmo que leia dois vetores V e W com n (n <= 15) números reais. Determine os vetores
resultantes da soma de V e W, da subtração de V e W, da multiplicação de V e W, da divisão de V e W,
elemento a elemento. Determine também o produto escalar de V e W, definido como: S (Vi * Wi) = V1 *
W1 + V2 * W2 + ...+ Vn* Wn. Caso o produto escalar seja igual a zero, os vetores são classificados como
ORTOGONAIS.*/
