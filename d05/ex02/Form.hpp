#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class   Bureaucrat;

class Form {
    private:
        std::string          _target;
        std::string const    _name;
        bool                 _signed;
        int const            _grade_to_sign;
        int const            _grade_to_execute;

    public:
        Form(void);
        Form(std::string name);
        Form(std::string name, int grade_to_sign, int grade_to_execute);
        Form(std::string target, std::string name, int grade_to_sign, int grade_to_execute);
        Form(const Form &obj);
        ~Form(void);

        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException(void);
                GradeTooHighException(const GradeTooHighException &obj);
                ~GradeTooHighException(void) throw();

                GradeTooHighException &operator = (const GradeTooHighException &);

                const char    *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException(void);
                GradeTooLowException(const GradeTooLowException &obj);
                ~GradeTooLowException(void) throw();

                GradeTooLowException  &operator = (const GradeTooLowException &);

                const char    *what() const throw();
        };

        class NotSignedException : public std::exception
        {
            public:
                NotSignedException(void);
                NotSignedException(const NotSignedException &obj);

                virtual ~NotSignedException(void) throw();

                NotSignedException    &operator = (const NotSignedException &);

                virtual const char    *what(void) const throw();
        };

        Form             &operator = (const Form &obj);

        std::string      getTarget(void) const;
        std::string      getName(void) const;
        bool             getSigned(void) const;
        int              getGradeToSign(void) const;
        int              getGradeToExecute(void) const;

        void             setTarget(std::string);
        void             setSigned(bool);      

        void             beSigned(Bureaucrat &bureaucrat);

        void             execute(Bureaucrat const &executor) const;
};

std::ostream             &operator << (std::ostream &stream, Form const &);

#endif