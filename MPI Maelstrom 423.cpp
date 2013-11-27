#include <iostream>
#include "dijkstra.h"
using namespace std;
int main(int argc, char *argv[]) {
	Dijkstra D;
	D.read();
	D.calculateDistance();
	D.output();
}