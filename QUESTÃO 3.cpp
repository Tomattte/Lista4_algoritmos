#include <iostream>
#include <string>
using namespace std;

//FEITO
//POR
//AIRES

int main()
{
    cout << "Digite qualquer nome." << endl;
    string nome;
    getline (cin,nome);
    cout << "O nome digitado têm " << nome.size() << " caractéres." << endl;
    
    return 0;
}