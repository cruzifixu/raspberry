#pragma once

#ifdef RASPBERRY_PLATFORM_WINDOWS
	#ifdef RASPBERRY_BUILD_DLL
		#define RASPBERRY_API __declspec(dllexport)
	#else
		#define RASPBERRY_API __declspec(dllimport)
	#endif
#else 
	#error raspberry only supports Windows!
#endif