#ifndef DLLQTPROJECT_GLOBAL_H
#define DLLQTPROJECT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLLQTPROJECT_LIBRARY)
#  define DLLQTPROJECT_EXPORT Q_DECL_EXPORT
#else
#  define DLLQTPROJECT_EXPORT Q_DECL_IMPORT
#endif

#endif // DLLQTPROJECT_GLOBAL_H
