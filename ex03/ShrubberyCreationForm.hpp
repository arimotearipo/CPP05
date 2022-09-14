#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &tocopy);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &toassign);
		~ShrubberyCreationForm(void);

		void	execute(Bureaucrat const &executor) const;

	private:
		string	_target;

};

#endif