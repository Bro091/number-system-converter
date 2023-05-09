
#include <iostream>
#include <cmath>
#include <vector>
#include "NSC.h"
#include "DATA.h"


int main() {
	setlocale(LC_ALL, "Russian");
	
	
		/*int copyn = n, counter = 0;
		bool t = false; // ввожу переменную типа bool для проверки, чтобы введенное основание системы не было меньше чем число. 
		// например при вводе 987, если введем основание системы 8, то выдаст ошибку так как в 8миричной системе не может быть

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
		for (int i = 0; i < counter; i++) {
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
			std::cout << v[i];
		}
		std::cout << std::endl;
	}*/
		ten_sc(_N, _NS1, _NS2);

	return 0;
}