#ifndef ASSERT_H
#define ASSERT_H


#ifndef NDEBUG
    #define assert(COND)
#else
    #include "stdio.h"
    void __report_assertion_failure(const char* file_name, const int line_number, const char* line)
    {
        fprintf(stderr, "Assertion Error in %s\n\t|%d\tassert(%s)", file_name, line_number, line);
    }

    #define assert(COND) \
        if(COND) {} else{ __report_assertion_failure(__FILE__, __LINE__, #COND); }
#endif

#endif // ASSERT_H
