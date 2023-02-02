# 1 "charactertint.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "charactertint.c"
int charactertint(char k)
{

        if((k>='0')&&(k<='9'))
           k=k-48;
        printf("%d",k);
}
