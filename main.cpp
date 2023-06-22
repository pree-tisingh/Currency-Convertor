#include<iostream>
using namespace std;
int main()
{
    char ch;
    float cconverter(void);
    char ag;
    strt:
    cout<<"*************WELCOME TO CURRENCY CONVERTER***************"<<endl;
    cout<<"__________Please Follow The Below Instruction___________"<<endl;
    cout<<"You can use this for the currencies like Rupee,Dollar, Euro and Pound"<<endl;
    cout<<"Press a, b, c and d for Rupee, Dollar, Euro and  Pound respectively"<<endl;
    cout<<"Enter the curency1 which you want to convert into another"<<endl;
    cout<<"Enter the value in that currency"<<endl;
    cout<<"Enter the currency2 which will the required currency"<<endl;
    cout<<"Press a) Rupee , b) Dollar, c)Euro d)Pound"<<endl;
    cout<<"Please Press thr s to start the process"<<endl;
    start:
    cin>>ch;
    if(ch=='s'||ch=='S')
    {
        float result=cconverter();
        cout<<"Result of Conversion is:\t"<<result<<endl;
        cout<<"Have a Great Day Ahead!!!!"<<endl;
        sa:
        cout<<"Do you want to use this again: y or n"<<endl;
        cin>>ag;
        if(ag=='y'||ag=='Y')
        {
            goto strt;
        }
        else if(ag=='n'||ag=='N')
        {
            cout<<"Thankyou for coming"<<endl;
        }
        else
        {
            cout<<"you have entered wrong value"<<endl;
            goto sa;
        }
    }
    else
    {
        cout<<"You have entered wrong value, please type s!"<<endl;
        goto start;
    }
} 
    
    float cconverter()
    {
        char c1;
        char c2;
        float v1;
        float v2;
        curr:
        cout<<"Enter the currency1 name: \t"<<endl;
        cin>>c1;
        cout<<"Enter the currency1 value: \t"<<endl;
        cin>>v1;
        switch(c1)
        {
           
            case 'a': 
                       curr1:
                       cout<<"Enter the currency2 name: \t"<<endl;
                       cin>>c2;
                       if(c2=='a'||c2=='A')
                       {
                           v2=v1*1;
                       }
                       else if(c2=='b'||c2=='B')
                       {
                           v2=v1*73.84;
                       }
                       else if(c2=='c'||c2=='C')
                       {
                           v2=v1*0.85;
                       }
                       else if(c2=='d'||c2=='D')
                       {
                           v2=v1*0.72;
                       }
                       else
                       {
                           cout<<"You have entered wrong value please try again!!!!!"<<endl;
                           goto curr1;
                       }
                       break;
                       
                       
            case 'b': 
                       curr2:
                       cout<<"Enter the currency2 name: \t"<<endl;
                       cin>>c2;
                       if(c2=='a'||c2=='A')
                       {
                           v2=v1*0.01;
                       }
                       else if(c2=='b'||c2=='B')
                       {
                           v2=v1*1;
                       }
                       else if(c2=='c'||c2=='C')
                       {
                           v2=v1*0.01;
                       }
                       else if(c2=='d'||c2=='D')
                       {
                           v2=v1*0.009;
                       }
                       else
                       {
                           cout<<"You have entered wrong value please try again!!!!!"<<endl;
                           goto curr2;
                       }
                       break;
                
            case 'c': 
                       curr3:
                       cout<<"Enter the currency2 name: \t"<<endl;
                       cin>>c2;
                       if(c2=='a'||c2=='A')
                       {
                           v2=v1*1.16;
                       }
                       else if(c2=='b'||c2=='B')
                       {
                           v2=v1*83.37;
                       }
                       else if(c2=='c'||c2=='C')
                       {
                           v2=v1*1;
                       }
                       else if(c2=='d'||c2=='D')
                       {
                           v2=v1*0.85;
                       }
                       else
                       {
                           cout<<"You have entered wrong value please try again!!!!!"<<endl;
                           goto curr3;
                       }
                       break;
                       
                       
                       
           case 'd':   
                       curr4:
                       cout<<"Enter the currency2 name: \t"<<endl;
                       cin>>c2;
                       if(c2=='a'||c2=='A')
                       {
                           v2=v1*1.37;
                       }
                       else if(c2=='b'||c2=='B')
                       {
                           v2=v1*101.20;
                       }
                       else if(c2=='c'||c2=='C')
                       {
                           v2=v1*1.17;
                       }
                       else if(c2=='d'||c2=='D')
                       {
                           v2=v1*1;
                       }
                       else
                       {
                           cout<<"You have entered wrong value please try again!!!!!"<<endl;
                           goto curr4;
                       }
                       break;
                       
             default:
                     {
                        cout<<"You have entered wrong value please try again"<<endl;
                        goto  curr;
                        break;
                     }
        }          
        
        return v2;
   } 
