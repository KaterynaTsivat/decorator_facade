#include <list>
#include <ostream>
#include <istream>
#include <algorithm>
#include <functional>
#include <numeric>

template <typename T>
class MyList
{
protected:
	std::list<T> list;
	int num = 0, valu = 0;
public:
	MyList() {}

	void push_back(T val) {
		list.push_back(val);
	}

	void push_front(T val) {
		list.push_front(val);
	}
	std::list<T> getList() {
		return list;
	}

	void clear_all() {
		list.clear();
	}
		
	void inserting_values(int num, int valu) {
		for (int i = 0 ; i <= num; i++)
			list.push_back(valu); 
	}

	int size_list() {
		return list.size();
	}

	~MyList() {}
};

