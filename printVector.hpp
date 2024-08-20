#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <set>

using namespace std;

void printVector2D(vector<vector<int>> graph){
	cout<<"Original Graph: "<<endl;
	for(int i=0; i<graph.size(); i++){
		for(int j=0; j<graph[i].size(); j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}