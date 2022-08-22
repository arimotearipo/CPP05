#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "colours.h"

using std::string;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(string name, int grade);
		Bureaucrat(Bureaucrat const &tocopy);
		Bureaucrat &operator=(Bureaucrat const &toassign);
		~Bureaucrat(void);

		//increment and decrement
		void	decrementGrade(void);
		void	incrementGrade(void);

		//getters
		string	getName(void);
		int		getGrade(void);

		try
		{
			bool	checkGrade(void);
			throw	GradeTooHighException(void);
			throw	GradeTooLowException(void);
		}
		catch
		{
			
		}

	private:
		string	const	_name;
		int				_grade;
};

#endif