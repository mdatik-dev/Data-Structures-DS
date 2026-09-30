#include<iostream>
using namespace std;     ///binary search
int main()
{
     int  b,e,m,n,s,loc,flag=0;  ///s = search value.
     cin >> s;
     cin >> n;
     int a[n];
     for (int i=0 ; i<n ; i++)
     {
         cin >> a[i];
                               ///b= beg, e= end , m= mid
     }
     b = 0;
     e = n - 1;
     m = (b+e)/2;

     while (b < e)
     {
          if (a[m] == s)
          {
              loc = m;
              flag++;
              break;
          }

          else if (s > a[m])
          {
              b = m+1;
          }
          else
          {
              e = m-1;
          }
          m = (b + e)/2;


     }

       if(flag>0)
       {
           cout << s << " is found " << "at location " << loc+1 << endl;
       }
       else
       {
           cout << "Not found" << endl;
       }

       return 0;

}
