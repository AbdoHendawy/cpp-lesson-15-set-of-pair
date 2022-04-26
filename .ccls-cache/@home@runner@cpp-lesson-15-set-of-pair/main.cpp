#include <iostream>
#include <string>
#include <utility>
#include <set>
using namespace std;
int main() {
    set<pair<string,pair<int,int> > > s;
    pair<string,pair<int,int> > p;
    for(int i=0;i<3;i++){
        cout<<"Enter name: ";
        cin>>p.first;
        cout<<"1)Enter number: ";
        cin>>p.second.first;
        cout<<"2)Enter number: ";
        cin>>p.second.second;
        s.insert(p);
    }
    set<pair<string,pair<int,int> > >::iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout<<(*it).first<<"\n first Number "<<(*it).second.first<<"\n second Number "<<(*it).second.second<<endl;
}