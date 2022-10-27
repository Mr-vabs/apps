#include <iostream>
#include<string.h>
using namespace std;
int main() {
  char binary[40] = "10111.01";
   //char binary[40] = "01001011";
   /*int num;
   cout<<"enter number of digits"<<endl;
   cin >> num;
   for (int i = 0; i < num; ++i)
   {
    cin >> binary[i];
   }*/
   cout<<"Binary number is "<<binary<<endl;
   //once complement....
   int length = strlen(binary);
   for(int i=0;i<length;i++) {
      if(binary[i] == '0') {
         binary[i]= '1';
      } else if(binary[i] == '1')
         binary[i] = '0';
   }
   cout<<"One’s Complement is "<<binary<<endl;
   // cout<<binary[length-1];
   for(int i = length-1; i>=0; i--) {
      // cout<<binary[i];
      if(binary[i] == '0') {
         binary[i] = '1';
         //cout<<binary[i];
         break;
      } else if(binary[i] == '1'){
         binary[i] = '0';
      }
   }
   cout<<"Two’s complement is "<<binary;
   return 0;
}
