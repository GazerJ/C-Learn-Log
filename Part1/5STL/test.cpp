/*
Maker : GazerJ
Date: 2021.12.30
What: *** app in Sever/Client Computer
How: ***
Way: Init=>*=>*=>*=>*=>*=>*=>Close
*/
#include <iostream>
#include <vector>
#include <array>
#include <deque> 
using namespace std;
int main(){
	//随机访问迭代器 ：可以指定下标   array,vector,deque   (array 理解为顺序表，需要指定大小如array<int,10>)
	//单项访问迭代器： 自动单链表指针，不能指定下标，可以比较指针顺序 list ,map ,set
	// 双向迭代其器：  循环链表指针，不能指定下标，不可以比较指针顺序 forward_list,unordered_map ,unordered_set
	//主要的由begin()和end()方法 
	 //迭代器：随机访问迭代器 ： 
	 
	 
	vector<int> values; 
	values.push_back(1);
	values.push_back(2);
	for(int i =0 ;i<values.size();i++) cout<<values[i]<<endl;
	vector<int>::iterator i;//迭代器/者的本质是包装过后的指针   
	for (i=values.begin();i<values.end();i++) cout<<*i<<endl;
	for (i=values.begin();i!=values.end();i++) cout<<*i<<endl;
	array<int ,10> v{1,1,2,3,4,5,5,6,6,6};
	for(int i =0 ;i<v.size();i++) cout<<v[i]<<endl;
	int j=0;
	for(int i= 0;i<v.size();i++){
		if( v[i]==v[i+1]){
			for(j=i;j<v.size();j++){
				if (v[i]!=v[j]){
					for(int k=i;k<j;k++){
						v[k]='\0';
					}
					break;
				}
				if( j==v.size()-1){
					for(int k=i;k<j+1;k++){
						v[k]='\0';
					}
					break;
				}
			}
		}
	}
	
	for(int i =0 ;i<v.size();i++) cout<<v[i]<<endl;
	
	cout << "-------------This is line-------------"<<endl;
	vector<int> vd={1,2,3,4,5,6,7,8};
	int n=3;
	auto pdel=vd.begin()+n;
	vd.erase(pdel);

	for(int i =0 ;i<vd.size();i++) cout<<vd[i]<<endl;

	vd.insert(vd.begin()+2,100);

	for(int i =0 ;i<vd.size();i++) cout<<vd[i]<<endl;
	return 0;
}
