#pragma once
#include <iostream>
#include <vector>
#include "NSC.h"




void ten_sc(int num1, int num2, int num3) 
{

	for (;;) 
	{
		std::cout << "������� ����� ������������� ����� ����� ��� 0 ��� ������ �� ��������� -> ";
		std::cin >> num1;
		if (num1 == 0)
			break;
		std::cout << "������� ��������� ������� ��������� ���������� ����� -> ";
		std::cin >> num2;
		std::cout << "������� ��������� ������� ��������� � ������� ����� �������� ����� -> ";
		std::cin >> num3;
		int copyn = num1, counter = 0;
		bool t = false;
		while (copyn > 0)
		{
			if (copyn % 10 > num2)
			{
				t = true;
				break;
			}
			copyn = copyn / 10;
			counter++;
		}
		if (t)
		{
			std::cout << "������ �����. ���������� ����� ������ �����!\n";
			continue;
		}

		copyn = num1;
		int sum = 0;
		for (int i = 0; i < counter; i++) {
			sum += (copyn % 10) * pow(num2, i);
			copyn = copyn / 10;
		}

		int copysum = sum;
		std::vector<int> v; 
		while (copysum > 0)
		{
			v.insert(v.begin(), copysum % num3);
			copysum = copysum / num3;
		}
		for (int i = 0; i < v.size(); i++)
		{
			std::cout << v[i];
		}
		std::cout << std::endl;
	}


}
