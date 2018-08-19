#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
        
	public:
	    PresidentialPardonForm(void);
	    PresidentialPardonForm(std::string target);
	    PresidentialPardonForm(const PresidentialPardonForm &obj);

	    ~PresidentialPardonForm(void);

	    PresidentialPardonForm  &operator = (const PresidentialPardonForm &);

	    void	execute(const Bureaucrat &executor) const;
};

#endif