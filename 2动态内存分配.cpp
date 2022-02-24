//动态分配内存块
#if 0
#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

#include<cstring>
#include<cmath>
#include<malloc.h>//动态内存分配
#endif
int main() {
# if 0
    char s[10];

#else
    char* s = (char*)malloc(12 * sizeof(char));
    strcpy(s, "hello world");
    puts(s);
#endif
}

#endif