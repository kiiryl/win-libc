#ifndef STRING_H
#define STRING_H

void* memchr(const void* str, int c, size_t n);
int memcmp(const void* a, const void* b, size_t n);
void* memcpy(void* dst, const void* src, size_t n);
void* memmove(void* dst, const void* src, size_t n);
void* memset(void* str, int c, size_t n);

char* strcat(char* dst, const char* src);
char* strncat(char* dst, const char* src, size_t n);
char* strchr(const char* str, int c);
int strcmp(const char* a, const char* b);
int strncmp(const char* a, const char* b, size_t n);
char* strcpy(char* dst, const char* src);
char* strncpy(char* dst, const char* src, size_t n);
size_t strcspn(const char *a, const char *b);
char* strerror(int errnum);
size_t strlen(const char* str);

#endif // STRING_H
