#include "m_str.h"


char *m_strcpy(char *dst, const char *src){
    char *d = dst;
    do{
        *d++ = *src++;
    } while(*src != '\0');
    return dst;
}


char *m_strcat(char *str1, const char *str2)
{
    char *s1 = str1;
    while(*++s1 != '\0');
    do{
        *s1++ = *str2++;
    } while(*str2 != '\0');
    return str1;
}


char *m_itoa(int value, char *buf, int base){
    int sign = 0;
    char *b = buf;
    if(value < 0){
        sign = 1;
        value = -value;
    }
    do{
        *b++ = (value % base) + 48;
        value /= base;
    } while(value > 0);
    if(sign)
        *b++ = '-';
    *b = '\0';
    m_strrvrs(buf);
    return buf;
}


char *m_strrvrs(char *str){
    int i = 0;
    char *tmp1 = str;
    char tmp2[12] = "\0";
    m_strcpy(tmp2, tmp1);
    while(tmp2[i] != '\0') i++;
    while(i > 0){
        *tmp1++ = tmp2[--i];
    }
    *tmp1 = '\0';
    return str;
}
