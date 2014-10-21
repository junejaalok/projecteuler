#include <iostream>
using namespace std;

int main() {
	long ans=0;
	for (int i=1;i<=100;i++) {
		for (int j=i+1;j<=100;j++) {
//			cout << "i: "  << i << " j: " << j << endl; 
			ans += (i*j);
		}
	}
	cout << "ans: " << 2*ans << endl;
	return 0;
}