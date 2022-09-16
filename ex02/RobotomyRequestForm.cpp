#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Untitled", 72, 45), _target("Unknown")
{
	cout << BLU << "[ROBOTOMYREQUESTFORM CLASS CONSTRUCTED]" << RESET << endl;
}

RobotomyRequestForm::RobotomyRequestForm(string const &target) : Form(target, 72, 45), _target(target)
{
	cout << BLU << "[ROBOTOMYREQUESTFORM CLASS CONSTRUCTED BY PARAMETER]" << RESET << endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &tocopy) : Form()
{
	cout << BLU << "[ROBOTOMYREQUESTFORM CLASS CONSTRUCTED BY COPY]" << RESET << endl;
	*this = tocopy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &toassign)
{
	(void)toassign;
	cout << BLU << "[ROBOTOMYREQUESTFORM CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	cout << RED << "[ROBOTOMYREQUESTFORM CLASS DECONSTRUCTED]" << RESET << endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
	{
		// need to do exceptions
		// need to do exceptions
		// need to do exceptions
		// need to do exceptions
		// need to do exceptions
		// need to do exceptions
		throw GradeTooLowException();
	}
	else if (this->getSignedStatus() == false)
		throw UnsignedFormException();
	int result;
	srand(time(NULL));
	result = rand() % 2;
	cout << BWHT << "* Bzztt bzztt.... *" << RESET << endl;
	cout << BWHT << "* Beep boop beep.... *" << RESET << endl;
	cout << BWHT << "* .... *" << RESET << endl;
	cout << "and the result is...";
	for (int i = 0; i < 4; i++)
	{
		cout << "..." << endl;
		usleep(500000);
	}
	sleep(1);
	if (result == 1)
		cout << "SUCCESS! " << this->_target << " has turned into a robot!" << endl;
	else
		cout << "FAIL! :( " << this->_target << " remains a human." << endl;
}