#ifndef LIBTEST_H
#define LIBTEST_H

struct TestModule
{
    char *name;
    /**
     * type of expected and received values.
     * 1 = int
     * 2 = char
     * 3 = float
     * 4 = double
    */
    int typeOf;
    /**
     * Description of the test. It is recommended to start with "should [do what is intended]"
    */
    char *description;

    void *expected;
    void *received;
};

void assert(struct TestModule);

#endif