/*	
	N-Rage`s Dinput8 Plugin
    (C) 2002, 2006  Norbert Wladyka

	Author`s Email: norbert.wladyka@chello.at
	Website: http://go.to/nrage


    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _COMMONINCLUDES_H_
#define _COMMONINCLUDES_H_

#include "settings.h"
#include <tchar.h>
#include <wtypes.h>
#include "resource.h"
#include "Debug.h"

#if SPECS_VERSION == 0x0100
#include "./ControllerSpecs/Controller #1.0.h"
#endif // #if SPECS_VERSION == 0x0100

#if SPECS_VERSION >= 0x0101
#include "./ControllerSpecs/Controller #1.1.h"
#endif // #if SPECS_VERSION == 0x0100


#define P_malloc( size ) HeapAlloc( g_hHeap, 0, size )
#define P_free( memory ) HeapFree( g_hHeap, 0, memory )
#define P_realloc( memory, size ) \
	( (memory == NULL) ? P_malloc(size) : HeapReAlloc( g_hHeap, 0, memory, size ) )

#ifdef ARRAYSIZE
#undef ARRAYSIZE
#define ARRAYSIZE( array ) (sizeof(array) / sizeof(array[0]))
#endif	//ARRAYSIZE

#endif // #ifndef _COMMONINCLUDES_H_
