#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void create(int* mas);
void change(int* mas);
void print(int* mas);
int sum1(int* mas);
int count1(int* mas);
int unittest(int a[], int i, int sum);

int main()
{
	srand((unsigned)time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int mas[23];
	cout << "Ітераційний" << endl;
	create(mas);
	print(mas);
	cout << endl;
	cout << "Сума тих, які є парні та від'ємні: " << sum1(mas) << endl;
	cout << "Кількість тих, які є парні та від'ємні: " << count1(mas) << endl;
	change(mas);
	print(mas);
	cout << endl;
	int a[10] = { 5,7,10,14,15,13,16,9,4,11 };
	cout << endl;
	cout << "Unit test result: " << unittest(a, 0, 0) << endl;
	cout << "________________________________________________________________________________" << endl;

}
void create(int* mas)
{
	int Low = 4;
	int Max = 16;
	for (int i = 0; i <= 22; ++i)
		mas[i] = Low + rand() % (Max - Low + 1);
}
void change(int* mas)
{
	for (int i = 0; i <= 22; ++i)
	{
		if (!(mas[i] % 3 == 0) && mas[i] % 2 == 0)
			mas[i] = 0;
	}
}
void print(int* mas)
{
	for (int i = 0; i <= 22; ++i)
		cout << setw(3) << mas[i] << " ";
}
int sum1(int* mas)
{
	int sum = 0;
	for (int i = 0; i <= 22; ++i)
	{
		if (!(mas[i] % 3 == 0) && mas[i] % 2 == 0)
			sum += mas[i];
	}
	return sum;
}
int count1(int* mas)
{
	int j = 0;
	for (int i = 0; i <= 22; ++i)
	{
		if (!(mas[i] % 3 == 0) && mas[i] % 2 == 0)
			++j;
	}
	return j;
}
int unittest(int a[], int i, int sum)
{
	for (i; i <= 12; ++i)
	{
		if (!(a[i] % 3 == 0)  && a[i] % 2 == 0)
			sum += a[i];
	}
	return sum;
}
