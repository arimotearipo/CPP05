#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>

using std::cout;
using std::endl;

/*
Forms index: [0] Shrubbery [1] Robotomy [2] Presidential

Form name:                shrubbery creation
Grade required to sign:   145
Grade required to execute:137

Form name:                robotomy request
Grade required to sign:   72
Grade required to execute:45

Form name:                presidential pardon
Grade required to sign:   25
Grade required to execute:5
*/
int	main(int ac, char **av)
{
	if (ac != 4)
	{
		cout << "Forms index: [0] Shrubbery [1] Robotomy [2] Presidential" << endl;
		cout << "To test: ./bureaucrat [Grade of signee bureaucrat] [Grade of executor bureaucrat] [Index of form to be created]" << endl;
		return (1);
	}
	int grade1 = atoi(av[1]); // change this value to change the grade of the Bureaucrat at creation
	string name1 = "Signee";
	cout << UWHT "Instantiating signee Bureaucrat named " << name1 << " with grade " << grade1 << "..." RESET << endl;
	Bureaucrat a(name1, grade1);
	cout << endl;

	int	grade2 = atoi(av[2]);
	string name2 = "Executor";
	cout << UWHT "Instantiating executor Bureacrat named " << name2 << name2 << " with grade " << grade2 << "..." RESET << endl;
	Bureaucrat b(name2, grade2);
	cout << endl;


	string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	cout << UWHT "Instantiating an Intern object..." RESET << endl;
	Intern c;
	cout << endl;

	int formindex = atoi(av[3]); // change this value to change form to be made
	cout << UWHT "Intern making form..." << RESET << endl;
	Form *d = c.makeForm(forms[formindex], forms[formindex]);
	cout << endl;

	cout << UWHT "Printing form details..." RESET << endl;
	cout << *d << endl;

	cout << UWHT "Printing the bureaucrats' details..." RESET << endl;
	cout << a << endl << b << endl << endl;

	cout << UWHT "Signee Bureaucrat will try to sign form " << forms[formindex] << "..." RESET << endl;
	a.signForm(*d);
	cout << endl;

	cout << UWHT "Executor Bureaucrat will try to execute form " << forms[formindex] << "..." RESET << endl;
	b.executeForm(*d);
	cout << endl;
	
	cout << UWHT "Ending programme..." RESET << endl;
	return (0);
}