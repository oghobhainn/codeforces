#include <iostream>
#include <string>

int main(){

	int nb; std::cin >> nb;
	std::string str;
	while (nb > 0){
		std::cin >> str;
		if (str.length() > 10){
			std::cout << str.at(0) << str.length() - 2 << str.at(str.length() - 1) << "\n";
		}
		else
			std::cout << str << "\n";
		nb--;
	}
	return 0;
}
