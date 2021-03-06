#include "stringhandle.h"

int main()
{
    char * niu;
    char string_test[6] = {"aeiou"};

    niu = append_char_to_string("abc.abc.abc.",'d','.');
    printf("Append string: %s \n", niu);
    printf("size_ %zu \n", strlen(niu));
    free(niu); //not very necessary but recomendely
    str_replacechar(string_test,'a', '4');
    print_str_to_ascii_code("abc");
    printf("\n");
    printf("replaced string: (a to A) %s \n", string_test);

    if (!str_rotate(string_test, 5, 3))
    	printf(" newstr -- %s\n", string_test);
    return 0;
}
