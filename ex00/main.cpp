#include "Bureaucrat.hpp"

using std::cerr;
using std::cout;
using std::endl;

int	main(int ac, char ** av)
{
	if (ac != 4)
	{
		cout << "./bureaucrat [value to decrement] [value to increment] [value to set]" << endl;
		return (1);
	}

	cout << UWHT << "Instantianting a Bureaucrat object..." RESET << endl;
	Bureaucrat a;
	cout << endl;

	cout << UWHT "Printing the Bureaucrat details..." RESET << endl;
	cout << a << endl;
	cout << endl;

	int x = atoi(av[1]); // change this value to decrement
	cout << UWHT "Trying to decrement grade " << x << " times..." RESET << endl;
	try
	{
		for (int i = 0; i < x; i++)
			a.decrementGrade();
		cout << "Decrementing process is successful" << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught an error: " << e.what() << endl;
	}
	cout << endl;

	cout << UWHT "Printing Bureaucrat details..." RESET << endl;
	cout << a << endl;
	cout << endl;

	int y = atoi(av[2]); // change this value to increment
	cout << UWHT "Trying to increment grade " << y << " times..." RESET << endl;
	try
	{
		for (int i = 0; i < y; i++)
			a.incrementGrade();
		cout << "Incrementing process is successful" << endl;
	}
	catch (std::exception const &e)
	{
		cerr << "Caught an error: " << e.what() << endl;
	}
	cout << endl;

	cout << UWHT "Printing Bureaucrat details..." RESET << endl;
	cout << a << endl;
	cout << endl;

	int z = atoi(av[3]); // change this value to set
	cout << UWHT "Trying to instantiate a Bureaucrat with grade " << z <<  "..." RESET << endl;
	try
	{
		Bureaucrat b("Sir", z);
	}
	catch (std::exception const &e)
	{
		cerr << "Caught an error: " << e.what() << endl;
	}

	return (0);
}