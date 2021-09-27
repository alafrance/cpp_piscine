//
// Created by Alexis Lafrance on 26/09/2021.
//

#include "ShrubberyCreationForm.hpp"

/* CANONICAL FORM */
ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("unknown", 0, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target, 0, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) {
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &inst) {
	(void) inst;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	testExecute(executor.getGrade());
	std::cout << "              _{\\ _{\\{\\/}/}/}__" << std::endl;
	std::cout << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
	std::cout << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
	std::cout << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
	std::cout << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
	std::cout << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
	std::cout << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
	std::cout << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
	std::cout << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
	std::cout << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
	std::cout << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
	std::cout << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
	std::cout << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
	std::cout << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
	std::cout << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
	std::cout << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
	std::cout << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
	std::cout << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
	std::cout << "              (_)  \\.-'.-/" << std::endl;
	std::cout << "          __...--- |'-.-'| --...__" << std::endl;
	std::cout << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl;
	std::cout << " -\"    ' .  . '    |.'-._| '  . .  '   alaf" << std::endl;
	std::cout << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
	std::cout << "          ' ..     |'-_.-|" << std::endl;
	std::cout << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
	std::cout << "              .'   |'- .-|   '." << std::endl;
	std::cout << "  ..-'   ' .  '.   `-._.-'   .'  '  - ." << std::endl;
	std::cout << "   .-' '        '-._______.-'     '  ." << std::endl;
	std::cout << "        .      ~," << std::endl;
	std::cout << "    .       .   |\\   .    ' '-." << std::endl;
	std::cout << "    ___________/  \\____________" << std::endl;
	std::cout << "   /  Why is it, when you want \\" << std::endl;
	std::cout << "  |  something, it is so damn   |" << std::endl;
	std::cout << "  |    much work to get it?     |" << std::endl;
	std::cout << "   \\___________________________/" << std::endl;
}
/* ACCESSORS */

/* MAIN */