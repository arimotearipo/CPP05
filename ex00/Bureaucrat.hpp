#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "colours.h"

using std::string;
using std::exception;
using std::ostream;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(string const &name, int grade);
		Bureaucrat(Bureaucrat const &tocopy);
		Bureaucrat &operator=(Bureaucrat const &toassign);
		~Bureaucrat(void);

		//increment and decrement
		void	decrementGrade(void);
		void	incrementGrade(void);

		//getters
		// Need to make these two methods a const method because calling it
		// in the operator << overloading function will not work.
		// Still figuring out why
		string	getName(void) const;
		int		getGrade(void) const;

		// exception classes
		class GradeTooHighException : public exception
		{
			public:
				virtual const char *what(void) const throw();
		};

		class GradeTooLowException : public exception
		{
			public:
				virtual const char *what(void) const throw();
		};

	private:
		string	const	_name;
		int				_grade;
};

ostream	&operator<<(ostream &OSTREAM, Bureaucrat const &toprint);

#endif