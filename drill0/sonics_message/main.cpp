#include <iostream>

using namespace std;

int main() {

	char a[100] = { 0 };
	int count = 0, tedad = 0, shomare=0;

	cin.getline(a, 100, '\n');

	for (int i = 0; i < 100; i++)
	{
		if (a[i] != 0)
			count++;
		else
			break;
	}

	tedad = count / 4;
	if ((count / 4) != 0)
		tedad++;

	cout << tedad <<" " << endl;

	for (int* p = (int*)a; (*p) != 0; p++)

	{

		cout << *p<<" ";
		shomare++;

		if (shomare < tedad)
			cout << endl;

	}


	return 0;

}
