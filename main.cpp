#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int A[16], sum = 0, n;
	cout << "Введите 16 чисел:" << endl;
	for (int i = 0; i < 16; i++)
	{
		cin >> A[i];
		n = A[i] % 3;
		if (n == 0) sum += A[i];
	}
		cout << "Сумма элементов кратных 3= " << sum << endl;
		return 0;
}