#include <iostream>

using namespace std;

#define tamMax 3000
#define qtePraias 42

int main()
{
    setlocale(LC_ALL, "portuguese");

    int vetPraia[tamMax], vetResp[qtePraias] = {0}, vetCodPraia[qtePraias], n, contPraia;
    float vetRenda[tamMax], vetRendaMedia[qtePraias] = {0.0}, somaRenda;

    do{
        cout << "Informe a quantidade de turistas: ";
        cin >> n;

    }while(n<1||n>tamMax);

    //leitura dos Dados
    for (int i=0; i<n; i++){
      do{
        cout << "Praia preferida: ";
        cin >> vetPraia[i];
      }while(vetPraia[i]<1 || vetPraia[i]>42);

      do{
        cout << "Renda mensal R$: ";
        cin >> vetRenda[i];
      }while(vetRenda[i]<0);

    }

    //Iniciando o vetor com os códigos das Praias;
    for (int i=0; i < qtePraias; i++){
        vetCodPraia[i] = i+1;
    }


     //Calculo dos dados
    for (int i=0; i < qtePraias; i++){
        contPraia = 0;
        somaRenda = 0.0;
        for(int j=0; j<n; j++){
            if (vetPraia[j] == vetCodPraia[i]){
                contPraia++;
                somaRenda += vetRenda[j];
            }
        }

        vetResp[i] = contPraia;
        if (contPraia>0)
            vetRendaMedia[i] = somaRenda/contPraia;
        else
            vetRendaMedia[i] = 0;
    }

    cout << "Código Praia | Número de Turistas | Renda Média (R$)" <<endl;
    for (int i=0; i < qtePraias; i++){
        cout << vetCodPraia[i] <<" | " << vetResp[i] << " | " << vetRendaMedia[i]<<endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}


/*
Uma empresa de turismo fez uma pesquisa em Florianópolis, na temporada de verão deste ano,
questionando sobre a praia de preferência e a renda mensal de um grupo composto por n (n <= 3000)
turistas. As praias foram identificadas por códigos (1 a 42). Faça um algoritmo que escreva, por praia,
o número de turistas que a preferem e a renda média destes turistas*/
