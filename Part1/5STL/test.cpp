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
	//������ʵ����� ������ָ���±�   array,vector,deque   (array ���Ϊ˳�����Ҫָ����С��array<int,10>)
	//������ʵ������� �Զ�������ָ�룬����ָ���±꣬���ԱȽ�ָ��˳�� list ,map ,set
	// ˫�����������  ѭ������ָ�룬����ָ���±꣬�����ԱȽ�ָ��˳�� forward_list,unordered_map ,unordered_set
	//��Ҫ����begin()��end()���� 
	 //��������������ʵ����� �� 
	 
	 
	vector<int> values; 
	values.push_back(1);
	values.push_back(2);
	for(int i =0 ;i<values.size();i++) cout<<values[i]<<endl;
	vector<int>::iterator i;//������/�ߵı����ǰ�װ�����ָ��   
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
