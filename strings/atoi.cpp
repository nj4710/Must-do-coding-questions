/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*You are required to complete this method */
bool isNumeric(char x)
{
    return (x>='0' && x<='9')?true:false;
}
int atoi(string str)
{
    //Your code here
    int sign = 1;
    int res = 0;
    int i=0;
    if(str[0] == '-')
    {
        sign = -1;
        i++;
    }
        
    for(;i<str.length();++i)
    {
        if(isNumeric(str[i]) == false)
        return -1;
        res = res*10 + str[i]-'0';
    }
    return sign*res;
}