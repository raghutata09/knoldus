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
      cout<<pa;
      tc--;
    }

  return 0;
}
