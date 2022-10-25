#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed(const int x)
{
    std::cout << "Int constructor called\n";
    this->_rawBits = x << _fBits;
    return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
	return ;
}

Fixed::Fixed(const Fixed &val)
{
	std::cout << "Copy constructor called\n";
	this->_rawBits = val.getRawBits();
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called\n";
    this->_rawBits = (int)(roundf(nb * (1 << this->_fBits)));
    return ;
}

float Fixed::toFloat() const{
    return ((float)this->_rawBits / (1 << this->_fBits));
}

int Fixed::toInt() const{
    return (this->_rawBits >> this->_fBits);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called\n";
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}