#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
        
	public:
	    ShrubberyCreationForm(void);
	    ShrubberyCreationForm(std::string target);
	    ShrubberyCreationForm(const ShrubberyCreationForm &obj);

	    ~ShrubberyCreationForm(void);

	    ShrubberyCreationForm   &operator = (const ShrubberyCreationForm &);

	    void	execute(const Bureaucrat &executor) const;
};

#endif