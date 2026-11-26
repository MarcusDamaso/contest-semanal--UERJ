#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

long long apple_division(long long i, long long soma1,long long soma2,vector<long long> peso){
	if (i == peso.size()){
		return llabs(soma1-soma2);
	}
	long long op1 = apple_division(i+1,soma1+peso[i],soma2,peso);
	long long op2 = apple_division(i+1,soma1,soma2 + peso[i],peso);
	
	return min(op1,op2);
	

}


int main (void){
	long long i =0;
	int n = 0;
	long long soma1 = 0;
	long long soma2 = 0;
	long long temp;
	vector<long long> peso;
	cin >> n;
	while(n--){
		cin >> temp;
		peso.push_back(temp);
		
	}
	cout << apple_division(i,soma1,soma2,peso);
	
	

}
