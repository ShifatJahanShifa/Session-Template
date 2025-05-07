# Session-Template 
STL - Standard Template Library. STL containers store data and organize them in a specific manner as required. 
There are some STL containers. Below the details are given: 

## `Vector` 
It is the most common and useful container out there. The basic syntax of vector: 
```cpp
vector<type>vector_name();
```
Let's create a 1D vector now. 
```cpp
vector<int>v();
```
This is an empty vector. Let's populate the vector. 
```cpp
v={1,2,3};
or
v.push_back(1);
v.push_back(2);
v.push_back(3);
```
To know the size of the vector-
```cpp
v.size()
```
Now let's print the value of vector.
```cpp
for (int i = 0; i < 5; i++)
{
    cout<<v[i]<<" ";
}
```
Let's delete the last element.
```cpp
v.pop_back();
```
You can delete the every element in a vector by such.
```cpp
v.clear();
```
Let's check whether the vector is empty or not.
```cpp
if(v.empty())
{
    cout<<"vector is empty";
}
```


## `Set` 
It is can store unique value. The basic syntax of set: 
```cpp
set<type>set_name();
```
Let's create a set now. 
```cpp
set<int>st();
```
This is an empty set. Let's populate the set. 
```cpp
st.insert(1);
st.insert(2);
st.insert(3);
```
To know the size of the set-
```cpp
st.size()
```
Now let's print the value of set.
```cpp
for (auto it:st)
{
    cout<<it<<" ";
}
```
Let's erase an element. 
```cpp
st.erase(2);
```
You can delete the every element in a set by such.
```cpp
st.clear();
```
Let's check whether the set is empty or not.
```cpp
if(st.empty())
{
    cout<<"set is empty";
}
```
You can use count() function as a simple trick to know whether an element is in the set or not. Count() gives us the count of an element in a set. It is also used in multiset.
```cpp
if(st.count())
{
    cout<<"element exists in the set.";
}
```

## `Multiset` 
It is can store multiple copy of a value. The basic syntax of multiset: 
```cpp
multiset<type>multiset_name();
```
Let's create a multiset now. 
```cpp
set<int>mst();
```
This is an empty set. Let's populate the multiset. 
```cpp
mst.insert(1);
mst.insert(2);
mst.insert(3);
mst.insert(2);
```
To know the size of the multiset-
```cpp
mst.size()
```
Now let's print the value of multiset.
```cpp
for (auto it:mst)
{
    cout<<it<<" ";
}
```
Let's erase an element. 
```cpp
mst.erase(2); // it erases the first copy.
```
You can delete the every element in a multiset by such.
```cpp
mst.clear();
```
Let's check whether the set is empty or not.
```cpp
if(mst.empty())
{
    cout<<"multiset is empty";
}
```
You can use count() function as a simple trick to know whether an element is in the set or not. Count() gives us the count of an element in a set. It is also used in multiset.
```cpp
cout<<mst.count(2);
```

## `Map` 
It is can store key value pair. The basic syntax of set: 
```cpp
map<key,value>map_name;
```
Let's create a set now. 
```cpp
map<int,string>mp;
```
This is an empty map. Let's populate the map. 
```cpp
mp[1]='iit';
mp[2]='du';
```
To know the size of the map-
```cpp
mp.size();
```
Now let's print the value of map
```cpp
for(auto it:mp)
{
    cout<<"key: "<<it.first<<" "<<" Value: "<<it.second<<"\n";
}
```
You can delete the every element in a map by such.
```cpp
mp.clear();
```




## Summary
So, we have covered:
vector : 
1. size()
2. push_back()
3. pop_back()
4. empty()
5. clear()

set :
1. size()
2. insert()
3. erase()
4. empty()
5. clear()
6. count()

multiset :
1. size()
2. insert()
3. erase()
4. empty()
5. clear()

map :
1. size()
3. erase()
5. clear()



Moreover we have unordered map, unordered set, deque etc. You are expected to know about them and solve problems as much as possible.  

Happy Coding!
