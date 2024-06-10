#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QLIB1_LIB)
#  define QLIB1_EXPORT Q_DECL_EXPORT
# else
#  define QLIB1_EXPORT Q_DECL_IMPORT
# endif
#else
# define QLIB1_EXPORT
#endif
