#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor has been called" << std::endl;
	integer = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor has been called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "destructor has been called" << std::endl;
}


int Fixed::getRawBits( void )const
{
	std::cout << "getRawBits function has been called" << std::endl;
	return (integer);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits function has been called" << std::endl;
	integer = raw;
}

Fixed &Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator has been called" << std::endl;
	if ( this != &rhs )
		this->integer = rhs.getRawBits();
	return *this;
}
