#include "PresidentialPardonForm.hpp"

using std::cout;
using std::endl;

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Untitled", 25, 5), _target("Unknown")
{
	cout << BLU << "[PRESIDENTIALPARDONFORM CLASS CONSTRUCTED]" << RESET << endl;
}

PresidentialPardonForm::PresidentialPardonForm(string const &target) : Form(target, 25, 5), _target(target)
{
	cout << BLU << "[PRESIDENTIALPARDONFORM CLASS CONSTRUCTED BY PARAMETER]" << RESET << endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &tocopy)
{
	cout << BLU << "[PRESIDENTIALPARDONFORM CLASS CONSTRUCTED BY COPY]" << RESET << endl;
	*this = tocopy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &toassign)
{
	(void)toassign;
	cout << BLU << "[PRESIDENTIALPARDONFORM CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	cout << RED << "[PRESIDENTIALPARDONFORM CLASS DECONSTRUCTED]" << RESET << endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExec() || this->getSignedStatus() == false)
	{
		// need to do exceptions
		// need to do exceptions
		// need to do exceptions
		// need to do exceptions
		// need to do exceptions
		// need to do exceptions
		return ;
	}
	cout << BWHT << this->_target << " has been pardoned by Zaphod Beeblebrox" << RESET << endl;
}