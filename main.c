#include "stdio.h"
#include "libtest.h"
#include "libft.h"


void testStrLen() {
    int expected = 12;

    struct TestModule test;
    test.name = "StrLen Function";
    test.description = "should get the lenght of the string";
    test.typeOf = 1;
    test.expected = &expected;

    char * word;
    int received = ft_strlen(word);

    test.received = &received;    
    assert(test);
}

int main(void) {
    testStrLen();
    return 0;
}