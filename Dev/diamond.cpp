#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cout<<"Enter no of lines in odd no :: ";
    cin>>n;
    
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if ((i==n/2+1) || (i<n/2+1) && (j>=n/2+1-(i-1)) && (j<=n/2+1+(i-1)) || (i>n/2+1) && (j>=n/2+1-(n-i)) && (j<=n/2+1+(n-i))) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
    int i, j, n, space;
    //n = 5;
    cout<<"Enter the Number of Rows: ";
    cin>>n;
    space = n/2;
    
    for(i=1; i<=n/2+1; i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }
    
    space = 1;
    
    for(i=1; i<=(n/2+1); i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(j=1; j<=(2*(n/2+1-i)-1); j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}
*/
