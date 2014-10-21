#include <iostream>
using namespace std;

long hcf (long a, long b) {
	if (b) return hcf(b,a%b);
	else return a;
}

long lcm (long a, long b) {
	return a*b/hcf(a,b);
}

int main() {
	long ans=1;
	for (int i=1;i<=18;i++) {
		int j = i+1;
		int k = i+2;
		ans = lcm (ans,lcm(j,k));
	}
	cout << "ans: " << ans << endl;
	return 0;
}