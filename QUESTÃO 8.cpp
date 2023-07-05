#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//FEITO
//POR
//AIRES

int main() {
  cout << "Escreva duas frases, meu trabalho é conferir se a segunda está dentro da primeira\n";
  char A[100000];
  char B[100000];
  cin >> A;
  cin >> B;
  char* S;
  S = strstr(A, B);
  if (S == NULL) {
    cout << "Ok, a segunda não tá dentro da primeira." << endl;
  } else
    cout << "Beleza, a segunda tá dentro da primeira sim" << endl;
  return 0;
}