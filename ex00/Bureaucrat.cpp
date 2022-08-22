#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

Bureaucrat::Bureaucrat(void)
{
	cout << BLU << "[BUREAUCRAT CLASS CONSTRUCTED]" << RESET << endl;
}

Bureaucrat::Bureaucrat(string name, int grade)
{
	cout << BLU << "[BUREAUCRAT CLASS CONSTRUCTED BY PARAMETERS]" << RESET << endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &tocopy)
{
	cout << BLU << "[BUREAUCRAT CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &toassign)
{
	cout << BLU << "[BUREAUCRAT CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
}

Bureaucrat::~Bureaucrat(void)
{
	cout << RED << "[BUREAUCRAT CLASS DECONSTRUCTED]" << RESET << endl;
}

//getter
string	Bureaucrat::getName(void)
{
	return (this->_name);
}

int		Bureaucrat::getGrade(void)
{
	return (this->_grade);
}

void	Bureaucrat::decrementGrade(void)
{
	this->_grade += 1;
}

void	Bureaucrat::decrementGrade(void)
{
	this->_grade -= 1;
}