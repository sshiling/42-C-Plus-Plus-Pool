
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class	Bureaucrat {
	private:
		std::string const _name;
		int      	      _grade; 

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & obj);
		~Bureaucrat(void);

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const & obj);
				~GradeTooHighException(void) throw();

				GradeTooHighException &		operator = (GradeTooHighException const &);

				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const & obj);
				~GradeTooLowException(void) throw();

				GradeTooLowException &		operator = (GradeTooLowException const &);
				
				const char* what() const throw();
		};

		Bureaucrat & operator=(Bureaucrat const & obj);

		void                      setGrade(int grade);

	    int                       getGrade(void) const;
	    std::string               getName(void) const;

	    void                      incrementGrade(void);
	    void                      decrementGrade(void);
};

std::ostream & operator << (std::ostream &, Bureaucrat const &);

#endif