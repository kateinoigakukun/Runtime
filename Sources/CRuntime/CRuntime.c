#include <CRuntime.h>

__attribute__((swiftcall))
extern const void * _Nullable swift_getTypeByMangledNameInContext(
                        const char * _Nullable typeNameStart,
                        size_t typeNameLength,
                        const void * _Nullable context,
                        const void * _Nullable const * _Nullable genericArgs);

const void * _Nullable cruntime_getTypeByMangledNameInContext(
                        const char * _Nullable typeNameStart,
                        size_t typeNameLength,
                        const void * _Nullable context,
                        const void * _Nullable const * _Nullable genericArgs) {
  return swift_getTypeByMangledNameInContext(typeNameStart, typeNameLength, context, genericArgs);
}

