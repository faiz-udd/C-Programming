#include<iostream>
using namespace std;

void addition(){
  int a,b;
    cout<<"Enter First Integer value"<<endl;
    cin>>a;
    cout<<"Enter second Integer value"<<endl;
    cin>>b;
   int Result=a+b;
    cout<<"Result of the numbers is:  "<< Result<<endl;

}
  int subtraction(){
   int a, b;
     cout<<"Enter First Integer value"<<endl;
    cin>>a;
    cout<<"Enter second Integer value"<<endl;
    cin>>b;
   int Result=a-b;
    cout<<"Result of the numbers is:  "<< Result<<endl;
    return Result;

}

void division(){
    float a, b;
    cout<<"Enter First number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
   float Result=a/b;
    cout<<"Result of the numbers is:  "<< Result<<endl;

}
void multiplication(){
   int a, b;
     cout<<"Enter First Integer value"<<endl;
    cin>>a;
    cout<<"Enter second Integer value"<<endl;
    cin>>b;
   int Result=a*b;
    cout<<"Result of the numbers is:  "<< Result<<endl;

}

int main(){
    char Decision;

    do{

     cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for Subtraction"<<endl;
    cout<<"Enter 3 for divion"<<endl;
    cout<<"Enter 4 for multiplication"<<endl;
    int choice;
    cin>>choice;
    
    switch (choice)
    {
    case 1:
   addition();
    case 2:
   subtraction();
        break;

         case 3:
    division();
        break;
    

        case 4:
    multiplication();
        break;
       
    default:
    cout<<"wrong input, Try Again"<<endl;
    }
    cout<<"Would you like to try once more!!!!!!!"<<endl;

    cout<<"y/n"<<endl;
       
    cin>>Decision;
    }
    while(Decision=='y');
    

}