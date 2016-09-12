#ifndef OBJECT_H
#define OBJECT_H

using namespace std;

class Object{
	public:
    static int count;
    Object(){
		count++;
	}
	Object(const Object& o){
		count++;
	}
};

#endif