#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

using std::cout;
using std::endl;

int	main(void)
{
	cout << UWHT "Instantiating a Bureaucrat a..." RESET << endl;
	Bureaucrat a("Yo", 100);
	cout << endl;

	cout << UWHT "Instantiating Form b..." RESET << endl;
	Form b("B", 75, 75);
	cout << endl;

	cout << UWHT "Instantiating Form c..." RESET << endl;
	Form c("C", 125, 125);
	cout << endl;

	cout << UWHT "Printing Bureaucrat a..." RESET << endl;
	cout << a << endl;
	cout << endl;

	cout << UWHT "Printing Form b..." RESET << endl;
	cout << b << endl;
	cout << endl;

	cout << UWHT "Printing Form c..." RESET << endl;
	cout << c << endl;
	cout << endl;

	cout << UWHT "Bureaucrat a is signing Form b..." RESET << endl;
	a.signForm(b);
	cout << endl;

	cout << UWHT "Bureaucrat b is signing Form c..." RESET << endl;
	a.signForm(c);
	cout << endl;

	return (0);
}