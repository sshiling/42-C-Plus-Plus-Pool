#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("none", "ShrubberyCreationForm", 145, 137) {
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, "ShrubberyCreationForm", 145, 137) {
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj) {
    return ;
};

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    return ;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &){
    return (*this);
};

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    std::ofstream  holy_file;

    Form::execute(executor);
    holy_file.open(getTarget() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
    if (holy_file.fail()) {
        std::cerr << "Error openning the outfile" << std::endl;
    }
    holy_file << "                                                 .        " << std::endl;
    holy_file << "                                      .         ;         " << std::endl;
    holy_file << "         .              .              ;%     ;;          " << std::endl;
    holy_file << "           ,           ,                :;%  %;           " << std::endl;
    holy_file << "            :         ;                   :;%;'     .,    " << std::endl;
    holy_file << "   ,.        %;     %;            ;        %;'    ,;      " << std::endl;
    holy_file << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'       " << std::endl;
    holy_file << "      %;       %;%;      ,  ;       %;  ;%;   ,%;'        " << std::endl;
    holy_file << "       ;%;      %;        ;%;        % ;%;  ,%;'          " << std::endl;
    holy_file << "        `%;.     ;%;     %;'         `;%%;.%;'            " << std::endl;
    holy_file << "         `:;%.    ;%%. %@;        %; ;@%;%'               " << std::endl;
    holy_file << "            `:%;.  :;bd%;          %;@%;'                 " << std::endl;
    holy_file << "              `@%:.  :;%.         ;@@%;'                  " << std::endl;
    holy_file << "                `@%.  `;@%.      ;@@%;                    " << std::endl;
    holy_file << "                  `@%%. `@%%    ;@@%;                     " << std::endl;
    holy_file << "                    ;@%. :@%%  %@@%;                      " << std::endl;
    holy_file << "                      %@bd%%%bd%%:;                       " << std::endl;
    holy_file << "                        #@%%%%%:;;                        " << std::endl;
    holy_file << "                        %@@%%%::;                         " << std::endl;
    holy_file << "                        %@@@%(o);  . '                    " << std::endl;        
    holy_file << "                        %@@@o%;:(.,'                      " << std::endl;
    holy_file << "                    `.. %@@@o%::;                         " << std::endl;
    holy_file << "                       `)@@@o%::;                         " << std::endl;
    holy_file << "                        %@@(o)::;                         " << std::endl;
    holy_file << "                       .%@@@@%::;                         " << std::endl;
    holy_file << "                       ;%@@@@%::;.                        " << std::endl;
    holy_file << "                      ;%@@@@%%:;;;.                       " << std::endl;
    holy_file << "                  ...;%@@@@@%%:;;;;,..                    " << std::endl;

    holy_file.close();
};