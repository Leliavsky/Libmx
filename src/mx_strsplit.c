#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (s == 0)
        return 0;

    int arr_size = mx_count_words(s, c);

    char **result = (char **)malloc(sizeof(char *) * (arr_size + 1));
    result[arr_size] = 0;

    for (int i = 0; i < arr_size; i++) {
        while (*s == c) 
            s++;
        char *word_start = (char *)s;
        int word_len = 0;
        
        while (*s != c) {
            word_len++;
            s++;
        }
        char *word = mx_strnew(word_len);
        mx_strncpy(word, word_start, word_len);
        result[i] = word;
    }
    return result;
}
