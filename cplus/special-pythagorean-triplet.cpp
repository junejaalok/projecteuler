#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int sum=1000;
	for (int i=1;i<sum;i++) {
		for (int j=i+1;j<sum;j++) {
			for (int k=j+1;k<=sum-i-j;k++)
				if (i+j+k==sum && (i*i+j*j==k*k))  {
					cout << "i: " << i << endl;
					cout << "j: " << j << endl;
					cout << "k: " << k << endl;
					cout << i*j*k << endl;
					break;
				}
		}
	}	
	return 0;
}