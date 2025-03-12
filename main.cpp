#include<iostream>
using namespace std;

int main()
{
    int num, num2, dey;
    cout<<"Input 1st number: "<<endl;
    cin>>num;

    cout<<"Input 2nd number: "<<endl;
    cin>>num2;

    cout<<"choose smth(+=1, -=2, /=3, *=4)"<<endl;
    cin>>dey;

    switch (dey)
    {
        case 1:
            cout<<"Sum is: "<<num+num2<<endl;
        break;

        case 2:
            cout<<"Difference is: "<<num-num2<<endl;
        break;

        case 3:
            cout<<"Multiply is: "<<num*num2<<endl;
        break;

        case 4:
            cout<<"devision is: "<<num/num2<<endl;
        break;

        default:
        cout<<"idk"<<endl;
        break;
        

    }
    



}
