#pragma once

/**
 * Macros for automating __declspec declaration to
 * not write in every class the declaration
 */
#ifdef WHZ_PLATFORM_WINDOWS
	#ifdef WHZ_BUILD_DLL
		#define WHAZEL_API __declspec(dllexport)
	#else
		#define WHAZEL_API __declspec(dllimport)
	#endif
#else
	#error WizardHazel only supports Windows!
#endif