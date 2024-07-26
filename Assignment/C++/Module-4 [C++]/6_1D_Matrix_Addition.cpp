// 6. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
#include <vector>
using namespace std;

class Matrix
{
	public:
	vector<int> data;
	
    Matrix(int size) : data(size) {}

    int& operator[](int index)
	{
        return data[index];
    }

    Matrix operator+(const Matrix& other) const
	{
        Matrix result(data.size());
        for(size_t i = 0; i < data.size(); i++)
		{
            result[i] = data[i] + other.data[i];
        }
        return result;
    }

    void display() const
	{
        for (size_t i = 0; i < data.size(); i++)
		{
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};

main()
{
    int size;
    std::cout<<"Enter the size of the matrices: ";
    std::cin>>size;

    Matrix mat1(size), mat2(size);

    std::cout<<"Enter elements of first matrix: ";
    for(int i = 0; i < size; ++i)
	{
        std::cin>>mat1[i];
    }

    std::cout<<"Enter elements of second matrix: ";
    for (int i = 0; i < size; ++i)
	{
        std::cin>>mat2[i];
    }

    Matrix result = mat1 + mat2;

    std::cout<<"Resultant matrix after addition: ";
    result.display();
}

