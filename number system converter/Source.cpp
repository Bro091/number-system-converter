
#include <iostream>
#include <cmath>
#include <vector>


int main()
{
	setlocale(LC_ALL, "Russian");
	for (;;)
	{
		int n, ns1, ns2;
		std::cout << "������� ����� ������������� ����� ����� ��� 0 ��� ������ �� ��������� -> ";
		std::cin >> n;
		if (n == 0)
			break;
		std::cout << "������� ��������� ������� ��������� ���������� ����� -> ";
		std::cin >> ns1;
		std::cout << "������� ��������� ������� ��������� � ������� ����� �������� ����� -> ";
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
			std::cout << "������ �����. ���������� ����� ������ �����!\n";
			continue;
		}

		// std::cout << counter; // �������� ��������
		copyn = n;
		int sum = 0;
		for (int i = 0; i < counter; i++)
		{
			sum += (copyn % 10) * pow(ns1, i);
			copyn = copyn / 10;
		}
		// std::cout << sum; // �������� ����� �� ��������� � ���������� ������� ���������
		int copysum = sum;
		std::vector<int> v; // ���� ����� ��� ������� ���������, ��������� �� ������. 
		// ������ �� ���� ����� https://academy.yandex.ru/handbook/cpp/article/vectors-and-strings
		// ��� ��� ������������� ����� ��� �������, �� �������� ��������������� ��
		while (copysum > 0)
		{
			v.insert(v.begin(), copysum % ns2);
			copysum = copysum / ns2;
		}
		for (int i = 0; i < v.size(); i++)
		{
			std::cout << "����� ����� ����������� � ��������� ������� ��������� -> " << v[i] << "\n";
		}
	}

	return 0;
}