#include <iostream>
#include <string>

using namespace std;

bool pal(int n) {

	int num=n;
	int rev=0;
	int cnt=0;
	while (num > 0)  {
		int val = num % 10;
//		cout << "val " << val << endl;
		rev = rev * 10 + val;
//		cout << "rev " << rev << endl;
		cnt++;
//		cout << "cnt " << cnt << endl;

		num /=10;
//		cout << "num " << num << endl;
//		cout << "--------- " << endl;
	}

	if (rev == n) return true;

	return false;
}

int main() {
//	cout << rev(123421) << endl;
	int max=0;
	int res;
	for (int i = 999; i>99; i--) {
		for (int j = i;j>99;j--) {
			res=i*j;
			if (!(res % 11) && pal(res)) {
				if (res>max) max=res;  
			}
		}
	}
	cout << max << endl;
	return 0;
}