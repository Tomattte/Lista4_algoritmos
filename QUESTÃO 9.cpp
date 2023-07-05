#include <iostream>
#include <string>

using namespace std;

//FEITO
//POR
//AIRES

int main() {
  cout << "Insira duas strings, de preferência a menor por último ;)" << endl;
  string A, B;
  getline(cin, A);
  getline(cin, B);
  int i = 0;
  size_t C = 0;
  while ((C = A.find(B, C)) != string::npos) {
    i++;
    C += B.size();
  }
  if (i == 0) {
    cout << "A segunda string não aparece nenhuma vez na primeira :(" << endl;
  } else
    cout << "A segunda string aparece " << i << " vezes na primeira ;)" << endl;
  return 0;
}