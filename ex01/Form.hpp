#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

using std::string;
using std::exception;
using std::ostream;

class Form
{
	public:
		// Orthodox Canonical Form shit
		Form(void);
		Form(string const &name, int gradetosign, int gradetoexec);
		Form(Form const &tocopy);
		Form	&operator=(Form const &toassign);
		~Form(void);

		// Exceptions
		class	GradeTooHighException : public exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class	GradeTooLowException : public exception
		{
			public:
				virtual const char *what(void) const throw();
		};

		// Getters
		string const 	&getName(void) const;
		bool			getSignedStatus(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExec(void) const;
		// Getters end

		void			beSigned(Bureaucrat const &tosign);

	private:
		string const	_name;
		bool			_signed_status;
		int const		_grade_to_sign;
		int	const		_grade_to_exec;

};

ostream &operator<<(ostream &OSTREAM, Form const &form);

#endif