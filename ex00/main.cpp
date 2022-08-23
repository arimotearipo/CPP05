#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

int	main(void)
{
	Bureaucrat a;
	cout << "Initialized" << endl << a << endl;
	for (int i = 0; i < 10; i++)
		a.incrementGrade();
	// Bureaucrat b("Two", 160);
	cout << a << endl;
	return (0);
}