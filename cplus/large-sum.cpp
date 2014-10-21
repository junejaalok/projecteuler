#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main () {
	ifstream myfile ("large-sum.dat");
	if (myfile.is_open()) {
		string line[100];
		int sum [51];
		int i =0;
		int carry=0;
		while (getline(myfile,line[i])) i++;

		for (int k=49;k>=0;k--) {
			int temp=carry;
			for (int j=0;j<100;j++) {
				temp += (line[j][k] - '0');
			}
			if (k>0) {
				sum[k] = temp%10;
				carry = temp/10;
			}
			else sum[k] = temp;
		}

		for (int i=0;i<50;i++) {
			cout << sum[i];
		}
		//cout << "ans: " << *sum << endl;
	}
	else cout << "unable to open the file";

	return 0;
}