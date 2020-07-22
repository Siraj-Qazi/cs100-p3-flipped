// Abdullah Alsubaei
// Outputs the input strings flipped with given line width and right-justification

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NUM_WORDS 50

char *str_reverse(char *);

int main() {
    int line_w = 0;
    int num_words = 0;
    fscanf(stdin, "%d", &line_w);

    char words[MAX_NUM_WORDS][line_w + 1];
    char format_string[10];
    sprintf(format_string, "%%%ds", line_w);

    //printf("\n %s\n",format_string);

    while (!feof(stdin)) {
        fscanf(stdin, format_string, words[num_words]);
        num_words++;
    }

    num_words--;

    /*for(int i = 0; i < num_words; ++i)
     * {
        printf("%12s\n",words[i]);
    }*/

    strcat(format_string, "\n");

    size_t line_width = (size_t) line_w;

    //printf("\n Read in all data!\n");
    char temp_str[1000];
    temp_str[0] = '\0';

    for (int i = 0; i < num_words; ++i)
    {
        //printf("\n i = %d strlen(temp_str) = %lld word = %s\n", i, strlen(temp_str), words[i]);
        if (strlen(temp_str) + strlen(words[i]) < line_width)
        {
            strcat(temp_str, words[i]);
            strcat(temp_str, " ");
            //printf(" Current str = %s\n",temp_str);
        } else if (strlen(temp_str) + strlen(words[i]) == line_width)
        {
            strcat(temp_str, words[i]);
            //printf(" Current str = %s\n",temp_str);
            //strcat(temp_str," ");
            char *output_str = str_reverse(temp_str);
            printf(format_string, output_str);
            temp_str[0] = '\0';

        } else if (
                (strlen(temp_str) == line_width) ||
                (strlen(temp_str) + strlen(words[i]) > line_width)
                )
        {
            //printf(" Current str = %s\n",temp_str);
            char *output_str = str_reverse(temp_str);
            printf(format_string, output_str);
            temp_str[0] = '\0';
            i--;
        }

    }

    if (strlen(temp_str) > 0)
    {
        char *output_str = str_reverse(temp_str);
        printf(format_string, output_str);
        temp_str[0] = '\0';
    }

    for (size_t i = 1; i <= line_width; ++i) {
        printf("%llu", i % 10);
    }

    printf("\n");

    return 0;
}

char *str_reverse(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;

    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }

    return str;
}