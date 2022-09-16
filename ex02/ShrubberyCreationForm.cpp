#include "ShrubberyCreationForm.hpp"
#include <fstream>

using std::cout;
using std::endl;
using std::ofstream;

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Untitled", 145, 137), _target("Unknown")
{
	cout << BLU << "[SHRUBBERYCREATIONFORM CLASS CONSTRUCTED]" << RESET << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(string const &target) : Form(target, 145, 137), _target(target)
{
	cout << BLU << "[SHRUBBERYCREATIONFORM CLASS CONSTRUCTED BY PARAMETER]" << RESET << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &tocopy) : Form()
{
	cout << BLU << "[SHRUBBERYCREATIONFORM CLASS CONSTRUCTED BY COPY]" << RESET << endl;
	*this = tocopy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &toassign)
{
	(void)toassign;
	cout << BLU << "[SHRUBBERYCREATIONFORM CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	cout << RED << "[SHRUBBERYCREATIONFORM CLASS DECONSTRUCTED]" << RESET << endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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
	ofstream outfile((this->_target + "_shrubbery.shrub").c_str());

	outfile << "	               ,@@@@@@@," << endl;
	outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << endl;
	outfile << "    ,&\\%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << endl;
	outfile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << endl;
	outfile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << endl;
	outfile << "   %&&%/ %&\\%%&&@@\\ V /@@' `88\\8 `/88'" << endl;
	outfile << "   `&%\\ ` /%&'    |.|        \\ '|8'" << endl;
	outfile << "       |o|        | |         | |" << endl;
	outfile << "       |.|        | |         | |" << endl;
	outfile << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << endl;

	outfile.close();
}