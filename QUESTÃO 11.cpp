#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;

//FEITO
//POR
//AIRES

int main() {
  string mercadoria;
  float valorT = 0;
  cout << "Olá! Por favor insira o produto e o seu preço :)" << endl << endl;
  getline (cin, mercadoria);
  cin >> valorT;
  float desconto = valorT * 0.1;
  float valorV = valorT - desconto;
  cout << endl << "Obrigado! Lembre-se que temos um desconto de 10% se o pagamento for a vista :)" << endl << endl;
  cout << "Produto: " << mercadoria << endl;
  cout << "Valor original: " << valorT << endl;
  cout << "Valor do desconto: " << desconto << endl;
  cout << "Valor a vista: " << valorV << endl;
  
}