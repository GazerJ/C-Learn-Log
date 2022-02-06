#include<iostream>
using namespace std;

template <class  elemType>//定义占位类型，再调用的时候用< 类型>对里面的占位类型更换
class array{
	public:
		int size;
		elemType data[1]; 
		array(int size,elemType data0){
		this->size=size;
		this->data[0]=data0;
		}
		void say(){
		cout<<"size:"<<this->size<<endl;
		cout<<"data0:"<<this->data[0];
		}

};


int main(){
	double *v;
	array<double *>  a(1,v);
	a.say();
	return 0;
}
