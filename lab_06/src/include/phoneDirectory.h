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

	char ALF[29] = { 'À', 'Á', 'Â', 'Ã', 'Ä', 'Å', 'Æ', 'Ç', 'È', 'É', 'Ë', 'Ë', 'Ì', 'Í', 'Î', 'Ï', 'Ð', 'Ñ', 'Ò', 'Ó', 'Ô', 'Õ', 'Ö', '×',
					'Ø', 'Ù', 'Ý', 'Þ', 'ß' };
	char alf[33] = { 'à', 'á', 'â', 'ã', 'ä', 'å', '¸', 'æ', 'ç', 'è', 'é', 'ê', 'ë', 'ì', 'í', 'î', 'ï', 'ð', 'ñ', 'ò', 'ó', 'ô', 'õ', 'ö', '÷',
					'ø', 'ù', 'ú', 'û', 'ü', 'ý', 'þ', 'ÿ' };
	std::string num = "0123456789";
};