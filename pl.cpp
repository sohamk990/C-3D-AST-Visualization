#include<bits/stdc++.h>
using namespace std;

string str;

//returns condition and body and ending value
pair<vector<string>,int> While_Loop(int i)
{
    string condition,body;
    int cnt=0;

    while(str[i] != '(')
    {
        i++;
    }
    cnt++;
    i++;
    while(cnt != 0)
    {
        if(str[i] == '(')
        {
            cnt++;
        }
        else if(str[i]==')')
        {
            cnt--;
        }
        condition+=str[i++];
    }
    condition.pop_back();

    while(str[i]!='{')
    {
        i++;
    }    
    cnt++;
    i++;
    while(cnt!=0)
    {
        if(str[i]=='{')
        {
            cnt++;
        }
        else if(str[i]=='}')
        {
            cnt--;
        }

        body+=str[i++];
    }
    body.pop_back();
    return {{condition,body},i};
}

//returns condition and body and ending value
pair<vector<string>,int> For_Loop(int i)
{
    string initialization,condition,updation,body;
    int cnt=0;

    while(str[i] != '(')
    {
        i++;
    }
    cnt++;
    i++;
    
    while(cnt != 0)
    {
        if(str[i]==';')
        {
            i++;
            break;
        }
        initialization+=str[i];
    }
    
    while(cnt != 0)
    {
        if(str[i]==';')
        {
            i++;
            break;
        }
        condition+=str[i];
    }

    while(cnt != 0)
    {
        if(str[i]==';')
        {
            i++;
            break;
        }
        updation+=str[i];
    }
    updation.pop_back();

    while(str[i]!='{')
    {
        i++;
    }    
    cnt++;
    i++;
    while(cnt!=0)
    {
        if(str[i]=='{')
        {
            cnt++;
        }
        else if(str[i]=='}')
        {
            cnt--;
        }

        body+=str[i++];
    }
    body.pop_back();

    return {{initialization,condition,updation,body},i};
}

//returns condition and body and ending value
pair<vector<string>,int> Dowhile_Loop(int i)
{
    string condition,body;
    int cnt=0;
    
    while(str[i]!='{')
    {
        i++;
    }    
    cnt++;
    i++;
    while(cnt!=0)
    {
        if(str[i]=='{')
        {
            cnt++;
        }
        else if(str[i]=='}')
        {
            cnt--;
        }

        body+=str[i++];
    }
    body.pop_back();

    while(str[i] != '(')
    {
        i++;
    }
    cnt++;
    i++;
    while(cnt != 0)
    {
        if(str[i] == '(')
        {
            cnt++;
        }
        else if(str[i]==')')
        {
            cnt--;
        }
        condition+=str[i++];
    }
    condition.pop_back();    
    return {{condition,body},i};
}


int main()
{
    int a="123";
    // string res;
    // bool is_string=false;
    // cin >> str;
    
    // for(int i=0;i<str.size();i++)
    // {
    //     if(str[i] == '\"')
    //     {
    //         i++;
    //         while(str[i] !='\"' )
    //         {
    //             i++;
    //         }
    //     }
    //     else
    //     {
    //         res+=str[i];
    //         if(res=="while")
    //         {
    //             cout << "while detected" << endl;
    //             res="";
    //             i=While_Loop(i+1).second;
    //         }
    //         else if(res=="do")
    //         {
    //             res="";
    //             i=Dowhile_Loop(i+1).second;
    //         }
    //         else if(res=="for")
    //         {
    //             res="";
    //             i=For_Loop(i+1).second;
    //         }
    //         else if(res=="if")
    //         {
    //             res="";
                
    //         }
    //         else if(res=="switch")
    //         {
    //             res="";
    //         }
    //         else if(res==" ")
    //         {
    //             res="";
    //         }
    //     }
    // }

    return 0;
}