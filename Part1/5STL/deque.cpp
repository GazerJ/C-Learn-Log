#include <deque>
#include <iostream>
#include <array>
#include <list>
using namespace std;
int main(){
	int test=1;
	cout<<&test<<endl;
	array<int ,10> a={1,2,3,4,567,7,8};
	deque<int> d(a.begin(),a.end());
	auto p =d.begin();
	auto pp=a.begin();
	for(;p<d.end();p++){
		cout<<&(*p)<<endl;
	}
	for( ;pp<a.end();pp++){
		cout<<&(*pp)<<endl;
	
	}

	list<int > lis={1,2,3,4,5,6,7,8,9,0};
	for(auto p=lis.begin();p!=lis.end();p++)cout<<*p<<endl;
	
	cout<<&(*p)<<endl;
	auto p1=lis.begin();
	cout<<"&lis :"<<&(lis)<<endl;
 	cout<<"first node:"<<&(*p)<<endl;
	p1++;
	p1++;
	lis.erase(p1);//删除单个
	cout<<&(*p1)<<endl;
	p1=lis.begin();
	//p=lis.begin(); 会报错，在{}内定义的变量的作用域只能在{}，所以说C++中变量要先声明再去用
	cout<<&(*p1)<<endl;
	auto p2=lis.end();
	p2--;
	p2--;
	lis.erase(p1,p2);
	for( auto p=lis.begin();p!=lis.end();p++)cout<<*p<<endl;
	return 0;
}
