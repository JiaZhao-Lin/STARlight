///////////////////////////////////////////////////////////////////////////
//
//    Copyright 2010
//
//    This file is part of starlight.
//
//    starlight is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    starlight is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with starlight. If not, see <http://www.gnu.org/licenses/>.
//
///////////////////////////////////////////////////////////////////////////
//
// File and Version Information:
// $Rev::                             $: revision of last commit
// $Author::                          $: author of last commit
// $Date::                            $: date of last commit
//
// Description:
//    main executable
//
//
///////////////////////////////////////////////////////////////////////////


#include <iostream>

#include "reportingUtils.h"
#include "starlight.h"
#include "eventfilewriter.h"
#include "starlightStandalone.h"


int
main(int,
     const char**)
{
	printCompilerInfo();
	printSvnVersion  ();
	
	// creating a starlight standalone object
	starlightStandalone sl;
	// initialising starlight
	sl.init();
	// running starlight
	return sl.run();
}
