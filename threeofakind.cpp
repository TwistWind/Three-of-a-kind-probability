/*
   計算任選五張撲克牌中, 得到三條的機率

   數學機率為
     C(13,1)*C(4,3)*C(12,2)*4*4/C(52,5) = 0.0211285
*/
#include <iostream>
#include <cstdlib>
using namespace std;
double caculate(int a,int b){
	double suma=1 ;
	double sumb=1 ;
	double sumab=1 ;
	for(int i=a;i>0;i--){
		suma = suma *i ;
	}
	for(int j=b;j>0;j--){
		sumb = sumb*j ;
	}
	for(int k=a-b;k>0;k--){
		sumab=sumab*k ;	
	}
	return (suma/(sumb*sumab)) ;
}

int main(){
	cout<<"Three of a kind's probability:"<<caculate(13,1)*caculate(4,3)*caculate(12,2)*caculate(4,1)*caculate(4,1)/caculate(52,5)<<endl ;
	system("PAUSE") ;
	return 0 ;
} 
