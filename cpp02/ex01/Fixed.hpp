#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	private:
		int					_rawBits;
		const static int	_fBits = 8;
	public:
		Fixed(void);
        Fixed(const int x);
        Fixed(const float x);
		~Fixed(void);
		Fixed(const Fixed &cpy);

        float toFloat() const;
        int toInt() const;
		Fixed & operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif