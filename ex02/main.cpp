#include <iostream>

using namespace std;

#define tamMax 10

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n;
    float vetV[tamMax], vetSuavizado[tamMax];

    do{
        cout << "Informe o valor de n entre 3 e 10: ";
        cin >> n;
    }while(n<3 || n>tamMax);

    //lendo o vetor V
    for (int i=0; i<n; i++){
        cout << "Digite o " << i+1 << "° valor: ";
        cin >> vetV[i];

    }

    vetSuavizado[0] = vetV[0];
    vetSuavizado[n-1] = vetV[n-1];


    //suavizando o vetor V
    for (int i=1; i<n-1; i++)
        vetSuavizado[i] = (vetV[i-1] + vetV[i] + vetV[i+1])/3;


    //Escrevendo os resultados
    cout << "Vetor Suavizado "<< endl;
    for (int i=0; i<n; i++)
        cout << "["<< vetSuavizado[i] << "], ";


    return 0;

}
