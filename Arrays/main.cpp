// Arrays
#include <iostream>
using namespace std;

void FillRand(int arr[], const int size, int minRand = 0, int maxRand = 10);
void FillRand(double arr[], const int size);
void Print(int arr[], const int size);
int Sum(int arr[], const int size);
double Avg(int arr[], const int size);
int minValueIn(int arr[], const int size);
int maxValueIn(int arr[], const int size);
void shiftLeft(int arr[], const int size);
void shiftRight(int arr[], const int size);

void UniqueRand(int arr[], const int size);
void Sort(int arr[], const int size);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 8;
	int brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сортировка: " << endl;
	Sort(brr, n);
	Print(brr, n);
	cout << "Сумма элементов массива: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(brr, n) << "\n";
	cout << "Минимальное значение: " << minValueIn(brr, n) << "\n";
	cout << "Максимальное значение: " << maxValueIn(brr, n) << "\n";
	shiftLeft(brr, n);
	Print(brr, n);
	shiftRight(brr, n);
	Print(brr, n);

	int const size = 10;
	int arr[size], minRand, maxRand; cout << "Введите min и max: "; cin >> minRand >> maxRand;
	FillRand(arr, size, minRand, maxRand);
	Print(arr, size);
	cout << "Сортировка: " << endl;
	Sort(arr, size);
	Print(arr, size);
	cout << "Сумма элементов массива: " << Sum(arr, size) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(arr, size) << "\n";
	cout << "Минимальное значение: " << minValueIn(arr, size) << "\n";
	cout << "Максимальное значение: " << maxValueIn(arr, size) << "\n";
	shiftLeft(arr, size);
	shiftRight(arr, size);
}
void FillRand(int arr[], const int size, int minRand, int maxRand)
{
	//заполнение массива случайными числами
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
// Вывод на экран
void Print(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
// Сумма
int Sum(int arr[], const int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		c += arr[i];
	}
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
	/*for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/
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
	/*for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/
}
// Сдвиг массива вправо
void shiftRight(int arr[], const int size)
{
	//Вывод исходного массива
	/*for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/
	//Сдвиг 
	int number_shifts;
	cout << "Введите количество сдвигов вправо: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		int buffer = arr[size - 1];
		for (int i = size - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	//Вывод на экран сдвинутого массива
	/*for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/
}

void UniqueRand(int arr[], const int size)
{
	bool unique; // Флаг уникальности
	for (int i = 0; i < size; i++)
	{
		do
		{
			arr[i] = rand() % size;
			unique = true; // Предполагаем, что случайное число уникально
			// но это нужно проверить
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break; // Ключевое слово break прерывает текущую итерацию и все последующие
				}
			}
		} while (!unique);
	}
}
void Sort(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}