#include <iostream>
#include "Fixed.hpp"

int	main( void )
{
	Fixed a; // default
	Fixed b( a ); // copy cons
	Fixed c; // default
	c = b; // assignement equal operator

	std::cout << a.getRawBits() << std::endl; // je montre les différents outs
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}