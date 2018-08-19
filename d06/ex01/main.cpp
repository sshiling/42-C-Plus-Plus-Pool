#include "header.h"

void	*serialize(void)
{
	Cpy *date = new Cpy;

	for (int i = 0; i < 8; i++)
		while(!isalnum(date->s1[i]))
			date->s1[i] = static_cast<char>((rand() % 66) + 42);
	date->s1[8] = '\0';
	for (int i = 0; i < 8; i++)
		while(!isalnum(date->s2[i]))
			date->s2[i] = static_cast<char>((rand() % 66) + 42);
	date->s2[8] = '\0';
	date->n = rand();
	return (reinterpret_cast<void *>(date));
}

Data	*deserialize(void *ptr)
{
	Cpy			*cpy;
	Data		*date = new Data;

	cpy = reinterpret_cast<Cpy *>(ptr);
	date->s1 = static_cast<std::string>(cpy->s1);
	date->s2 = static_cast<std::string>(cpy->s2);
	date->n = cpy->n;
	return (date);
}

int		main()
{
	void 	*tmp;
	Data 	*ptr;
	
	srand(time(NULL));
	tmp = serialize();
	ptr = deserialize(tmp);
	std::cout << ptr->s1 << std::endl;
	std::cout << ptr->n << std::endl;
	std::cout << ptr->s2 << std::endl;
	return (0);
}
