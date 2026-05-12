#include <bits/stdc++.h>
using namespace std;

int main() {
	int val1 = 2;
	int val2 = 1;
	int new_val = 3;
	int sum = 2;
	while(new_val < 4000000){
	    if(new_val % 2 == 0){
	        sum += new_val;
	    }
	    
	    new_val = val1 + val2;
	    val2 = val1;
	    val1 = new_val;
	}
	
	cout << sum;
	return 0;

}
