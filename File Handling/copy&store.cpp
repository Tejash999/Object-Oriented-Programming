// 1. Write a program that will copy the content from one file to another, change the case of letters to upper case if they are in lower case and vice-versa and store in next file.

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    fstream in, out;
    string str;
    char ch,c;
    out.open("Qno1File2.txt",ios::out);
    in.open("Qno1File.txt",ios::in);
    while (!in.eof())
    {
        in.get(ch);
        if (ch>='A'&&ch<='Z')
        {
            ch = ch + 32;
            out << ch;
        }
        else if(ch>='a'&&ch<='z')
        {
            ch = ch - 32;
            out << ch;
        }
        else
        {
            out << ch;
        }
    }
    out.close();
    in.close();
    return 0;
}