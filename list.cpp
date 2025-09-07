#include<iostream>
#include<list>
using namespace std;

void display(list<int> &li){
list <int> :: iterator ml;
for(ml=li.begin();ml!=li.end();ml++)
{
cout << *ml <<" ";
}
cout <<endl;
}

int main()
{
list<int> list1;
list1.push_back(827);
list1.push_back(125);
list1.push_back(262);
//display(list1);

list<int> list2(3);
list<int> :: iterator iter=list2.begin();

*iter=56;
iter++;
*iter=96;
iter++;
*iter=73;
iter++;
list1.merge(list2);
display(list1);
    return 0;
}