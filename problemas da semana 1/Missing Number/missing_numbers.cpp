#include <iostream>
#include <vector>

using namespace std;

int missing_number(int n, vector<int> missing) {
  int soma1 = 0;
  int soma2 = 0;
  for (int i = 0; i <= n; i++) {
    soma1 += i;
  }
  for (int j = 0; j < missing.size(); j++) {
     soma2 += missing.at(j);
   }
   
  return soma1 - soma2;
  
  
  

}  


int main() {
  int entrada;
  int test;
  vector <int> missing;
  cin >> entrada;
  int entradaredu = entrada - 1;
  while (entradaredu--) {
    cin >> test;
    missing.push_back(test);
  }
  cout <<  missing_number(entrada,missing);


}  
