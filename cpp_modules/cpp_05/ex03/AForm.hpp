#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	protected:
		const std::string	name;
		bool				_signed;
		const int			gradeToSign;
		const int			gradeToExecute;
	public:
		AForm(void);
		AForm(const std::string &name, const int gradeToSign, const int gradeToExecute);
		virtual ~AForm(void);
		AForm(AForm const &src);
		AForm &operator=(AForm const &rhs);

		std::string const	&getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;

		void				beSigned(Bureaucrat const &bureaucrat);
		virtual void		execute(Bureaucrat const &executor) const = 0;
};

#endif