#include <iostream>

using namespace std;

#define tamMax 30

int main()
{
    setlocale(LC_ALL, "portuguese");

    string vetNome[tamMax], nome;
    float vetNotas[tamMax];
    int n, posicao;
    char opcao;
    bool achouElemento = false;

    do{
        cout<<"Digite a quantidade de alunos da turma: ";
        cin >> n;
    }while(n<1 || n>tamMax);


    //leitura de dados;
    for (int i=0; i < n; i++){
        cin.ignore();//limpando o buffer;
        cout << "Nome " <<i+1<<"� aluno: ";
        getline(cin, vetNome[i]);

        do{
            cout << "Nota " <<i+1<<"� aluno: ";
            cin >> vetNotas[i];
        }while(vetNotas[i]<0 || vetNotas[i]>10);
    }


    do{
        posicao = 0;
        cin.ignore();
        cout << "Digite o nome de um aluno: ";
        getline(cin,nome);

        while(posicao < n && not(achouElemento)){
            if(vetNome[posicao] == nome){
                achouElemento = true;
                cout <<"Nome do aluno: "<<vetNome[posicao] <<endl;
                cout <<"Nota Final: " <<vetNotas[posicao] <<endl;
            }else{
                posicao++;
            }

        }

        if(achouElemento==true){
            achouElemento = false;
        }else{
            cout <<"Pessoa inexistente "<<endl;
        }


        do{
            cout << "Deseja continuar s ou n: ";
            opcao = tolower(cin.get());
            cin.ignore();
        }while(opcao!='s'&& opcao!='n');

    }while(opcao!='n');

    return 0;
}


/*
Fa�a um algoritmo que leia n (n < 30) nomes e notas finais dos estudantes de uma turma e armazene
estas informa��es em vetores. Em seguida, dado um nome pesquise sua exist�ncia na turma, e caso
exista mostre a nota final correspondente. Caso contr�rio, apresente mensagem de pessoa inexistente.
Fa�a isso at� que o usu�rio n�o queira mais pesquisar*/
