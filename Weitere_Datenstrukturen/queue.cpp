/*
    erstellt: 23/05/2021
   
    Example:
    Queue (priority_queue)
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <fstream>
#include <utility> 
#include <map>
#include <queue>

using namespace std;

int main(int argc, const char * argv[]) {
    
    priority_queue<pair<int, string>> pq;
    
    pq.push(pair<int, string>(123, "Hallo"));
    pq.push(pair<int, string>(555, "Welt"));
    pq.push(pair<int, string>(50, "Mars"));
    
    cout << pq.top().second << ": " << pq.top().first << endl;
    pq.pop();
    cout << pq.top().second << ": " << pq.top().first << endl;
   pq.pop();
    cout << pq.top().second << ": " << pq.top().first << endl;
}
