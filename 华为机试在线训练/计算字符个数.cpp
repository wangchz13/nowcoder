#include<stdio.h>
#include<string.h>
int main(){
    char str[1000000],c;
    gets(str);
    c=getchar();
    int len = strlen(str);
    int cnt = 0;
    for(int i=0;i<len;++i)
    {
        if(c==str[i])
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}