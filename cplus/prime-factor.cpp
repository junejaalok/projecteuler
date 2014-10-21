#include <iostream>

using namespace std;


bool factor (long a, long b) {
	if (a == b) return true;

	if (!(a % b) && ((b % 2 ) || (b % 3)) && (b != 1) && (b != 2) && (b != 3)) 
		return true;
	
	return false;
}

int main() {
	
	long x=600851475143;
	for (long i=2;i<=x;i++){
		if (factor(x,i)) {
			cout << i << endl;
			x /=i;
			//cout << "x " << x << endl;
		}
	}
	return 0;
}