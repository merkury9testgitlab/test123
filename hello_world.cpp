#include <iostream>

int main() {
	// Имя.
	std::string name;
	
	// Ввод имени.
	std::cout << "Name ->";
	std::cin >> name;
	
	// Вывод результата.
	std::cout << "Hello world from @" << name << std::endl;
		
	return 0;
}

