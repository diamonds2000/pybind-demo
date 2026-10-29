#pragma once

#if defined(_WIN32) || defined(_WIN64)
#   ifdef FORCE_LIB
#       define FORCE_API __declspec(dllexport)
#   else
#       define FORCE_API __declspec(dllimport)
#   endif
#else
#   define FORCE_API
#endif