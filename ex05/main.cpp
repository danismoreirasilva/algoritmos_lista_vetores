#include <iostream>

using namespace std;

#define tamMax 100

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, vetInsc[tamMax], vetAltura[tamMax], inscricaoAlto, inscricaoBaixo, alturaMaior, alturaMenor, somaAltura;

    do{
        cout <<"Digite a quantidade de atletas: ";
        cin >> n;
    }while(n<1 || n>tamMax);


    //leitura de dados;
    for (int i=0; i<n; i++){
        cout <<"Digite o número de inscrição do "<<i+1<<"º atleta: ";
        cin >> vetInsc[i];

        do{
           cout <<"Digite a altura em cm do "<<i+1<<"º atleta: ";
           cin >> vetAltura[i];
        }while(vetAltura[i]<50 || vetAltura[i]>250);

    }

    //Cálculos
    inscricaoAlto = vetInsc[0];
    inscricaoBaixo = vetInsc[0];
    alturaMaior = vetAltura[0];
    alturaMenor = vetAltura[0];
    somaAltura = vetAltura[0];

    for(int i=1; i<n; i++){

        somaAltura += vetAltura[i];

        if(vetAltura[i] > alturaMaior){
           alturaMaior = vetAltura[i];
           inscricaoAlto =  vetInsc[i];
        }else{
            if(vetAltura[i] < alturaMenor){
                alturaMenor = vetAltura[i];
                inscricaoBaixo =  vetInsc[i];
            }
        }
    }

    //Escrevendo os resultados
    cout <<"Atleta mais Alto " << endl;
    cout <<"Número de inscrição: " << inscricaoAlto <<" | Altura(cm): "<<alturaMaior <<endl;
    cout <<endl;

    cout <<"Atleta mais Baixo " << endl;
    cout <<"Número de inscrição: " << inscricaoBaixo <<" | Altura(cm): "<<alturaMenor<<endl;
    cout <<endl;

    cout <<"A média da altura do grupo é:  " << float(somaAltura)/n << endl;


    return 0;
}

/*
Faça um algoritmo que leia n (n <= 100) pares de valores, sendo o primeiro valor o número de inscrição
do atleta e o segundo a altura (em cm) do atleta, e armazene-os em vetores. Apresente ao final o número
de inscrição e a altura do atleta mais alto, o número de inscrição e a altura do atleta mais baixo e a
altura média do grupo de atletas.*/
