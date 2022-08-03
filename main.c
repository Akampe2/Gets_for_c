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

char * get_string(string string)
{
    char * m;

    printf("%s",string);//.c_str());
    scanf("%s", &m);//, m);
    printf("m in get_string is: %s\n",&m);//, m);

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
