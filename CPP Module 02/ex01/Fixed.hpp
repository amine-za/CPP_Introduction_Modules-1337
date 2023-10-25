#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int bits_shift = 8;
	public:
		Fixed();
		Fixed(const int fixed_point);
		Fixed(const float floating_point);
		Fixed(const Fixed & src );
		~Fixed();
		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits( void ) const;
		void setRawBits(const int raw );
		Fixed &operator=( Fixed const & rhs );
};

std::ostream &operator<<(std::ostream & o, Fixed const & i);

#endif
