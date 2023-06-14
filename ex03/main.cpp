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
        cout <<"Digite o "<<i+1 <<"� valor do vetor V: ";
        cin >> vetV[i];
    }

    //Leitura dos dados Vetor W:
    for (int i=0; i<n ; i++){
        cout <<"Digite o "<<i+1 <<"� valor do vetor W: ";
        cin >> vetW[i];
    }


    //Realizando as opera��es dos dados:
    cout <<"Vetor Soma ";
    for (int i=0; i<n ; i++){
        vetResp[i] = vetV[i] + vetW[i];
        cout <<"["<<vetResp[i]<<"] ";
    }

    cout <<"" <<endl;
    cout <<"Vetor Subtra��o ";
    for (int i=0; i<n ; i++){
        vetResp[i] = vetV[i] - vetW[i];
        cout <<"["<<vetResp[i]<<"] ";
    }

    cout <<"" <<endl;
    cout <<"Vetor Multiplica��o ";
    for (int i=0; i<n ; i++){
        vetResp[i] = vetV[i] * vetW[i];
        prodEscalar += vetV[i] * vetW[i];
        cout <<"["<<vetResp[i]<<"] ";
    }

    cout <<"" <<endl;
    cout <<"Vetor Divis�o ";
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
       cout << "Os vetores V e W s�o ortogonais!" << endl;
    }else{
        cout << "Os vetores V e W N�O s�o ortogonais!" << endl;
    }

    return 0;
}


/*
Fa�a um algoritmo que leia dois vetores V e W com n (n <= 15) n�meros reais. Determine os vetores
resultantes da soma de V e W, da subtra��o de V e W, da multiplica��o de V e W, da divis�o de V e W,
elemento a elemento. Determine tamb�m o produto escalar de V e W, definido como: S (Vi * Wi) = V1 *
W1 + V2 * W2 + ...+ Vn* Wn. Caso o produto escalar seja igual a zero, os vetores s�o classificados como
ORTOGONAIS.*/
