#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int integer;
		static const int sttc_cnst = 8;

	public:
		Fixed();
		Fixed(const float floating_point);
		Fixed(const int fixed_point);
		Fixed(const Fixed & src );
		~Fixed();
		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits( void ) const;
		void setRawBits(const int raw );
		Fixed &operator=( Fixed const & rhs );

		Fixed	operator++(int);
		Fixed	operator++();
		Fixed	operator--(int);
		Fixed	operator--();
		Fixed	operator+(Fixed f);
		Fixed	operator-(Fixed f);
		Fixed	operator*(Fixed f);
		Fixed	operator/(Fixed f);
		bool	operator>(const Fixed f) const;
		bool	operator<(Fixed f) const;
		bool	operator>=(Fixed f) const;
		bool	operator<=(Fixed f) const;
		bool	operator==(Fixed f) const;
		bool	operator!=(Fixed f) const;

		static Fixed &min(Fixed &F1, Fixed &F2);
		const static Fixed &min(const Fixed &F1, const Fixed &F2);
		static Fixed &max(Fixed &F1, Fixed &F2);
		const static Fixed &max(const Fixed &F1, const Fixed &F2);
};

std::ostream &operator<<(std::ostream & o, Fixed const & i);

#endif