#include<bits/stdc++.h>
using namespace std;
#define size 4
bool isSafe(int v[size][size],int r,int c){
	for(int i=r-1,j=c;i>=0;i--){
		if(v[i][j]==1)
			return false;
	}
	for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--){
		if(v[i][j]==1)
			return false;
	}
	for(int i=r-1,j=c+1;i>=0 && j<size;i--,j++){
		if(v[i][j]==1)
			return false;
	}

	return true;
}
bool n_queen(int v[size][size],int r){
	if(r>=size){
		return true;
	}
	for(int c=0;c < size;c++){
		if(isSafe(v,r,c)){
			v[r][c]=1;
			if(n_queen(v,r+1))
				return true;
			v[r][c]=0;
		}
	}
	return false;
}
int main(){
	int v[size][size];
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			v[i][j]=0;
		}
	}
	n_queen(v,0);
	cout<<"Output for N queen problem:\n";
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
