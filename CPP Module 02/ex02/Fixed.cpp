#include "Fixed.hpp"

Fixed::Fixed()
{
	integer = 0;
}

Fixed::Fixed(const float floating_point)
{
	integer = round(floating_point * (1 << sttc_cnst));
}

Fixed::Fixed(const int fixed_point)
{
	integer = fixed_point << sttc_cnst;
}

Fixed::Fixed(const Fixed & src )
{
	*this = src;
}

Fixed::~Fixed()
{}

int Fixed::getRawBits(void)const
{
	return (integer);
}

void Fixed::setRawBits(const int raw )
{
	this->integer = raw;
}

float Fixed::toFloat(void) const
{
	return (integer / (float)(1 << sttc_cnst));
}

int Fixed::toInt(void) const
{
	return (integer >> sttc_cnst);
}

//-------------------------overflowing operators-------------------------//

Fixed &Fixed::operator=(Fixed const & rhs)
{
	if ( this != &rhs )
		this->integer = rhs.getRawBits();
	return *this;
}

Fixed Fixed::operator--(int) // i--
{
	Fixed buffer = *this;
	integer--;
	return (buffer);
}

Fixed Fixed::operator--() //--i
{
	integer--;
	return (*this);
}

Fixed Fixed::operator++(int) // i++
{
	Fixed buffer = *this;
	this->integer++;
	return (buffer);
}

Fixed Fixed::operator++() // ++i
{
	this->integer++;
	return (*this);
}

Fixed Fixed::operator+(Fixed f)
{
	return(Fixed(this->integer + f.integer));
}

Fixed	Fixed::operator-(Fixed f)
{
	return(Fixed(this->integer - f.integer));
}

Fixed	Fixed::operator*(Fixed f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator/(Fixed f)
{
	return (Fixed(this->integer / f.integer));
}

bool	Fixed::operator>(const Fixed f) const
{
	if (this->integer > f.integer)
		return (1);
	return (0);
}

bool	Fixed::operator<(Fixed f) const
{
	if (this->integer < f.integer)
		return (1);
	return (0);
}

bool	Fixed::operator<=(Fixed f) const
{
	if (this->integer <= f.integer)
		return (1);
	return (0);
}

bool	Fixed::operator>=(Fixed f) const
{
	if (this->integer >= f.integer)
		return (1);
	return (0);
}

bool	Fixed::operator==(Fixed f) const
{
	if (this->integer == f.integer)
		return (1);
	return (0);
}

bool	Fixed::operator!=(Fixed f) const
{
	if (this->integer != f.integer)
		return (1);
	return (0);
}

std::ostream &operator<<( std::ostream & o, Fixed const &F )
{
	o << F.toFloat();
	return (o);
}

//------------------ public overloaded member functions------------------//


// A static member function min that takes as parameters two references on fixed-point
// numbers, and returns a reference to the smallest one.

Fixed &Fixed::min(Fixed &F1, Fixed &F2)
{
	if (F1.integer > F2.integer)
		return (F2);
	return (F1);
}


// A static member function min that takes as parameters two references to constant
// fixed-point numbers, and returns a reference to the smallest one.

const Fixed &Fixed::min(const Fixed &F1, const Fixed &F2)
{
	if (F1 > F2)
		return (F2);
	return (F1);
}


// A static member function max that takes as parameters two references on fixed-point
// numbers, and returns a reference to the greatest one.

Fixed &Fixed::max(Fixed &F1, Fixed &F2)
{
	if (F1 > F2)
		return (F1);
	return (F2);
}


// A static member function max that takes as parameters two references to constant
// fixed-point numbers, and returns a reference to the greatest one.

const Fixed &Fixed::max(const Fixed &F1, const Fixed &F2)
{
	if (F1 > F2)
		return (F1);
	return (F2);
}
