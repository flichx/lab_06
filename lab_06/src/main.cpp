/*������� ����� � �������� ��������� ���������� ����������� ����������� �� �������� � ������������������ �������*/
#include <iostream>
#include "include/phoneDirectory.h"

int main() {
	setlocale(LC_ALL, "ru");

	phoneDirectory ph;

	ph.print();
	ph.selectionSort();
	ph.print();

	return 0;
}