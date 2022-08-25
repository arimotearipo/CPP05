#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <unistd.h>
#include <time.h>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &tocopy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &toassign);
		~RobotomyRequestForm(void);

		void	execute(Bureaucrat const &executor) const;

	private:
		string _target;
};

#endif