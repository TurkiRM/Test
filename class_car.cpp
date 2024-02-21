#include<iostream>
using namespace std;
class car{
	private:
int model;
string name; 
string type;
int price;
public:
car(int m,int p,string n, string t){
model=m;
name=n;
type=t;
price=p;
}
void display(){

cout<<" the  price is:"<<price<<endl;
}
friend void IncreacePrice(car c1);
};
void IncreacePrice(car c1){
cout<<"increace the car by multiple  1000 with price:"<<c1.price*1000;
}


int main(){
car c1(2019,78000,"sunny","small");
c1.display();
IncreacePrice(c1);
}
