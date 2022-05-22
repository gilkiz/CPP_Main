#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <stdio.h>

bool isPalindrome(std::string& s)
{
    int r = s.length()-1;
    for(int i=0; i<(s.length()/2); i++)
    {
        if(s[i] != s[r])
        {
            return false;
        }
        r--;
    }
    return true;
}

int main(int argc, char *argv[])
{
    std::string s = "a";
    bool t = isPalindrome(s);
    printf("%d \n" , t);
}