// factorial calculator
#include <iostream>
#include <cmath>
using namespace std;

int collatz (long a) {
	int cnt=0;
	if (a > 1) {
		cnt ++;
  		if (a%2==0) {
   			collatz (a/2);
  		}
		else {
			collatz ((3*a)+1);
		}
	}
//  	else if (a==1)
//   		cnt =1;
   	return cnt;
}


int main () {
  long number = 5;
  int cnt=1;
  while (number != 1) {
  	long long num=log2(number);

  	cout << number << endl;
  	if (number%2==0) {
  		number /=2;
  		cnt++;
  	}
  	else {
  		number = 3*number+1;
  		cnt ++;
  	}

  }
  cout << "ans: " << cnt << endl;
  return 0;
}