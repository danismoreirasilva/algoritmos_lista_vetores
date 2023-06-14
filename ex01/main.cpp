#include <iostream>

using namespace std;

#define tamMaxTurma 20

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n;
    string vetNome[tamMaxTurma];
    float vetNota[tamMaxTurma], media = 0.0, somaNota = 0.0;
    int contAbaixoMedia = 0;

    do{
        cout<<"Digite a quantidade de alunos da turma: ";
        cin >> n;
    }while(n<0 || n>tamMaxTurma);

    for (int i=0; i<n; i++){
        cin.ignore();
        cout << "Nome " << i+1 <<"º Aluno: ";
        getline(cin,vetNome[i]);

        do{
            cout << "Nota: ";
            cin >> vetNota[i];
        }while(vetNota[i]<0 || vetNota[i]>10);

        somaNota += vetNota[i];

    }

    media = somaNota / n;

    cout << "Estudantes acima da média "<< media << ":" <<endl;
    for(int i=0; i<n; i++){
        if(vetNota[i]>= media){
            cout << "Nome: " << vetNome[i] <<" nota: " << vetNota[i] <<endl;
        }else{
            contAbaixoMedia++;
        }
    }
    cout << "Número de estudantes abaixo da média "<< contAbaixoMedia << "." <<endl;
    return 0;
}

