#include <stdbool.h>

#ifdef NDEBUG
#define LOG_DISABLED
#endif
#define PACKAGE_NAME "tw.nekomimi.nekogram"_iobfs.c_str()
#define CERT_HASH 0x8d1b4ec0
#define CERT_SIZE 0x588

#ifdef __cplusplus
extern "C" {
#endif

bool check_signature();

#ifdef __cplusplus
}
#endif
