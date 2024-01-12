#include <iostream>
#include <vector>
using namespace std;
class Minheap{
    void heapify(int i)
    {
        if (i>=v.size() or i <=0)
        {
            return;
        }
        
        int left = 2*i;
        int right = 2*i + 1;
        

        // find min index  
        int min = i;
        min = i;
        if (left < v.size() and v[left]<v[min]){
            min = left;
        }
        if (right < v.size() and v[right]<v[min]){
            min = right;
        }
        if (min != i){
            swap(v[i], v[min]);
            heapify(min);
        }

    }
public: 
    vector<int>v;
    Minheap(){
        v.push_back(-1);
    }
    
    void push(int d)
    {
        v.push_back(d);
        int i = v.size()-1;
        int p = i/2;
        while (i > 1 && v[i] < v[p]){
            swap(v[i],v[p]);
            i = p;
            p  = i/2;
        }
    }
    int top()
    {
        return v[1];
    }
    void pop()
    {
        swap(v[1], v[v.size()-1]);
        v.pop_back();
        heapify(1);
        
    }
    void print()
    {
        for (int i=1; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    bool empty()
    {
        return v.size() == 1;
    }

    
};
int main()
{
    Minheap h;
    h.push(9);
    h.push(2);
    h.push(1);
    h.push(0);
    h.push(3);
    h.push(5);
    
    h.print();
    while(!h.empty()){
        // cout << h.top()<< " ";
        h.pop();
        h.print();
    }
    
    return 0;
}