#include "string.h"

typedef char byte;

void* memchr(const void* str, int c, size_t n)
{

}

int memcmp(const void* a, const void* b, size_t n)
{
    for(size_t i = 0; i < n; ++i) {
        if(((const byte*)a)[i] != ((const byte*)b)[i]) {
            return (int)i;
        }
    }
}

void* memcpy(void* dst, const void* src, size_t n)
{
    for(size_t i = 0; i < n; ++i) {
        ((byte*)dst)[i] = (const byte*(src))[i];
    }
    return dst;
}

void* memmove(void* dst, const void* src, size_t n)
{
    return memcpy(dst, src, n);
}

void* memset(void* str, int c, size_t n)
{
    for(size_t i = 0; i < n; ++i) {
        ((byte*)dst)[i] = (byte)c;
    }
}

char* strcat(char* dst, const char* src)
{

}
char* strncat(char* dst, const char* src, size_t n);
char* strchr(const char* str, int c);
int strcmp(const char* a, const char* b);
int strncmp(const char* a, const char* b, size_t n);
char* strcpy(char* dst, const char* src);
char* strncpy(char* dst, const char* src, size_t n)
{
}

size_t strcspn(const char *a, const char *b)
{
    (void)a;
    (void)b;
    // NOT IMPLEMENTED
    return 0;
}

char* strerror(int errnum)
{
    (void)errnum;
    // NOT IMPLEMENTED
    return NULL;
}

size_t strlen(const char* str)
{
    size_t result;
    for(result = 0; str[result] != '\0'; ++result);
    return result;
}
