#include <iostream>
#include <string.h>
using namespace std;

char jomle[100] = { 0 };
char dastoor[100] = { 0 };
char ghesmat1[100] = { 0 }, ghesmat2[100] = { 0 }, ghesmat3[100] = { 0 };
char a[100]={0}, b[100]={0}, c[100]={0}, d[100], e[100]={0}, f[100]={0}, g[100]={0};

void aval(){
    strcpy(a,"SHIFT-R");
    strcpy(b,"SHIFT-L");
    strcpy(c,"EXTEND");
    strcpy(d,"SHRINK");
    strcpy(e,"REVERSE");
    strcpy(f,"PUT");
    strcpy(g,"PRINT");}

bool dast(char av[], char bs[]){

    for(int i=0; i<100; i++)
    {
        if(bs[i]!=av[i])
            return 1;
    }
    return 0;

}

bool moghayese(char a[], char aa[]) {
	for (int i = 0; i < 100; i++)
	{
		if (a[i] != aa[i])
			return 0;
	}
	return 1;
}
///////////////////
void moratab() {
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		if (dastoor[i] != 0)
			count++;
		else
		{
			break;
		}
	}

	int sp = 0, shomare = 0;

	for (int i = 0; i < count; i++)
	{
		if (dastoor[i] != ' ')
			ghesmat1[i] = dastoor[i];
		else
		{
			sp = i;
			break;
		}
	}

	for (int i = sp + 1; i < count; i++)
	{
		if (dastoor[i] != ' ') {
			ghesmat2[shomare] = dastoor[i];
			shomare++;
		}
		else
		{
			sp = i;
			break;
		}
	}

	shomare = 0;

	for (int i = sp + 1; i < count; i++)
	{
		ghesmat3[shomare] = dastoor[i];
		shomare++;
		if (dastoor[i] == 0)
			break;
	}
}
///////////////////

void ee() {

	int count = 0;

	for (int i = 0; i < 100; i++)
	{
		if (jomle[i] != 0) {
			count++;
		}
		else
			break;
	}
	count--;
	int c = count + 1;

	char tamrini[100] = { 0 };

	for (int i = 0; i < c; i++)
	{
		tamrini[i] = jomle[count];
		--count;
	}
	tamrini[c + 1] = 0;

	strcpy(jomle, tamrini);
}
///////////////////

void aa()
{
	int a = 0;

	for (int i = 0; i < 100; i++)
	{
		if (ghesmat2[i] != 0) {
			a = a * 10 + ghesmat2[i] - 48;
		}
		else
			break;

	}

	int count = 0;

	for (int i = 0; i < 100; i++)
	{
		if (jomle[i] != 0) {
			count++;
		}
		else
			break;
	}
	count--;

	char damedast1[100] = { 0 };
	char damedast2[100] = { 0 };
	strcpy(damedast1, jomle);

	count++;


	for (int i = 0; i < a; i++) {
		for (int j = 0; j < count; j++)
			damedast2[j + 1] = damedast1[j];
		damedast2[0] = damedast1[count - 1];
		damedast2[count] = 0;
		strcpy(damedast1, damedast2);
	}
	strcpy(jomle, damedast1);
	//cout<<"         "<<jomle<<endl;
}

///////////////////
void bb()
{
	int a = 0;

	for (int i = 0; i < 100; i++)
	{
		if (ghesmat2[i] != 0)
			a = a * 10 + ghesmat2[i] - 48;
		else
			break;

	}

	int count = 0;

	for (int i = 0; i < 100; i++)
	{
		if (jomle[i] != 0) {
			count++;
		}
		else
			break;
	}
	count--;

	char damedast1[100] = { 0 };
	char damedast2[100] = { 0 };
	strcpy(damedast1, jomle);

	count++;


	for (int i = 0; i < a; i++) {
		for (int j = 0; j < count; j++)
			damedast2[j] = damedast1[j + 1];
		damedast2[count - 1] = damedast1[0];
		damedast2[count] = 0;
		strcpy(damedast1, damedast2);
	}
	strcpy(jomle, damedast1);
}

///////////////////
void cc() {
	int a = 0;

	for (int i = 0; i < 100; i++)
	{
		if (ghesmat2[i] != 0)
			a = a * 10 + ghesmat2[i] - 48;
		else
			break;
	}

	int count = 0;

	for (int i = 0; i < 100; i++)
	{
		if (jomle[i] != 0)
			count++;
		else
			break;
	}

	for (int i = 0; i < a; i++)
	{
		jomle[i + count] = '*';
	}

	jomle[a + count] = 0;

}
///////////////////
void dd()
{
	int a = 0;

	for (int i = 0; i < 100; i++)
	{
		if (ghesmat2[i] != 0)
			a = a * 10 + ghesmat2[i] - 48;
		else
			break;
	}

	int count = 0;

	for (int i = 0; i < 100; i++)
	{
		if (jomle[i] != 0)
			count++;
	}

	for (int i = count-a; i < count; i++)
	{
		jomle[i] = 0;
	}
}
///////////////////
void ff()
{
	int a = 0;

	for (int i = 0; i < 100; i++)
	{
		if (ghesmat2[i] != 0)
		{
			a = (10 * a) + ghesmat2[i] - 48;
		}

		else
			break;
	}
	a--;

	jomle[a] = ghesmat3[0];
}
///////////////////
void gg() {
	cout << jomle<<endl;
}

///////////////////
void tasmim(char[])
{
    char av[100]={0};
    strcpy(av,"EXIT");
	while (dast(dastoor, av)) {

		moratab();

		if (moghayese(dastoor, e))
			ee();
		else if (moghayese(dastoor, g))
			gg();
		else if (moghayese(ghesmat1 , a))
			aa();
		else if (moghayese(ghesmat1 , b))
			bb();
		else if (moghayese(ghesmat1 , c))
			cc();
		else if (moghayese(ghesmat1 , d))
			dd();
		else if (moghayese(ghesmat1 , f))
			ff();


        for(int i=0; i<100; i++)
            {dastoor[i]=0;
            ghesmat1[i]=0;
            ghesmat2[i]=0;
            ghesmat3[i]=0;}


		cin.getline(dastoor, 100, '\n');
	}
}
///////////////////


int main(void) {

    aval();

	cin.getline(jomle, 100, '\n');
	cin.getline(dastoor, 100, '\n');

	tasmim(dastoor);


	return 0;
}





