#include <iostream>
#include <cmath>
using namespace std;

bool is_prime (long a) {
	if (a <= 2) return true;
	if (!(a % 2)) return false;
	int limit = int(sqrt(a))+1;
	for (int x=3;x<limit;x++)
		if (!(a%x)) return false;
	return true;
}

int main() {
	long val=2;
	long below =2e6;
	long sum=0;
	while (val < below) {
		if (is_prime(val)) {
			cout << val << endl;
			sum += val;
		}
		val++;
	}
	cout << "ans: " << sum << endl;
	return 0;
}