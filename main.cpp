#include "solutionNine.hpp"
#include "printVector.hpp"

int main(){

	SolutionNine solution9;
	int seats=5;
	vector<vector<int>> graph={{0,1},{0,2},{0,3}};
	long long output=solution9.minimumFuelCost(graph,seats);
	printVector2D(graph);
	cout<<"answer: "<<endl;
	cout<<output<<endl;

	return 0;
}