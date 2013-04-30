
#include "vectors.h"

template<typename Object>
ArrayVector<Object>::ArrayVector(int initCap)
			: capacity(initCap) , numberOfElements(0){
	array = new Object[capacity];
}
template<typename Object>
ArrayVector<Object>::~ArrayVector(){
}

template <typename Object>
int ArrayVector<Object>::size() const{
	return numberOfElements;
}

template <typename Object>
bool ArrayVector<Object>::isEmpty() const {
	return numberOfElements==0;
}

template <typename Object>
Object& ArrayVector<Object>::elemAtRank(int r){
	return array[r];
}

template <typename Object>
void ArrayVector<Object>::replaceAtRank(int r, const Object& e){
	if(r<=numberOfElements){
		array[r] = e;
	}
}

template <typename Object>
void ArrayVector<Object>::removeAtRank(int r){
	if(r<=numberOfElements){
			for(int i=r; i<numberOfElements-1;i++){
				array[i]= array[i+1];
			}
			numberOfElements--;
		}
}

template <typename Object>
void ArrayVector<Object>::insertAtRank(int r, const Object& e){
	if(r<=numberOfElements&&r>=0){
		if(numberOfElements==capacity){
			overflow();
		}
		for(int i=numberOfElements; i>r;i--){
			array[i]= array[i-1];
		}
		array[r]=e;
		numberOfElements++;
	}
}

template <typename Object>
void ArrayVector<Object>::overflow(){
	Object* tempArray = new Object[capacity*2];
	for(int i=0; i<numberOfElements; i++){
		tempArray[i] = array[i];
	}

	delete []array;

	capacity = capacity*2;
	array = tempArray;

}








