#include <vector>
template<class tem>
class DynArray{
	std::vector<tem> t;
	public:
		tem& operator[](int index){
			return t[index];
		}
		void add(tem n){
			t.push_back(n);
		}
		int size(){
			return t.size();
		}
};
