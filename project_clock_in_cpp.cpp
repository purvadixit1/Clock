#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int h,m,s,a,err,date,month,year,days;
    err=a=0;
    cout<<"Put the current time in hours,minutes,seconds,date,month and year"<<endl;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                days=366;
            }
            else
            {
                days=365;
            }
        }
        else{
            days=365;
        }
    }
    else{
        days=365;
    }
    while(err==0)
    {
        cout<<"Enter an hour: "<<endl;
        cin>>h;
        cout<<"Enter minutes: "<<endl;
        cin>>m;
        cout<<"Enter seconds: "<<endl;
        cin>>s;
        cout<<"Enter todays date: "<<endl;
        cin>>date;
       cout<<"Enter current month: "<<endl;
        cin>>month;
        cout<<"Enter current year: "<<endl;
        cin>>year;
        if(h<24&&m<60&&s<60)
        err++;
        else
        system("cls");
    }
    while(a==0)
    {
        system("cls");
        cout<<h<<":"<<m<<":"<<s<<endl;
        cout<<date<<"/"<<month<<"/"<<year<<endl;
        Sleep(1000);
        s++;
        if(s>59)
        {
            s=0;
            m++;
        }
        if(m>59)
        {
            m=0;
            h++;
        }
        if(h>24)
        {
            h=0;
          
        }
    }
    return 0;
}