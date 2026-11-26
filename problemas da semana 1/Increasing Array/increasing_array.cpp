#include <iostream>
#include <vector>
using namespace std;

long long increasing_array(long long n, vector<long long> array_numbers) {


  long long soma = 0;
  
  for (int i = 0; i < n-1; i++) {
    if (array_numbers.at(i + 1) < array_numbers.at(i)) {


      soma += array_numbers.at(i) - array_numbers.at(i + 1);
      array_numbers.at(i + 1) +=( array_numbers.at(i) - array_numbers.at(i + 1));
    }
  }
  return soma;

}  

int main() {

  vector<long long> array_numbers;
  long long n;
  cin >> n;
  long long ncopy = n;
  long long temp;
  
  while (ncopy--) {
    cin >> temp;
    array_numbers.push_back(temp);
  }
  cout << increasing_array(n,array_numbers);

}  
