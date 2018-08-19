
#include "Pony.hpp"

void	ponyOnTheHeap(std::string name, std::string color) {
	Pony *newPony;
	newPony = new Pony(name, color);
	newPony->say_hi();
	delete newPony;
	return ;
}

void	ponyOnTheStack(std::string name, std::string color) {
	Pony newPony(name, color);
	newPony.say_hi();
	return ;
}

int		main(void) {
	ponyOnTheHeap("on_the_heap", "white");
	ponyOnTheStack("on_the_stack", "black");
	return (0);
}