# knoldus
My CPP code
The code logic goes as follows:
The solution is of O(n^2), since I didn't know the time so I am giving the Greedy solution. If given a chance I can try for ptimised solution also.
Basically in the solution we take a input from the user, we have to find the next number greater than input number that is palindrome. There are 2 cases if input number is grater than 0 and less than 9 then the answer is 11 if not then i have taken a variable called pa which will have the final answer. I am incrementing the number one by one and then checking whether it is palindrome or not. If yes then break the loop and print the answer.

The code is as follows:-


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc)
    {
        long int num,pa=0,rem,temp;
        cin>>num;
        if(num>0 && num<=9)
        {
            cout<<"11"<<endl;
        }
        else
        {
            while(num!=pa){
            num=num+1;
            temp=num;
            pa=0;
            while(temp!=0){
              rem=temp%10;
              pa=rem+pa*10;
              temp=temp/10;
            }
          }
          cout<<pa<<endl;
        }

      tc--;
    }

  return 0;
}

