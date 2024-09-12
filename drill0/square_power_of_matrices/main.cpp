#include <iostream>
using namespace std;
int main(void) {

	int a[1000] = { 0 };
	int a1, a2;
	cin >> a1 >> a2;

	if (a1 != a2)
	{
		cout << "INVALID";
		return 0;
	}
	 
	for (int i = 0; i < a1; i++) {
		for (int j = 0; j < a2; j++)
			cin >> a[(i*a2)+j];
	}

	int b[100] = { 0 }, c[100] = { 0 }, d[100] = { 0 }, naha[100] = { 0 };
	int sum = 0;
	 
	for (int i = 0; i < a1; i++)
	{
		for (int j = 0; j < a2; j++)
		{
			sum = 0;
			for (int p = 0; p < a1; p++)
			{
				b[p] = a[(p * a1) + j];
				c[p] = a[(i * a1) + p];
				d[p] = b[p] * c[p];
				sum += d[p];
				
			}
			naha[(i * a1) + j] = sum;
		}
	}


	for (int i = 0; i < a1; i++)
	{
		for (int j = 0; j < a1; j++)
		{
			cout << naha[(i * a1) + j]<<" ";
		}
		cout << endl;
	}

	return 0;}
