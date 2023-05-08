
#include <iostream>
#include <cmath>
#include <vector>


int main()
{
	setlocale(LC_ALL, "Russian");
	for (;;)
	{
		int n, ns1, ns2;
		std::cout << "Введите число положительное целое число или 0 для выхода из программы -> ";
		std::cin >> n;
		if (n == 0)
			break;
		std::cout << "Введите основание системы счисления введенного числа -> ";
		std::cin >> ns1;
		std::cout << "Введите основание системы счисления к которой нужно привести число -> ";
		std::cin >> ns2;

		int copyn = n, counter = 0;
		bool t = false;

		while (copyn > 0)
		{
			if (copyn % 10 > ns1)
			{
				t = true;
				break;
			}

			copyn = copyn / 10;
			counter++;
		}
		if (t)
		{
			std::cout << "Ошибка ввода. Попробуйте снова ввести число!\n";
			continue;
		}

		// std::cout << counter; // проверка счетчика
		copyn = n;
		int sum = 0;
		for (int i = 0; i < counter; i++)
		{
			sum += (copyn % 10) * pow(ns1, i);
			copyn = copyn / 10;
		}
		// std::cout << sum; // проверка верно ли переводит в десятичную систему счисления
		int copysum = sum;
		std::vector<int> v; // пока читал про системы счисления, наткнулся на вектор. 
		// изучал на этом сайте https://academy.yandex.ru/handbook/cpp/article/vectors-and-strings
		// так как потребовалось всего пар методов, то пробовал воспользоваться им
		while (copysum > 0)
		{
			v.insert(v.begin(), copysum % ns2);
			copysum = copysum / ns2;
		}
		for (int i = 0; i < v.size(); i++)
		{
			std::cout << "Число после конвертации в введенную систему счисления -> " << v[i] << "\n";
		}
	}

	return 0;
}