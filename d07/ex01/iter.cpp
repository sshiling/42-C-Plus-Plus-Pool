#include <iostream>

template< typename T >
void	print_it(T print) {
	std::cout << print << std::endl;
}

template< typename T >
void	iter( T* array, size_t length, void (*f)(T) )
{
	for (size_t i = 0; i < length; i++)
			f(array[i]);
}

int	main()
{
	std::string str[] = { "alliance", "union", "hive", "empire" };
	int num[] = { 42, 21, 12, 6, 123};


	iter(num, 5, print_it);
	iter(str, 4, print_it);

	return 0;
}