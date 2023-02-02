# 1 "lowtoup.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "lowtoup.c"
int lowtoup(char k)
{

        if((k>=97)&&(k<=122))
           k=k-32;
        printf("%c",k);
}
