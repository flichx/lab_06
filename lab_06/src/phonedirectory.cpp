#include "include/phoneDirectory.h"
#include <ctime>

phoneDirectory::phoneDirectory() {
	std::cout << "Введите количесво записей в справочнике: ";
	std::cin >> size_;
	std::cout << "\n";
	data_ = new node[size_];

	srand(time(0));
	for (int i = 0; i < size_; ++i) {
		int size = 3 + rand() % 5 - 1;
		std::string word;

		word += ALF[rand() % 29];
		for (int j = 0; j < size; ++j) {
			word += alf[rand() % 33];
		}
		data_[i].name = word;
		
		size = 5;
		word = {};
		for (int j = 0; j < size; ++j) {
			word += num[rand() % num.length()];
		}
		data_[i].phone = word;
	}
}
phoneDirectory::~phoneDirectory() {
	if (data_) {
		delete[] data_;
	}
}

void phoneDirectory::print() {
	for (int i = 0; i < size_; ++i) {
		printf("[%2i]: %8s %8s\n", i, data_[i].name.c_str(), data_[i].phone.c_str());
	}
	std::cout << std::endl;
}

void phoneDirectory::selectionSort() {
	int min;
	
	for (int i = 0; i < size_ - 1; ++i) {
		min = i;
		for (int j = i + 1; j < size_; ++j) {
			if (data_[j].name < data_[min].name) min = j;
		}
		std::string temp = data_[i].name;
		data_[i].name = data_[min].name;
		data_[min].name = temp;
	}
}