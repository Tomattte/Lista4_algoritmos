#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//FEITO
//POR
//AIRES

int main()
{
  cout << "Escreva alguma coisa" << endl;
  string nomE;
  string con = "";
  getline (cin,nomE);
  for (int i = 0; i < nomE.size(); i++)
    con = nomE[i] + con;
  cout << "De trás pra frente fica assim:" << endl << con << endl;
  return 0;
}