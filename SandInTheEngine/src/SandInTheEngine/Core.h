#pragma once

#ifdef SITE_PLATFORM_WINDOWS
	#ifdef SITE_BUILD_DLL
		#define SAND_IN_THE_ENGINE_API __declspec(dllexport)
	#else
		#define SAND_IN_THE_ENGINE_API __declspec(dllimport)
	#endif // SITE_BUILD_DLL
#else
	#error Currently only available on windows
#endif // SITE_PLATFORM_WINDOWS