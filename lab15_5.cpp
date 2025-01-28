#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *z,int *x,int *c,int *v){
	int m[4]={*z,*x,*c,*v};
	srand(time(0));
	for(int i=0;i<10;i++){
		int ran=rand()%4;
		*z=m[ran];
		ran =rand()%4;
		*x=m[ran];
		ran =rand()%4;
		*c=m[ran];
		ran =rand()%4;
		*v=m[ran];
	}
	while(*z==*x||*x==*c||*c==*v||*v==*z||*x==*v||*z==*c){
		int ran=rand()%4;
		*z=m[ran];
		ran =rand()%4;
		*x=m[ran];
		ran =rand()%4;
		*c=m[ran];
		ran =rand()%4;
		*v=m[ran];
	}
	
}