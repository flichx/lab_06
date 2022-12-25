#pragma once

#include <iostream>

class phoneDirectory {
public:
	phoneDirectory();
	~phoneDirectory();

	void print();
	void selectionSort();

private:
	class node {
	public:
		std::string phone;
		std::string name;
	};

	node* data_;
	int size_;

	char ALF[29] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
					'�', '�', '�', '�', '�' };
	char alf[33] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�',
					'�', '�', '�', '�', '�', '�', '�', '�' };
	std::string num = "0123456789";
};