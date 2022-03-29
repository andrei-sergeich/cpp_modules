#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default ShrubberyCreationForm", 145, 137),
												 _target("Default ShrubberyCreationForm") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationFrom", 145, 137),
																		  _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form (other), _target(other._target) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		this->_target = other._target;
	return *this;
}

const std::string&	ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void				ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);

	std::ofstream	outfile;
	outfile.open((_target + "_shruberry").c_str());

	if (outfile.fail())
	{
		std::cout << "Couldn't open outfile" << std::endl;
		return ;
	}
	std::cout << "File " << GREEN << _target << "_shrubbery " << RESET
			  << "has been created" << std::endl;
	outfile << "\n \
                                              .         ;\n\
                 .              .              ;%     ;;\n\
                   ,           ,                :;%  %;\n\
                    :         ;                   :;%;'     .,\n\
           ,.        %;     %;            ;        %;'    ,;\n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
               ;%;      %;        ;%;        % ;%;  ,%;'\n\
                `%;.     ;%;     %;'         `;%%;.%;'\n\
                 `:;%.    ;%%. %@;        %; ;@%;%'\n\
                    `:%;.  :;bd%;          %;@%;'\n\
                      `@%:.  :;%.         ;@@%;'\n\
                        `@%.  `;@%.      ;@@%;\n\
                          `@%%. `@%%    ;@@%;\n\
                            ;@%. :@%%  %@@%;\n\
                              %@bd%%%bd%%:;\n\
                                #@%%%%%:;;\n\
                                %@@%%%::;\n\
                                %@@@%(o);  . '\n\
                                %@@@o%;:(.,'\n\
                            `.. %@@@o%::;\n\
                               `)@@@o%::;\n\
                                %@@(o)::;\n\
                               .%@@@@%::;\n\
                               ;%@@@@%::;.\n\
                              ;%@@@@%%:;;;.\n\
                          ...;%@@@@@%%:;;;;,..\n";
	outfile.close();
}

std::ostream&		operator<<(std::ostream& out, ShrubberyCreationForm const& form)
{
	out << "This is ShrubberyCreationFrom and its target is ";
	out << form.getTarget();
	return out;
}
