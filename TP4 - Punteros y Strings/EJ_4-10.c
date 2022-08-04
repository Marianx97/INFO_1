#include "../Biblioteca/inc/my_string.h"

int main (void) {
    char str1[20], str2[] = "I like ", str3[] = "bananas", str4[] = " with cream!";
    int str1_len = 0, str2_len = my_strlen(str2), str3_len = my_strlen(str3), str4_len = my_strlen(str4);
    my_strncpy(str1, str2, str2_len);
    str1[str2_len] = '\0';
    printf("%s\n", str1);
    str1_len = my_strlen(str1);
    my_strncpy(str1 + str1_len, str3, str3_len);
    str1[str2_len + str3_len] = '\0';
    printf("%s\n", str1);
    str1_len = my_strlen(str1);
    my_strncpy(str1 + str1_len, str4, str4_len);
    str1[str2_len + str3_len + str4_len] = '\0';
    printf("%s\n", str1);
    return 0;
}
