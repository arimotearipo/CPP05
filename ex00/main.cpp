#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

int	main(void)
{
	Bureaucrat a("One", 140);
	for (int i = 0; i < 11; i++)
		a.incrementGrade();
	// Bureaucrat b("Two", 160);
	cout << a << endl;
	return (0);
}