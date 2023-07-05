#include <iostream>
#include <string>
using namespace std;

//FEITO
//POR
//AIRES

int main() {
  cout << "Olá, escreva alguma coisa, por favor." << endl;
  string A;
  getline (cin, A);
  cout << "Agora insira um caractére." << endl;
  char C;
  cin >> C;
  int V = 0;
  int i;
  string vogais("aeiouAEIOUãáàâéèêíìîóòôõúùû");
  for (int i = 0; i < A.size(); i++) {
    if (A[i] == vogais[0]) {
      A[i] = C;
      V++;
    }
    if (A[i] == vogais[1]) {
      A[i] = C;
      V++;
    }
    if (A[i] == vogais[2]) {
      A[i] = C;
      V++;
    }
    if (A[i] == vogais[3]) {
      A[i] = C;
      V++;
    }
    if (A[i] == vogais[4]) {
      A[i] = C;
      V++;
    }
    if (A[i] == vogais[5]) {
      A[i] = C;
      V++;
    }
    if (A[i] == vogais[6]) {
      A[i] = C;
      V++;
    }
    if (A[i] == vogais[7]) {
      A[i] = C;
      V++;
    }
    if (A[i] == vogais[8]) {
      A[i] = C;
      V++;
    }
    if (A[i] == vogais[9]) {
      A[i] = C;
      V++;
    }
  }
  cout << "Agora eu substítui as vogais pelo seu caractére." << endl << A << endl;
  cout << "Número de vogais no seu texto: " << endl << V << endl;
  return 0;
  }