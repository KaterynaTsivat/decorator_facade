#include <list>
#include <ostream>
#include <istream>
#include <algorithm>
#include <functional>
#include <numeric>

template <typename T>

class MyList
{
	// typedef typename T type;
protected:
	std::list<T> list;
	int num = 0, valu = 0;
public:
	MyList() {}

	void push_back(int val) {
		list.push_back(val);
	}

	std::list<T> getList() {
		return list;
	}

	void clear_all() {
		list.clear();
	}

	void front_numbers() {
		list.front();
	}

	/*void emplace_number(T iter, T val) {
		list.insert(iter, val);
	}*/
		
	void inserting_values(int num, int valu) {
		for (int i = 0 ; i <= num; i++)
			list.push_back(valu); 
	}

	int size_list() {
		return list.size();
	}

	~MyList() {}
};

