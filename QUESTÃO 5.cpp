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
  string N;
  getline (cin,N);
  int O = N.size()-1;
  for (int i = 0; i < N.size() / 2; i++)
    {
      char aux = N[i];
      N[i] = N[O];
      N[O] = aux;
      O--;
    }
  cout << "De trás pra frente fica assim:" << endl << N << endl;
  return 0;
}