#pragma once


#ifdef MENG_PLATFORM_WINDOWS
	#ifdef MENG_BUILD_DLL
		#define MENG_API __declspec(dllexport)
	#else 
		#define MENG_API __declspec(dllimport)
	#endif
#else
	#error Engine only supports windows!
	
#endif
