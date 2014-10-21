#include <iostream>
using namespace std;


int factor_cnt(int a) {
	int cnt=0;
	for (int i=1,j=a;i<a/2 && i < j;i++,j =a/i) {
		if (i*j==a) {
			cnt +=2;
		}
	}
	return cnt;
}


int main() {
	int i=4;
	int divisor =0;
	do {
		int temp=(i*(i+1))/2;
		divisor = factor_cnt(temp) - 1;
		cout << i << ": " << temp << ": " << divisor << endl;
		i++;
	} while (divisor<500);
	cout << "ans: " << i-1 << endl;
	return 0;
}