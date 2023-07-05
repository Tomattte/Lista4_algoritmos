#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//FEITO
//POR
//AIRES

int main()
{
  cout << "Escreva alguma coisa, eu direi se for um palíndromo :|" << endl;
  string nomE;
  string con = "";
  getline (cin,nomE);
  for (int i = 0; i < nomE.size(); i++)
    con = nomE[i] + con;
  if (nomE == con) {
    cout << "Hmm..... De fato isso aqui é um palíndromo :|" << endl;
  }
  else {
    cout << "Hmm..... É, infelizmente isto não é e nunca será um palíndromo :|"  << endl;
  }
  return 0;
}