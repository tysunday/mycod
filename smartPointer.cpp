#include <iostream>

template <typename T>
class SmartPointer {
public:
	SmartPointer(T* ptr) {
		this->ptr = ptr;
	}

	~SmartPointer() {
		delete ptr;
	}
	T& operator*() {
		return *ptr;
	}
private:
	T* ptr;
};

template<typename T>
class shared_ptr {
public:
	shared_ptr(T* ptr = nullptr) : ptr(ptr), counter(new size_t(1)) {}

	shared_ptr(shared_ptr& other)
		: ptr(other.ptr), counter(++other.counter) {
		++*counter;
	}

	shared_ptr(shared_ptr&& other)
		: ptr(other.ptr), counter(other.counter) {
		other.ptr = nullptr;
		other.counter = nullptr;
	}

	shared_ptr& operator=(shared_ptr const& other) {
		shared_ptr tmp;
		tmp.ptr = other.ptr;
		tmp.countercounter = other.counter;
		return tmp;
	}

	~shared_ptr() {
		if (*counter > 1) {
			--*counter;
			return;
		}
		delete ptr;
		delete counter;
	}

	T& operator*() const {
		return *ptr;
	}

	T* operator->() const {
		return ptr;
	}

	size_t use_count() const {
		return *counter;
	}
private:
	T* ptr = nullptr;
	size_t* counter = nullptr;

};

template <typename T>
class unique_ptr {
public:
	explicit unique_ptr(T* p = nullptr) : ptr(p) {
		std::cout << "consructor unique_ptr" << std::endl;
	}

	~unique_ptr() {
		delete ptr;
		std::cout << "desructor unique_ptr" << std::endl;
	}
	T& operator*() const { return *ptr; }
	T* operator->() const noexcept { return ptr; }
	T* get() const { return ptr; }
	T operator[](const int i) const { return ptr[i]; }
	T operator[](const int i) { return ptr[i]; }

	T* release() {
		T* tmp = ptr;
		ptr = nullptr;
		return tmp;
	}

	void reset(T* p) {
		delete ptr;
		ptr = p;
	}

	unique_ptr(unique_ptr const& other) = delete;				// Запрещает копирование объектов unique_ptr.
	unique_ptr& operator=(unique_ptr const& other) = delete;	// Запрещает присваивание объектов unique_ptr. 
	// Т.к.объекты unique_ptr уникальны.	
	unique_ptr& operator=(unique_ptr&& other) noexcept {		// Оператор перемещающего присваивания 
		reset(other.release()); // можно так или так:			// Т.к. объекты уникальны мы лишь можем передать этот указатель  
		// delete ptr					// другой переменной, но удалив старую.
		// ptr = other;
		// other = nullptr
		return *this;
	}

	unique_ptr(unique_ptr&& other) noexcept : ptr(other.release()) {}

private:
	T* ptr;
};

int main()
{
	int* p = new int(5);
	shared_ptr<int> sp = p;
	// shared_ptr<int> ssp = p; // так нельзя делать, а почему я не знаю.
	shared_ptr<int> ssp = sp; // а так можно.
	shared_ptr<int> s;
	std::cout << s.use_count() << std::endl;
	std::cout << sp.use_count() << std::endl;
	std::cout << ssp.use_count() << std::endl;
	/*for (int i = 0; i != 5; i++) {
		sp.
	}*/
	
}

void Unique_ptr_test() {
	int* point = new int[5];
	unique_ptr<int> pointers(point);
	for (int i{ 0 }; i != 5; i++) {
		pointers.get()[i] = 1; // this way we can change the data in the unique_ptr object.
		std::cout << i << " - " << pointers[i] << std::endl;
	}

	unique_ptr<int> temp;
	temp = (std::move(pointers));

	std::cout << "Temp: " << std::endl;
	for (int i{ 0 }; i != 5; i++) {
		temp.get()[i] = 1; // this way we can change the data in the unique_ptr object.
		std::cout << i << " - " << temp[i] << std::endl;
	}

	/* ******************THIS CODE THROW EXCEPTION.******************
	* BECAUSE WE GIVE CONTROL ANOTHER OBJECT AND THIS OBJECT WAS DELETED.
	*
	for (int i{ 0 }; i != 5; i++) {
		pointers.get()[i] = 1;
		std::cout << i << " - " << pointers[i] << std::endl;
	}
	*/

	//unique_ptr copy(pointers); // function is delete.
}