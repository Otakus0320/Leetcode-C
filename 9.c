bool isPalindrome(int x) {
    long test = 0, control = x;
    int num=0;
    if(x<0)
        num = 1;
    while (x !=0)
    {
        int temp;
        temp = x % 10;
        test = test * 10 +temp;
        x/=10;
    }
    if(num == 1)
        test = -test;
    if(test == control)
        return true;
    else
        return false;
}
