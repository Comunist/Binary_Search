#include "iostream"
#include "vector"
using namespace std;

int bsearch(vector<int> numbers, int value)
{
	int size = numbers.size();
	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (value == numbers[mid])
		{
			cout << "Число " << value << " имеет индекс " << mid << endl;
			return 0;
		}
		else if (value > numbers[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return 1;
}

int main()
{
	setlocale(LC_ALL, "rus");
	vector<int>Num;
	int buf;
	int X;
	cout << "Введите возрастающий массив чисел от 0 до 100. По окончанию ввода введите любое число больше 100\n";
	cin >> buf;
	while (buf <= 100)
	{
		Num.push_back(buf);
		cin >> buf;
	}
	cout << endl;
	cout << "Индекс какого числа необходимо найти?\n\n";
	cin >> X;
	bsearch(Num, X);

	return 0;
}