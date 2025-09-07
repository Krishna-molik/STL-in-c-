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
//It creates list1, adds elements (827, 125, 262) using push_back, and creates list2 with 3 elements, which are assigned values (56, 96, 73) using an iterator. The merge function combines list2 into list1, sorting them, and display prints the merged list (56, 73, 96, 125, 262, 827). The display function uses an iterator to traverse and print list elements.
