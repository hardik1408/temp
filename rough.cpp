#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}

int main()
{
	vector<int> vec1;
	for(int i=0;i<4;i++)
	{
		int ele;
		cin>>ele;
		vec1.push_back(ele);

	}
	vector<int>::iterator iter=vec1.begin();
	vec1.insert(iter+2,89,69);
	display(vec1);
	return 0;
}