#include <iostream>
#include <map>
#include <vector>
#include <set>
#include "graph.h"
using namespace std;

int main()
{
    Graph <int, int> A;
    int V, E;
    cin>>V>>E;
    for (int i = 0; i < V; ++i){
        Vetex<int> vtx(i);

             A.add_vtx(vtx);

    }

    for (int i = 0; i < E; ++i){
        int f, s;
        cin>>f>>s;
        Edge<int> edg(f, s);
        try{
            A.add_edg(edg);
        } catch(const char * &exp){
            cout<<exp;
            --i;
        }
    }

    std::list<std::set<Vetex<int> > > answer;
    answer = A.coherency();
    typename list <set<Vetex<int> > >::iterator itr_list;
    set<Vetex<int> >::iterator itr_set;
    for (itr_list = answer.begin(); itr_list != answer.end(); ++itr_list) {
        for (itr_set = (*itr_list).begin(); itr_set !=(*itr_list).end(); ++itr_set) {
            cout<<(*itr_set);
        }
        cout<<endl<<endl<<endl;
    }


    return 0;
}

