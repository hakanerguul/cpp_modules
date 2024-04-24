#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->target = other.target;
	return(*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    	if (this->getSigned() == false)
		throw Bureaucrat::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::string filename = this->target + "_shrubbery";
		std::ofstream ofs(filename);
ofs << "               _{\\ _{\\{\\/}/}/}__" << std::endl;
ofs << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
ofs << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
ofs << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
ofs << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
ofs << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
ofs << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
ofs << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
ofs << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
ofs << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
ofs << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
ofs << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
ofs << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
ofs << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
ofs << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
ofs << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
ofs << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
ofs << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
ofs << "              (_)  \\.-'.-/" << std::endl;
ofs << "          __...--- |'-.-'| --...__" << std::endl;
ofs << "   _...--    .-'   |'-.-'|  ' -.  ""--..__" << std::endl;
ofs << " -     ' .  . '    |.'-._| '  . .  '   jro" << std::endl;
ofs << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
ofs << "          ' ..     |'-_.-|" << std::endl;
ofs << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
ofs << "              .'   |'- .-|   '." << std::endl;
ofs << "  ..-'   ' .  '.   `-._.-�   .'  '  - ." << std::endl;
ofs << "   .-' '        '-._______.-'     '  ." << std::endl;
ofs << "        .      ~," << std::endl;
ofs << "    .       .   |\\   .    ' '-." << std::endl;
ofs << "    ___________/  \\____________" << std::endl;
ofs << "   /  Why is it, when you want \\ " << std::endl;
ofs << "  |  something, it is so damn   |" << std::endl;
ofs << "  |    much work to get it?     |" << std::endl;
ofs << "   \\___________________________/" << std::endl;
  }
}