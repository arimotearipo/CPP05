#include "Intern.hpp"

using std::cout;
using std::endl;
using std::string;

Intern::Intern(void)
{
	cout << BLU << "[INTERN CLASS CONSTRUCTED]" << RESET << endl;
}

Intern::Intern(Intern const &tocopy)
{
	*this = tocopy;
	cout << BLU << "[INTERN CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

Intern &Intern::operator=(Intern const &toassign)
{
	(void)toassign;
	cout << BLU << "[INTERN CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

Intern::~Intern(void)
{
	cout << RED << "[INTERN CLASS DECONSTRUCTED]" << RESET << endl;
}

static void strtolower(string &s)
{
	for (long unsigned int i = 0; i < s.size() ; i++)
	{
		if (isupper(s[i]) > 0)
			s[i] -= 32;
	}
}

static Form	*newShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static Form	*newRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*newPresidential(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(string const &form, string const &target)
{
	string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	string	formname(form); //this is to copy the parameter passed to a new variable
	Form*	(*functionarray[3])(string) = {&newShrubbery, &newRobotomy, &newPresidential};

	strtolower(formname); // the copy of the parameter will be converted to lower and this variable will be used for comparing purposes
	int f = -1;
	for (int i = 0; i < 3; i++)
	{
		if (formname == forms[i])
		{
			f = i;
			break ;
		}
	}
	if (f >= 0 && f < 3)
	{
		cout << "The intern makes a " << forms[f] << " form" << endl;
		return (functionarray[f](target));
	}
	else
	{
		cout << "Unknown form requested: " << form << endl;
		return (NULL);
	}

}