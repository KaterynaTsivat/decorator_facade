
#include <iostream>
#include "MyList_Decor.h"
//Для класса std::vector<T> реализовать декоратор с методами :
//1) Удаления всех значений(значение принимается, как параметр метода)
//2) Вставки N значения M раз
//
//
//А так же, фасад с методами :
//1) push
//2) remove
//3)[]
int main()
{
	MyList_Decor<int> ml;

	ml.push_back(3);
	ml.push_back(2);
	ml.push_back(1);

	std::cout << "\n Enter the value ";
	std::cin >> ml;

	std::cout << "\n list ";
	std::cout << ml << "\n";

	std::cout << "\n size of list ";
	std::cout << ml.size_list() << "\n";

	std::cout << "\n inserting '1' six times ";
	ml.inserting_values(6, 1);


	std::cout << "\n list ";
	std::cout << ml << "\n";

	std::cout << "\n size of list ";
	std::cout << ml.size_list() << "\n";

	std::cout << "\n deleting all values ";  
	ml.clear_all();

	std::cout << "\n size of list ";
	std::cout << ml.size_list() << "\n";

	
}
