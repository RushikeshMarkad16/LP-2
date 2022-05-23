#include<bits/stdc++.h>
#define N 5
using namespace std;

void DFS(int adjmatrix[N][N],int start){
	int visited[N];
	for(int i=0;i<N;i++){
		visited[i]=0;
	}
	stack<int> s;
	s.push(start);
	visited[start]=1;
	while(!s.empty()){
		int curr=s.top();
		cout<<curr<<" ";
		s.pop();
		for(int v2=0;v2<N;v2++){
			if(adjmatrix[curr][v2]==1 && visited[v2]==0){
				visited[v2]=1;
				s.push(v2);
				break;
			}
		}
	}
}
void BFS(int adjmatrix[N][N],int start){
	int visited[N];
	for(int i=0;i<N;i++){
		visited[i]=0;
	}
	queue<int> q;
	q.push(start);
	visited[start]=1;
	while(!q.empty()){
		start=q.front();
		cout<<start<<" ";
		q.pop();
		for(int v2=0;v2<N;v2++){
			if(adjmatrix[start][v2]==1 && visited[v2]==0){
				visited[v2]=1;
				q.push(v2);
			}
		}
	}
}

int main(){
	int adjmatrix[N][N]{
	{0,1,0,0,1},
	{1,0,1,0,0},
	{0,1,0,1,0},
	{0,0,1,0,1},
	{1,0,0,1,0},
	};
	int start;
	cout<<"Enter Start Node: ";
	cin>>start;
	cout<<"DFS Traversal: ";
	DFS(adjmatrix,start);
	cout<<endl;
	cout<<"BFS Traversal: ";
	BFS(adjmatrix,start);
	
}
