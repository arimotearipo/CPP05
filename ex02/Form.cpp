#include "Form.hpp"
#include <iomanip>

using std::cout;
using std::endl;
using std::ostream;

// Orthodox Canonical Form shit
Form::Form(void) : _name("unknown form"), _signed_status(false), _grade_to_sign(150), _grade_to_exec(150)
{
	cout << BLU << "[FORM CLASS CONSTRUCTED]" << RESET << endl;
}

Form::Form(string const &name, int gradetosign, int gradetoexec) : _name(name), _signed_status(false), _grade_to_sign(gradetosign), _grade_to_exec(gradetoexec)
{
	cout << BLU << "[FORM CLASS CONSTRUCTED BY PARAMETER]" << RESET << endl;
}

Form::Form(Form const &tocopy) : _name(tocopy.getName()), _signed_status(tocopy.getSignedStatus()), _grade_to_sign(tocopy.getGradeToSign()), _grade_to_exec(tocopy.getGradeToExec())
{
	cout << BLU << "[FORM CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

Form	&Form::operator=(Form const &toassign)
{
	*this = toassign;
	cout << BLU << "[FORM CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

Form::~Form(void)
{
	cout << RED << "[FORM CLASS DECONSTRUCTED]" << RESET << endl;
}

// Exceptions

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high\n");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low\n");
}

string const	&Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSignedStatus(void) const
{
	return (this->_signed_status);
}

int		Form::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

int		Form::getGradeToExec(void) const
{
	return (this->_grade_to_exec);
}

void	Form::beSigned(Bureaucrat const &tosign)
{
	if (tosign.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	else
		_signed_status = true;
}

// Operator overload

ostream &operator<<(ostream &OSTREAM, Form const &form)
{
	OSTREAM << YEL << std::left << std::setw(26) << "Form name: " << BYEL << form.getName() << endl;
	OSTREAM << YEL << std::left << std::setw(26) << "Signed status: " << BYEL << form.getSignedStatus() << endl;
	OSTREAM << YEL << std::left << std::setw(26) << "Grade required to sign: " << BYEL << form.getGradeToSign() << endl;
	OSTREAM << YEL << std::left << std::setw(26) << "Grade required to execute:" << BYEL << form.getGradeToExec() << endl;
	return (OSTREAM);
}