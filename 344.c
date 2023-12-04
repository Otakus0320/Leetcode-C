void reverseString(char* s, int sSize) { 
    for(int l = 0, r = sSize-1; l < sSize/2; l++, r--)
    {
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
    }
}
