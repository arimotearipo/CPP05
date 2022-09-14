#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &tocopy);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &toassign);
		~PresidentialPardonForm(void);

		void	execute(Bureaucrat const &executor) const;

	private:
		string _target;
};

#endif