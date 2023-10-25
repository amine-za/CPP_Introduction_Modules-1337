#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private :
	public :
		int i;
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void complain( std::string level );
};

typedef void (Harl::*ptrFunction) (void);

#endif