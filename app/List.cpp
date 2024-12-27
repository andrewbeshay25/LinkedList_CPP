/*
 *
 *  List.cpp
 *
 */

#include <iostream> 
using namespace std;

template <typename E>

class List {
	protected:
		
		template <typename T>
		
		class Node {
			public:
				T data;
				Node* next;

				Node(T data) : data(data), next(nullptr) {}
		};

	public:
		virtual void insert(E data) = 0;
		virtual void remove(E data) = 0;
		virtual E retrieve(int index) = 0;
		virtual bool search(E data) = 0;
	
	protected:
		Node* head;
};
