#include <bits/stdc++.h>

using namespace std;

int main() {

    int idade1, idade2;
    double salario1, salario2;
    string nome1, nome2;

    // Inserir os dados
    cout << "Digite o nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Digite a idade da primeira pessoa: ";
    cin >> idade1;
    cout << "Digite o salario da primeira pessoa: ";
    cin >> salario1;

    cout << "Digite o nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Digite a idade da segunda pessoa: ";
    cin >> idade2;
    cout << "Digite o salario da segunda pessoa: ";
    cin >> salario2;

    // Mostrar os dados
    cout << "\nNome da primeira pessoa: " << nome1 << endl;
    cout << "Idade da primeira pessoa: " << idade1 << endl;
    cout << "Salario da primeira pessoa: " << salario1 << endl;
    cout << "\nNome da segunda pessoa: " << nome2 << endl;
    cout << "Idade da segunda pessoa: " << idade2 << endl;
    cout << "Salario da segunda pessoa: " << salario2 << endl;

    return 0;
}
