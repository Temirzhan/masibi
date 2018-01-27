#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>

using namespace std;
char f;
void main()
{
	setlocale(LC_ALL, "rus");
	do {
		int N;
		cout << "Выберите задания для проверки" << endl;
		cin >> N;
		cout << "-------------------------------------------------" << endl;
		if (N == 1)
		{
			/*Массив предназначен для хранения значений весов двадцати человек. С помощью датчика случайных чисел заполнить массив целыми значениями, лежащими в диапазоне от 50 до 100 включительно
			*/
			int A[20];
			for (int i = 0; i < 20; i++)
			{
				A[i] = 50 + rand() % 50;
				cout << "Вес " << i + 1 << " человека" << A[i] << endl;
			}
		}
		else if (N == 2)
		{
			/*Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали:
			убывающую последовательность;
			возрастающую последовательность
			*/		int A[8];
		int temp;
		for (int i = 0; i < 8; i++)
		{
			A[i] = 1 + rand() % 1150;
			cout << " A[" << i << "]= " << A[i] << endl;
		}
		cout << "a)Убывающая последовательность" << endl;
		for (int i = 7; i > 0; i--)
			for (int j = 0; j < i; j++)
			{
				if (A[j + 1] > A[j])
				{
					temp = A[j + 1];
					A[j + 1] = A[j];
					A[j] = temp;
				}
			}
		for (int i = 0; i < 8; i++)
		{
			cout << " A[" << i << "]= " << A[i] << endl;
		}

		cout << "б)Возрастающая последовательность" << endl;
		for (int i = 0; i < 7; i++)
		{
			for (int j = 7; j > i; j--)
			{
				if (A[j - 1] > A[j])
				{
					temp = A[j - 1];
					A[j - 1] = A[j];
					A[j] = temp;
				}
			}
		}
		for (int i = 0; i < 8; i++)
		{
			cout << " A[" << i << "]= " << A[i] << endl;
		}
		}
		else if (N == 3)
		{
			/*Ввести целочисленный массив, состоящий из 10 элементов. Поменять местами максимальный и первый элементы.
			*/
			int A[10];
			int max = 0;
			int cont = 0;
			int min = 999999999;
			int cont2 = 0;
			for (int i = 0; i < 10; i++)
			{
				A[i] = 1 + rand() % 100;
				cout << " A[" << i << "]= " << A[i] << endl;
				if (max < A[i])
				{
					max = A[i];
					cont = i;

				}
				if (min > A[i])
				{
					min = A[i];
					cont2 = i;
				}
			}
			cout << cont << endl;
			cout << cont2 << endl;
			A[cont] = min;
			A[cont2] = max;
			cout << "После замены:" << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << " A[" << i << "]= " << A[i] << endl;
			}


		}
		else if (N == 4)
		{
			/*Задан массив, состоящий из 15 элементов вещественного типа. Определить количество элементов, значения которых больше первого элемента.
*/float A[15];
		int chet=0;
		for (int i=0; i < 15; i ++)
		{
			A[i] = 1.1 + rand() % 1000;
		}
		for (int i=1; i < 15; i++)
		{
			if (A[0] < A[i])
				chet++;
		}
		cout << "Количество элементов больше чем первый = " << chet << endl;
		}
		else if (N == 5)
		{
			/*Ввести целочисленный массив, состоящий из 15 элементов. Определить сумму и разность максимального и минимального  элементов*/
			int A[10];
			int max = 0;
			int cont = 0;
			int min = 999999999;
			int cont2 = 0;
			for (int i = 0; i < 10; i++)
			{
				A[i] = 1 + rand() % 100;
				cout << " A[" << i << "]= " << A[i] << endl;
				if (max < A[i])
				{
					max = A[i];

				}
				if (min > A[i])
				{
					min = A[i];
				}
			}
			cout << "Сумма мсамого большого и малого элемнта = " << min + max << endl;
		}
		cout << "Хотите продолжить проверять задания?" << endl;
		cout << "y-da   n-net" << endl;
		cin >> f;
	} while (f == 'y');
}