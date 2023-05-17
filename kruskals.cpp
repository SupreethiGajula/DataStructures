#include<iostream>
using namespace std;
class edge{
	Public:
		int source;
		int dest;
		int weight;
};
bool compare(edge e1, edge e2){
	return e1.weight<e2.weight;
}
void kruskals(edge *input,int n,int E){
	sort(input,input+E,compare);
	edge *output = new edge[n-1];
	int *parent = new int[n];
	int count=0;
	int i=0;
	while(count!=n-1){
		edge currentedge = input[i];
		int sourceparent = findparent(currentedge.source,parent);
		int destparent=findparent(currentedge.dest,parent);
		
		if(sourceparent!=destparent){
			output[count]=currentedge;
			count++;
		}
		i++;
	}
	for(int i=0;i<n-1;i++){
		if(output[i].source<output[i].dest){
			{
				cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
			}
			else{
				cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
			}
		}
	}
}
int main(){
	int n,E;
	cin>>n>>E;
	edge *input=new edge[E];
	for(int i=0;i<E;i++){
		int s,d,w;
		cin>>s>>d>>w;
		input[i].source=s;
		input[i].dest=d;
		input[i].weight=w;
	}
	kruskals(input,n,E);
}
