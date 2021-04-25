#include <iostream>

int main()
{
	int Input;

	do
	{
		std::cout << "1" << std::endl;
		std::cout << "2" << std::endl;
		std::cout << "3" << std::endl;
		std::cin >> Input;
	} while (Input <= 0 || Input >= 3);

	std::cout << "ok" << std::endl;

	return 0;

}


