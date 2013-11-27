#include<iostream>
#define INFINITY 999
 
using namespace std;
 
class Dijkstra{
	private:
		int adjMatrix[15][15];
		int predecessor[15],distance[15];
		bool mark[15]; //keep track of visited node
		int source;
		int numOfVertices;
	public:
		void read();
		void initialize();

		int getClosestUnmarkedNode();
		void calculateDistance();
 
		 void output();
		void printPath(int);
};
 
 
void Dijkstra::read(){
	int temp=0;
	cin>>numOfVertices;
	for(int i=1;i<numOfVertices;i++) {
		for(int j=0;j<i;j++) {
			cin>>temp;
			if (temp == -1)
				temp = 999;
			adjMatrix[i][j] = temp;
		}
	}
	for(int i=0;i<numOfVertices;i++){
		adjMatrix[i][i]=0;
	}
	for (int i=1;i<numOfVertices;i++) {
		for (int j=0;j<i;j++) {
			adjMatrix[j][i]=adjMatrix[i][j];
		}
	}
	
    
    source=0;
}
 
 
void Dijkstra::initialize(){
    for(int i=0;i<numOfVertices;i++) {
        mark[i] = false;
        predecessor[i] = -1;
        distance[i] = INFINITY;
    }
    distance[source]= 0;
}
 
 
int Dijkstra::getClosestUnmarkedNode(){
    int minDistance = INFINITY;
    int closestUnmarkedNode;
    for(int i=0;i<numOfVertices;i++) {
        if((!mark[i]) && ( minDistance >= distance[i])) {
            minDistance = distance[i];
            closestUnmarkedNode = i;
        }
    }
    return closestUnmarkedNode;
}
 
 
void Dijkstra::calculateDistance(){
    initialize();
    int minDistance = INFINITY;
    int closestUnmarkedNode;
    int count = 0;
    while(count < numOfVertices) {
        closestUnmarkedNode = getClosestUnmarkedNode();
        mark[closestUnmarkedNode] = true;
        for(int i=0;i<numOfVertices;i++) {
            if((!mark[i]) && (adjMatrix[closestUnmarkedNode][i]>0) ) {
                if(distance[i] > distance[closestUnmarkedNode]+adjMatrix[closestUnmarkedNode][i]) {
                    distance[i] = distance[closestUnmarkedNode]+adjMatrix[closestUnmarkedNode][i];
                    predecessor[i] = closestUnmarkedNode;
                }
            }
        }
        count++;
    }
}

 
void Dijkstra::output(){
	int big=-999;
	for(int i=0;i<numOfVertices;i++) {
		if (big<distance[i]){
			big = distance[i];
		}
    }
	cout << big;
}