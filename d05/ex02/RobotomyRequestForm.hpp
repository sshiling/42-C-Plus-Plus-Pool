#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <ctime>
# include <cstdlib>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
        
	public:
	    RobotomyRequestForm(void);
	    RobotomyRequestForm(std::string target);
	    RobotomyRequestForm(const RobotomyRequestForm &obj);

	    ~RobotomyRequestForm(void);

	    RobotomyRequestForm     &operator = (const RobotomyRequestForm &);

	    void	execute(const Bureaucrat &executor) const;
};

#endif