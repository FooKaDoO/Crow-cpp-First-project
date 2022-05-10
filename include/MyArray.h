#ifndef MYARRAY_H
#define MYARRAY_H

using namespace std;

template <class T>
class MyArray {

public:
    T * content;
private:
    unsigned int size;

public: 
    MyArray()
    : content {nullptr}, size {0}
    {}

    MyArray(const MyArray& a){
        size = a.size;
        content = new T[size];
        for (unsigned int i = 0; i < size; i++){
            content[i] = a.content[i];
        }
    }

    MyArray& operator = (const MyArray& a) {
        if (this != &a){
            delete[] content;
            size = a.size;
            content = new T[size];
            for (unsigned int i = 0; i < size; ++i){
                content[i] = a.content[i];
            }
        }
        return *this;
    }

    ~MyArray () {
        delete[] content;
    }

    unsigned int getSize() {
        return size;
    }

    void addElement(T element) {
        T * newContent = new T[size + 1];
        for (unsigned int i = 0; i < size; ++i) {
                newContent[i] = content[i];
        }
        newContent[size++] = element;
        content = newContent;
        
    }

    T& elementAt (unsigned int i) {
        if (i >= size) {
            throw string ( "IndexOutOfBoundsError");
        } 
        return content[i];
    }





};

#endif