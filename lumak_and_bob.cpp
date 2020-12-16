#include <bits/stdc++.h>
using namespace std;


int main(){
  int a, b, n_yrs=0;

  cin>>a>>b;
  
  if(a > 10 || b > 10){
    return 0;
  }else{
    do{
      /*
	while lumak's weight is less than bob's, triple lumak's, double bob's
       */
      a *= 3;
      b *=2;
      n_yrs++;
    }while(a <= b);
  }
  
  cout<<n_yrs<<endl;
}
  
