#include <stdio.h>
#include<cmath>
using namespace std;
int main()
{
  //判断一个大于1的数是不是质数
  int number;
  cin>>number;
  for(int i = 2; i <= number; i++){
    if(number==i)
      cout<<number<<"是质数";
    else if(number % i==0){
      cout<<number<<"不是质数";
      break;
    }
  }
  return 0;
}
