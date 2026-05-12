#include <bits/stdc++.h>
using namespace std;

int main() {
	long long challenge = 600851475143;
	long long divisor = 3;
	while(challenge != 1){
	    if(challenge%divisor == 0){
	        challenge /= divisor;
	    }
	    else{
	    divisor+=2;
	    }
	}
	
	cout << divisor<<endl;
	cout << challenge << endl;
	
	return 0;

}
