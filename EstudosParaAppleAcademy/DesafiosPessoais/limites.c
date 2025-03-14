#include <stdio.h>
#include <limits.h>

int main(){
    printf("char:\nvalor minimo: %d\nvalor maximo: %d\n\n",CHAR_MIN, CHAR_MAX);

    printf("int:\nvalor minimo: %d\nvalor maximo: %d\n\n", INT_MIN, INT_MAX);

    printf("short int:\nvalor minimo: %d\nvalor maximo: %d\n\n", SHRT_MIN, SHRT_MAX);

    printf("unsigned int:\nvalor minimo: %d\nvalor maximo: %u\n\n", 0, UINT_MAX);

    printf("long int:\nvalor minimo: %li\nvalor maximo: %li\n\n", LONG_MIN, LONG_MAX);

    printf("unsigned long int:\nvalor minimo: %lu\nvalor maximo: %lu\n\n", 0 , ULONG_MAX);

    printf("long long int:\nvalor minimo: %lli\nvalor maximo: %lli\n\n", LLONG_MIN, LLONG_MAX);

    printf("unsigned long long int:\nvalor minimo: %llu\nvalor maximo: %llu\n\n", 0 , ULLONG_MAX);

    return 0;
}
