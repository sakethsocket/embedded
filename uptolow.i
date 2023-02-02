# 1 "uptolow.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "uptolow.c"
int uptolow(char k)
{

        if((k>=65)&&(k<=90))
            k=k+32;
        printf("%c",k);
}
