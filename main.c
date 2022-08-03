#include <stdio.h>

typedef char *string;

int get_int(string string)
{
    int n;
    printf("%s", string.c_str());
    scanf("%d", &n);

    //printf("Height is: %i", n);
    return n;
}

char *get_string(string word)
{
    char *temp = " ";
    //printf("%s",string);

    printf("%s",word);
    scanf("%s", &temp);
    char * m = &temp;
    printf("temp in get_string is: %s\n",m);
    //printf("Height is: %i", n);
    return m;
}

int get_num()
{
    int num;

    scanf("%d", &num);
    printf("Num is %d\n", num);
    //printf("Height is: %i", n);
    return num;
}


int main() {

    return 0;
}
