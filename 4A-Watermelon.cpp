#include <iostream>

int	main(){

	int x; 
	std::cin >> x;

	if (x % 2 == 1 || x == 0 || x == 2)
		std::cout << "NO";
	else
		std::cout << "YES";
	return 0;
}
