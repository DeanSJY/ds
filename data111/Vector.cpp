#include <algorithm>

using namespace std ;

template <typename Object>
class Vector
{
	public:
		explicit Vector(int initSize = 0):theSize{initSize},
			theCapacity{initSize + SPARE_CAPACITY}
		{objects = new Object[theCapacity];}

		Vector(const Vector & rhs) :theSize{rhs.theSize},
			theCapacity{rhs.theCapacity},objects{nullptr}
		{
		objects = new Object[theCapacity];
		for(int k=0;k<theSize;++k)
			objects[k]= rhs.objects[k];
		}
		Vector & operator=(const Vector & rhs)
		{
		Vector copy = rhs;
		std::swap(*this copy);
		return *this;
		}

		~Vector()
		{delete [] objects;}

		Vector (Vector && rhs) : theSize{rhs.theSize},
			theCapacity{rhs.theCapacity},objects{rhs.objects}
		{
		rhs.objects = nullptr;
		rhs.theSize = 0;
		rhs.theCapacity = 0;
		}

		Vector & operator=(Vector && rhs)
		{
			std::swap(theSize);
			std::swap(theCapacity,rhs.theCapacity);
			std::swap(objects,rhs.objects);

			return *this;
		}
		void resize(int newSize)
		{
			if(newSize>theCapacity)
				reserve(newSize *2);
		}

		void reserve(int newCapacity)
		{
			if (newCapacity < theSize)
				return ;
			Object *newArray = new Object[newCapacity];
				for(int k =0;k<theSize;++k)
					newArray[k]=std::move(objects[k]);

				theCapacity = newCapacity;
				std::swap(objects,newArray);
				delete[] newArray;
		};

}

void vector_usage_1(){
	vector<int> a(10, 0) ;      //大小为10初值为0的向量a

        //对其中部分元素进行输入
        cin >>a[2] ;
        cin >>a[5] ;
        cin >>a[6] ;

        //全部输出
		vector<int>::iterator t;
		for(t=a.begin();t!=a.end();t++)
			cout<<*t<<" ";
        return 0 ;
}