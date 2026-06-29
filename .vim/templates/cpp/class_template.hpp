#ifndef	TEMPLATE_CLASS_HPP
# define TEMPLATE_CLASS_HPP

# include <iostream>

class	Template
{
	private:
	public:
		Template(void);
		Template(const Template &cpy);
		~Template(void);
		Template	&operator=(const Template &src);
};

#endif
