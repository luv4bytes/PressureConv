# PressureConv
C++ library to convert physical pressure values.

## Using the library

```cpp
#include <iostream>
#include "PressureConv.h"

using namespace PressureConv;

int main()
{
	Converter conv;
	
	double millibar = conv.Convert(Converter::UNITS::BAR, 1.5d, Converter::UNITS::MBAR);
	
	std::cout << millibar << std::endl;
	
	return 0;
}
```