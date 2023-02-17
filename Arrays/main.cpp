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
	cout << "������� �������������� ��������� ������� = " << Avg(arr, size) << "\n";
	cout << "����������� ��������: " << minValueIn(arr, size) << "\n";
	cout << "������������ ��������: " << maxValueIn(arr, size) << "\n";
	shiftLeft(arr, size);
	shiftRight(arr, size);
}
// ����������
void FillRand(int arr[], const int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}
// ����� �� �����
void Print(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
// �����
int Sum(int arr[], const int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		cout << endl << c;
		c += arr[i];
		cout << " + " << arr[i] << " = " << c << endl;
	}
	cout<< "\n\n\n" << "����� ���������� ������� = " <<  c << endl;
	return c;
}
// ������� ��������������
double Avg(int arr[], const int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		c += arr[i];
	}
	return (double)c / size;
}
// ����������� � ������������ ��������
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
// ����� ������� �����
void shiftLeft(int arr[], const int size)
{
	//����� ��������� �������
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//����� 
	int number_shifts;
	cout << "������� ���������� ������� �����: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
	}
	//����� �� ����� ���������� �������
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
// ����� ������� ������
void shiftRight(int arr[], const int size)
{
	//����� ��������� �������
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	//����� 
	int number_shifts;
	cout << "������� ���������� ������� ������: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		int buffer = arr[size-1];
		for (int i = size; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	//����� �� ����� ���������� �������
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
