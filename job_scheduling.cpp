#include<bits/stdc++.h>
using namespace std;

struct Job{
	int id;
	int deadline;
	int profit;
};

bool compare(Job a,Job b){
	if(a.profit==b.profit)
		return a.deadline<b.deadline;
	return a.profit>b.profit;
}

int main(){
	int n;
	cout<<"Enter Number of Jobs: ";
	cin>>n;
	vector<Job>v(n);
	cout<<"Enter id, deadline, profit of each job:\n";
	for(int i=0;i<n;i++){
		cin>>v[i].id;
		cin>>v[i].deadline;
		cin>>v[i].profit;
	}
	sort(v.begin(),v.end(),compare);
	int res[n+1];
	for(int i=0;i<n+1;i++){
		res[i]=0;
	}
	int result=0;
	for(int i=0;i<n;i++){
		for(int j=v[i].deadline;j>0;j--){
			if(res[j]==0){
				res[j]=v[i].id;
				result+=v[i].profit;
				break;
			}
		}
	}
	cout<<"Maximum Profit is: "<<result<<endl;
	cout<<"Sequence of Job for Maximum Profit is: ";
	for(int i=1;i<=n;i++){
		if(res[i]!=0)
			cout<<res[i]<<" ";
	}
	return 0;
}
