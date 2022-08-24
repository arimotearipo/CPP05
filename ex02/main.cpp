#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

using std::cout;
using std::endl;

int	main(void)
{
	Bureaucrat a("Yo", 100);
	Form b("B", 75, 75);
	Form c("C", 125, 125);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	a.signForm(b);
	a.signForm(c);
	return (0);
}