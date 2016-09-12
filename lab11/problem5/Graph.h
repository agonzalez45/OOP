#ifndef LA9_Graph_h
#define LA9_Graph_h

#include "Vertex.h"

using namespace std;

class Graph {
public:
    
    /*! A collection of vertices */
    vector<Vertex*> items;
    
    /*! A method to add a vertex to the items vector */
    void add(Vertex* d){
        //insert your code here
        d->ref();
        items.push_back(d);
    }
    
    /*! A method to display the graph as pairs of vertices */
    void print (){
        //insert your code here
        string c, d;
        for (std::vector<Vertex*>::iterator it = items.begin(); it != items.end(); it = it + 2){
            Vertex *i = *it;
            Vertex *j = *(it + 1);
            c = i->getLabel();
            d = j->getLabel();
            cout << c << " - " << d << endl;
        }
    }
    
    /*! A method to free up all the space taken up by the graph */
    void deleteAll(){
        //insert your code here
        for (std::vector<Vertex*>::iterator it = items.begin(); it != items.end(); it++){
            Vertex *i = *it;
            i->unref();
        }
    }
};

#endif