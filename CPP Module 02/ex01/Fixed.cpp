#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor has been called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor has been called" << std::endl;
	fixed_point = integer << bits_shift;
}

Fixed::Fixed(const float floating_point)
{
	std::cout << "Float constructor has been called" << std::endl;
	fixed_point = round(floating_point * (1 << bits_shift));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor has been called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor has been called" << std::endl;
}

int Fixed::getRawBits(void)const
{
	return (fixed_point);
}

void Fixed::setRawBits(const int raw )
{
	fixed_point = raw;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator has been called" << std::endl;
	if ( this != &rhs )
		this->fixed_point = rhs.getRawBits();
	return *this;
}

float Fixed::toFloat( void ) const
{
	return (fixed_point / (float)(1 << bits_shift));
}

int Fixed::toInt( void ) const
{
	return (fixed_point >> bits_shift);
}

std::ostream &operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return (o);
}
