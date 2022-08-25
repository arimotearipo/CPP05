#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

using std::cout;
using std::endl;

int	main(void)
{
	// Bureaucrat a("Biro", 1);
	// RobotomyRequestForm b("Victim");

	// a.signForm(b);
	// a.executeForm(b);

	Bureaucrat biro("Biro", 150);
	ShrubberyCreationForm shrub("Home");

	biro.signForm(shrub);
	// biro.executeForm(shrub);
	return (0);
}