/*
Copyright (C) 2013  George Nicolaou <george[at]preaver.[dot]com>
Copyright (C) 2013  Glafkos Charalambous <glafkos[at]gmail.[dot]com>

This file is part of Exploitation Toolkit Icarus (ETI) Library.

Exploitation Toolkit Icarus (ETI) Library is free software: you can redistribute 
it and/or modify it under the terms of the GNU General Public License as 
published by the Free Software Foundation, either version 3 of the License, 
or (at your option) any later version.

Exploitation Toolkit Icarus (ETI) Library is distributed in the hope that it 
will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Exploitation Toolkit Icarus (ETI) Library.  
If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include "ImageHeaderMemory.h"
#include "icarus_include.h"
#include "windef.h"
class WinASLR
{
public:
	WinASLR(void);
	~WinASLR(void);
	BOOL winaslr_is_module_aslr_enabled( ImageHeaderMemory * lpsImageHeader );
	BOOL winaslr_is_module_rebased( ImageHeaderMemory * lpsImageHeader );
private:
	PIMAGE_NT_HEADERS lpsNtHeaders;
};

