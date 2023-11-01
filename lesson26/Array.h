#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Array
{
	int m_size;
	T* m_arr;
public:
	Array() {
		m_arr = nullptr;
		m_size = 0;
	}
	Array(T val, int size = 0) {
		m_size = size;
		m_arr = new T[m_size];
		for (int i = 0; i < m_size; i++)
		{
			m_arr[i] = val;
		}
	}
	~Array() {
		if (m_arr != nullptr) delete[] m_arr;
	}

	void print()const {
		if (m_size == 0) cout << "Array is empty!\n";
		else
		{
			for (int i = 0; i < m_size; i++)
			{
				cout << m_arr[i] << " ";
			}
			cout << endl << endl;
		}
	}

	int size()const {
		return m_size;
	}

	T front()const{
		return m_arr[0];
	}

	T back()const {
		return m_arr[m_size - 1];
	}

	void push(T item) {
		T* tmp = new T[++m_size];
		for (int i = 0; i < m_size-1; i++)
		{
			tmp[i] = m_arr[i];
		}
		tmp[m_size - 1] = item;
		if (m_arr != nullptr) delete[] m_arr;
		m_arr = tmp;
	}

	void insert(T item, int pos = 0) {
		T* tmp = new T[++m_size];
		for (int i = 0, j = 0; i < m_size; i++)
		{
			if (i < pos) {
				tmp[j++] = m_arr[i];
			}
			else if(i == pos)
			{
				tmp[j++] = item;
			}
			else
			{
				tmp[j++] = m_arr[i - 1];
			}
		}
		if (m_arr != nullptr) delete[] m_arr;
		m_arr = tmp;
	}

	void erase(int pos) {
		T* tmp = new T[--m_size];
		for (int i = 0; i < m_size; i++) {
			if (i < pos) tmp[i] = m_arr[i];
			else tmp[i] = m_arr[i + 1];
		}
		if (m_arr != nullptr) delete[] m_arr;
		m_arr = tmp;
	}

	T find_max()const {
		T max = m_arr[0];
		for (int i = 0; i < m_size; i++)
		{
			if (max<m_arr[i]) max = m_arr[i];
		}
		return max;
	}
	T find_min()const {
		T min = m_arr[0];
		for (int i = 0; i < m_size; i++)
		{
			if (min > m_arr[i]) min = m_arr[i];
		}
		return min;
	}

	void sort() {

		for (int i = 0; i < m_size; i++)
		{
			for (int j = 0; j < m_size-i-1; j++)
			{
				if (m_arr[j]>m_arr[j+1])
				{
					T buf = m_arr[j];
					m_arr[j] = m_arr[j + 1];
					m_arr[j + 1] = buf;
				}
			}
		}
	}

	T& at(int k) {
		return m_arr[k];
	}		//доступ к элементу массива по позиции К

	T& operator[](int k) {
		return m_arr[k];
	} //доступ к элементу массива по позиции К


	int count_if(bool (*func)(T)) {
		int counter = 0;
		for (int i = 0; i < m_size; i++)
			if (func) counter++;
	}	 // подсчет количества элементов массива по условию

	int firstfind_if(bool (*func)(T)) {
		int ind = -1;
		for (int i = 0; i < m_size; i++)
			if (func) { ind = i; break; }
		return ind;
	} //поиск позиции первого элемента массива по условию

};

