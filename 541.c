#include <string.h>

void reverse(char *s, int i, int i_k, int k)
{
    for(int l = i, r = i_k; l < i+k/2; l++, r--)
    {
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
    }
}

char* reverseStr(char* s, int k) {
    int size = strlen(s);
    for(int i = 0; i<size; i+=2*k)
    {
        if (i+k < size)
        {
            reverse(s, i, i+k-1, k);
            continue;
        }
        reverse(s, i, size-1, size-i);
    }
    return s;
}
