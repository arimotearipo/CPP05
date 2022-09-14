#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const &tocopy);
		Intern &operator=(Intern const &toassign);
		~Intern(void);

		Form	*makeForm(string const &formname, string const &target);
};

#endif