#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

char digit_queries(long long k){
	long long start = 1;
	long long digit_len = 1;
	long long total_digit = 9;
	long long base = 10;
	
	while(k>start + digit_len * total_digit - 1){
		start = start + total_digit * digit_len;
		digit_len ++;
		total_digit = total_digit * 10;
	
	}
	
	long long potencia = digit_len -1;
	long long primeiro_numero = pow(base,potencia);
	long long alvo = primeiro_numero + (k-start)/digit_len;
	
	long long resultado = (k-start)%digit_len;
	
	
	string teste = to_string(alvo);
	
	return teste[resultado];
	


}

int main (){

	long long n;
	long long test_n;
	cin >> n;
	while(n--){
		
		cin >> test_n;
		cout << digit_queries(test_n) << endl;
		
	}

}
