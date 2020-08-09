/*Q4.  Write a C/C++ program to encrypt and decrypt the string using Caesar Cypher Algorithm. While
encrypting the given string, 5 is added to the ASCII value of the characters. Similarly, for decrypting the
string, 5 is subtracted from the ASCII value of the characters to print an original string. Example - Input
String - hello, Encrypted String - mjqqt*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s,ch;
    int key,choice,i;
    cout<<"Input a string :  ";
    getline(cin,s);
    cout<<"Enter key : ";
    cin>>key;
    cout<<"Enter your choice"<<endl<<"1 Encryption"<<endl<<"2 Decryption"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        for(i=0;i<s.length();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i] = s[i] + key;
                if(s[i]>'z')
                {
                    s[i] = s[i]-'z'+'a'-1;
                }
            }
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i] = s[i]+key;
                if(s[i]>'Z')
                {
                    s[i] = s[i]-'Z'+'A'-1;
                }
            }
        }
        cout<<"Encrypted string  :  "<<s;
    }
    else if(choice == 2)
    {
        for(i=0;i<s.length();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i] = s[i] - key;
                if(s[i]<'a')
                {
                    s[i] +=26;
                }
            }
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i] = s[i] - key;
                if(s[i]<'A')
                {
                    s[i] += 26;
                }
            }
        }
        cout<<"Decrypted string  :  "<<s;
    }
    else
    {
        cout<<"Invalid choice";
    }
}

