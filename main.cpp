#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct student{
    string name1;
    string name2;
    int math;
    int physics;
    int it;
    int sred;
};

bool cmp(student a, student b){
    return a.sred>b.sred;
    }

int main()
{
    long long n;
    cout << "Number";
    cin >> n;
    vector <student> g(n);
    for (int i=0; i<n; i++){
            cout << "Student " << i+1 <<":";
            cin >> g[i].name1;
            cin >> g[i].name2;
            cin >> g[i].math;
            cin >> g[i].physics;
            cin >> g[i].it;

            g[i].sred=(g[i].math + g[i].physics + g[i].it)/3;
            }
    stable_sort(g.begin(), g.end(), cmp);
    cout << "Answer: ";
    for (int i=0; i<n; i++){
            cout << g[i].name1 << " " << g[i].name2;
    cout << endl;
    }
   return 0;
}
