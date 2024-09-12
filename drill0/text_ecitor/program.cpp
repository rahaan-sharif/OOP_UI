#include <iostream>
using namespace std;
int main(void) {

	char amir[1000];
	cin.getline(amir, 1000, '\n');
	char a1, a2;
	cin >> a1 >> a2;
	
	for (int i = 0; i < 1000; i++){
		if (amir[i] == 0)
			break;
		if (amir[i] == a1)
			amir[i] = a2;}

	cout << amir;

	return 0;}
