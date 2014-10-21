#include <iostream>
using namespace std;

long fabionacci (long a)
{
  if (a > 1)
   return (fabionacci (a-1) + fabionacci (a-2));
  else if (a == 1)
   return 1;
  else
   return 0;
}

int main ()
{
	long number=4e6;
	long sum;
	long i = 0;
	while (true) {
		if (fabionacci(i) > number) break;
		if (fabionacci(i) % 2 == 0) {sum += fabionacci(i);
		cout << i << "=sum== " << sum << endl;}
		i++;
	}
	return 0;
}