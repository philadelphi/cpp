#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_rawBits;
		const static int	_fBits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &cpy);
		Fixed & operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif