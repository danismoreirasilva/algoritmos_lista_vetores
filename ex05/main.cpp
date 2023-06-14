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
        cout <<"Digite o n�mero de inscri��o do "<<i+1<<"� atleta: ";
        cin >> vetInsc[i];

        do{
           cout <<"Digite a altura em cm do "<<i+1<<"� atleta: ";
           cin >> vetAltura[i];
        }while(vetAltura[i]<50 || vetAltura[i]>250);

    }

    //C�lculos
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
    cout <<"N�mero de inscri��o: " << inscricaoAlto <<" | Altura(cm): "<<alturaMaior <<endl;
    cout <<endl;

    cout <<"Atleta mais Baixo " << endl;
    cout <<"N�mero de inscri��o: " << inscricaoBaixo <<" | Altura(cm): "<<alturaMenor<<endl;
    cout <<endl;

    cout <<"A m�dia da altura do grupo �:  " << float(somaAltura)/n << endl;


    return 0;
}

/*
Fa�a um algoritmo que leia n (n <= 100) pares de valores, sendo o primeiro valor o n�mero de inscri��o
do atleta e o segundo a altura (em cm) do atleta, e armazene-os em vetores. Apresente ao final o n�mero
de inscri��o e a altura do atleta mais alto, o n�mero de inscri��o e a altura do atleta mais baixo e a
altura m�dia do grupo de atletas.*/
