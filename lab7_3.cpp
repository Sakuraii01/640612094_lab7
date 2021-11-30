#include<iostream>

using namespace std;

int adiff(int a,int b){

      while(a > 360){
          a-=360;
        }
      while(-360 > a){
          a+=360;
      }
      while(b > 360){
          b-=360;
      }
      while(-360 > b){
          b+=360;
      }
  int c;
  if(a==360 && b == 0){
    c=0;
  }else if(b==360 && a == 0){
    c=0;
  }else if(a>b){
    c=a-b;
  }else{
    c=b-a;
  }

  if(c > 180){
    c -= 360;
    if(c>0){
      c=c;
    }else{
      c= -c;
    }
  }
  return c;
}

int main(){
  cout << adiff(180,270) <<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244)<<endl;
}
