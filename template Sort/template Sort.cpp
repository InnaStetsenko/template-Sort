#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
//ДЗ:написать 3 шаблонных функции сортировки(пузырьком, вставками, выбором) для одномерных массивов.
//код залить на репозиторий, на майстат прислать ссылку.
//«Пузырьковая»
//сортировка
//template <typename T>
//void bubbleSort(T a[], long size)
//{
//	long i, j;
//	T x;
//	for (i = 0; i < size; i++)
//	{
//		for (j = size - 1; j > i; j--)
//		{
//			if (a[j - 1] > a[j])
//			{
//				x = a[j - 1];
//				a[j - 1] = a[j];
//				a[j] = x;
//			}
//		}
//	}
//}
//
////Сортировка выбором
//template <typename T>
//void selectSort(T a[], long size)
//{
//	long i, j, k;
//	T x;
//	for (i = 0; i < size; i++)
//	{
//		k = i;
//		x = a[i];
//		for (j = i + 1; j < size; j++)
//			if (a[j] < x)
//			{
//				k = j;
//				x = a[j];
//			}
//		if (k != i)
//		{
//			a[k] = a[i];
//			a[i] = x;
//		}
//	}
//}
////Сортировка вставками
//template <typename T>
//void insertSort(T a[], long size)
//{
//	T x;
//	long i, j;
//
//	for (i = 0; i < size; i++)
//	{
//		x = a[i];
//		for (j = i - 1; j >= 0 && a[j] > x; j--)
//
//			a[j + 1] = a[j];
//		a[j + 1] = x;
//	}
//}
