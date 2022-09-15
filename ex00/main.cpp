#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

int	main(void)
{
	cout << UWHT << "Instantianting a Bureaucrat object..." RESET << endl;
	Bureaucrat a;
	cout << endl;

	cout << UWHT "Printing the Bureaucrat details..." RESET << endl;
	cout << a << endl;
	cout << endl;

	int x = 100; // change this value to decrement
	cout << UWHT "Decrementing grade " << x << " times..." RESET << endl;
	for (int i = 0; i < x; i++)
		a.decrementGrade();
	cout << endl;

	cout << UWHT "Printing Bureaucrat details..." RESET << endl;
	cout << a << endl;
	cout << endl;

	int y = 101; // change this value to increment
	cout << UWHT "Incrementing grade " << y << " times..." RESET << endl;
	for (int i = 0; i < y; i++)
		a.incrementGrade();
	cout << endl;

	cout << UWHT "Printing Bureaucrat details..." RESET << endl;
	cout << a << endl;
	cout << endl;

	return (0);
}