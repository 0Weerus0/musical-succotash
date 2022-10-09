#include<iostream>
using namespace std; 
class Student
{public:
	Student (int n, float s):num(n),score(s){}
	void change(int n,float s)const{
		const int *p=&num;
		*p=&n;
		
	}
	void display()const{cout<<num<<" "<<score<<endl;}
 private:
 	int num;
	 float score;};
int main(){
	const Student stud(101,78.5);//（1）const对象无法被外部引用 
	stud.display();
	stud.change(101,80.5);
	stud.display();
	return 0;
}
