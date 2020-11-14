#include <iostream>
#include <iomanip>

using namespace std;

void Create(int* a, const int size, const int Low, const int High);
void Cout(int* a, const int size);
int Condition(int* a, const int size);
int Sum(int* a, const int size);

int main()
{
	srand((unsigned)time(NULL));
	const int size = 25;
	int a[size];

	int Low = -20;
	int High = 30;

	Create(a, size, Low, High);

	cout << "Masyv:" << endl;
	cout << endl;
	Cout(a, size);
	
	int Q = Condition(a, size);
	cout << "Modyfikovanyi Masyv=" << endl;
	cout << endl;
	Cout(a, size);

	int value = Sum(a, size);
	cout << "Suma elementiv z kriteriyu=" << value << endl;
	cout << endl;
	cout << "Kil`kist` elementiv z kriteriyu=" << Q << endl;

	return 0;
}
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0;i < size;i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Cout(int* a, const int size)
{
	for (int i = 0;i < size;i++)
		cout <<setw(5)<< a[i];
	cout << endl;
	cout << endl;
}
int Condition(int* a, const int size)
{
	int S = 0;
	for (int i = 0;i < size;i++)
	{
		if (a[i] < 0 || a[i] > 0 && a[i] % 2 == 0)
			S += 1;
		else 
			a[i] = 0;
	}
	return S;
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0;i < size;i++)
		S += a[i];
	return S;
}
