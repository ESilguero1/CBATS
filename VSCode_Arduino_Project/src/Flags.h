#ifndef FLAGS_H
#define FLAGS_H

struct flags
{
	public:
		bool isJSEnable 		= true;
		bool isSeeking			= false;
		bool direction			= true;
		bool isPositioning		= false;
} motorFlags;

flags * flags_motor = &motorFlags;
#endif