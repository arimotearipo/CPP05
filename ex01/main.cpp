#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

using std::string;
using std::cerr;
using std::cout;
using std::endl;

int	main(int ac, char **av)
{
	if (ac != 5)
	{
		cout << "./bureaucrat [formname] [gradetosign] [gradetoexec] [bureaucrat's grade]" << endl;
		return (1);
	}

	string	formname = string(av[1]);
	int		gradetosign = atoi(av[2]);
	int		gradetoexec = atoi(av[3]);
	cout << UWHT "Instantiating form named " << formname << " with grade to sign: " << gradetosign << "and grade to execute: " << gradetoexec << "..." RESET << endl;
	try
	{
		Form a(formname, gradetosign, gradetoexec);
	}
	catch (std::exception const &e)
	{
		cerr << "Caught an error: " << e.what() << endl;
	}

	Form a(formname, gradetosign, gradetoexec); // must redeclare because the object doesn't go pass the try block
	cout << endl;

	int		bureaugrade = atoi(av[4]);
	cout << UWHT << "Instantiating a Bureaucrat named XXX with grade " << bureaugrade << "..." RESET << endl;
	try
	{
		Bureaucrat b("XXX", bureaugrade);
	}
	catch(const std::exception& e)
	{
		cerr << "Caught an error: " << e.what() << endl;
	}
	cout << endl;

	Bureaucrat b("XXX", bureaugrade); // must redeclare because the object doesn't go pass the try block
	cout << endl;

	cout << UWHT << "Trying to make the Bureaucrat to sign the form..." RESET << endl;
	try
	{
		b.signForm(a);
	}
	catch(const std::exception& e)
	{
		cerr << "Caught an error: " << e.what() << '\n';
	}
	cout << endl;
	
	cout << UWHT "Ending programme..." RESET << endl;
	return (0);
}