// Arrays
#include <iostream>
using namespace std;

void FillRand(int arr[], const int size);
void Print(int arr[], const int size);
int Sum(int arr[], const int size);
double Avg(int arr[], const int size);
int minValueIn(int arr[], const int size);
int maxValueIn(int arr[], const int size);
void shiftLeft(int arr[], const int size);
void shiftRight(int arr[], const int size);

void main()
{
	setlocale(LC_ALL, "");
	int const size = 10;
	int arr[size];
	FillRand(arr, size);
	Print(arr, size);
	Sum(arr, size);
	cout << "Среднее арифметическое элементов массива = " << Avg(arr, size) << "\n";
	cout << "Минимальное значение: " << minValueIn(arr, size) << "\n";
	cout << "Максимальное значение: " << maxValueIn(arr, size) << "\n";
	shiftLeft(arr, size);
	shiftRight(arr, size);
}
// Заполнение
void FillRand(int arr[], const int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}
// Вывод на экран
void Print(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
// Сумма
int Sum(int arr[], const int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		cout << endl << c;
		c += arr[i];
		cout << " + " << arr[i] << " = " << c << endl;
	}
	cout<< "\n\n\n" << "Сумма эелементов массива = " <<  c << endl;
	return c;
}
// Среднее арифметическое
double Avg(int arr[], const int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		c += arr[i];
	}
	return (double)c / size;
}
// Минимальное и максимальное значение
int minValueIn(int arr[], const int size)
{
	int sum = 0, min = arr[0];
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int size)
{
	int sum = 0, max = arr[0];
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
// Сдвиг массива влево
void shiftLeft(int arr[], const int size)
{
	//Вывод исходного массива
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//Сдвиг 
	int number_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
	}
	//Вывод на экран сдвинутого массива
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
// Сдвиг массива вправо
void shiftRight(int arr[], const int size)
{
	//Вывод исходного массива
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//Сдвиг 
	int number_shifts;
	cout << "Введите количество сдвигов вправо: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		int buffer = arr[size-1];
		for (int i = size; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	//Вывод на экран сдвинутого массива
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
