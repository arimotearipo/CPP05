#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "colours.h"
#include "Form.hpp"

using std::string;
using std::exception;
using std::ostream;

class Form;

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
		// These two getters needs to be a const method.
		// Note: A const method is a method that won't change any variable's
		// value in its class.
		// Therefore, in the operator<< overloading function, we pass in a Bueraucrat
		// class type as a parameter and that parameter is set to be a const.
		// If the parameter is set to be a const, that means nothing in the parameter's
		// value shall be changed and if these setters are not a const method, then that means
		// there's a pssibility that these methods might change with the values inside, which
		// will then contradict with nature of the const Bureaucrat parameter in the operator 
		// overloading function
		string	getName(void) const;
		int		getGrade(void) const;

		void	signForm(Form &formtosign) const;
		void	executeForm(Form  const &formtoexe);

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