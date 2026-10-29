#pragma once

#if defined(_WIN32)
#  if defined(MODEL_LIB)
#    define MODEL_API __declspec(dllexport)
#  else
#    define MODEL_API __declspec(dllimport)
#  endif
#else
#  define MODEL_API
#endif