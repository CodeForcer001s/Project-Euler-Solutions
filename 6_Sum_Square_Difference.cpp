#include <bits/stdc++.h>
using namespace std;

int main() {
	int number = 1;
	int sum_of_square = 0;
	int square_of_sum = 0;
	
	while(number<=100){
	    sum_of_square += number*number;
	    square_of_sum += number;
	    number ++;
	}
	
	square_of_sum *= square_of_sum;
	
	cout << square_of_sum - sum_of_square<<endl;
	
	return 0;

}
