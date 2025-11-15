//error in test case 26
#include<iostream>
using namespace std;

int main(){

    unsigned long n;
    int  digit, newnum = 0, copy;
    bool status = true;
    cin>>n;
    copy = n;

    if(n % 4 == 0 || n % 7 == 0){
        status = true;
    }
    else{
        while(n > 0){
        digit = n % 10;
        n = n / 10;
        newnum = newnum * 10 + digit;


        if(digit == 4 || digit == 7){
            status = true;

            if(copy/newnum == 0){
            status = true;
            break;
            }
        }

        else {
            status = false;
            break;
        }

    }
    }

    if(status == true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
