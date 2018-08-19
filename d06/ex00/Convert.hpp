#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <stdexcept>
#include <exception>
#include <iomanip>
#include <string>

class	Convert {
	private:
		std::string _str;
		int			_int;
		double		_double;
		float		_float;	

	public:
		Convert(void);
		Convert(std::string const num);
		Convert(Convert const & tmp);
		~Convert(void);
		
		Convert &	operator = (Convert const &);

		void 	toChar(void);
		void 	toInt(void);
		void 	toDouble(void);
		void 	toFloat(void);

		char 	getChar(void);
		int 	getInt(void);
		double 	getDouble(void);
		float 	getFloat(void);		

		class	NotPrintableExp : std::exception {
			public:
				NotPrintableExp();
				NotPrintableExp(NotPrintableExp const & tmp);
				~NotPrintableExp() throw();

				NotPrintableExp &	operator = (NotPrintableExp const & tmp);

				virtual	const char * what() const throw();
		};

		class	ImposibleExp : std::exception {
			public:
				ImposibleExp();
				ImposibleExp(ImposibleExp const & tmp);
				~ImposibleExp() throw();

				ImposibleExp &	operator = (ImposibleExp const & tmp);

				virtual	const char * what() const throw();
		};
};

#endif
