void space(char *a)
{
        int i,j=0;
        for(i=0;a[i]!='\0';i++)
        {
                if(a[i]!=' ')
                {
                        a[j]=a[i];
                        j++;
                }
                else if(a[j-1]!=' ')
                {
                        a[j]=' ';
                        j++;
                }
                else
                {
                        i++;
                }
        }
        a[j]='\0';
}

