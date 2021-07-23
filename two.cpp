int myAtoi(string str) 
    {
        
    int n=str.size();

    int i=0;

    while(i<n and str[i]==' ')
    {
        i++;
    }

    if(i==n)
    return 0;

    int sign=1;
    long long int res=0;

    if(str[i]=='-')
    {
        sign=0;
        i++;
    }
    else if(str[i]=='+')
    {
        i++;
    }
    while(i<n)
    {
        if(str[i]>='0' and str[i]<='9')
        {
            res=res*10;

            if(res<INT_MIN or res>INT_MAX)
            break;

            res=res+str[i]-'0';
        }
        else
            break;

        i++;
    }
    if(sign==0)
    res=res*-1;

   if(res<INT_MIN)
   return INT_MIN;

   if(res>INT_MAX)
   return INT_MAX;

return res;
    }
