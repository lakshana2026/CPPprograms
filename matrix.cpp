
#include <iostream>
#include <cassert>
using namespace std;

class Matrix
{
private:
    int data[2][2];

public:
    // Parameterized Constructor
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0)
    {
        data[0][0] = a;
        data[0][1] = b;
        data[1][0] = c;
        data[1][1] = d;
    }

    // Operator +
    Matrix operator+(const Matrix &m) const
    {
        Matrix result;

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.data[i][j] = data[i][j] + m.data[i][j];

        return result;
    }

    // Operator -
    Matrix operator-(const Matrix &m) const
    {
        Matrix result;

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.data[i][j] = data[i][j] - m.data[i][j];

        return result;
    }

    // Operator *
    Matrix operator*(const Matrix &m) const
    {
        Matrix result;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                result.data[i][j] = 0;

                for (int k = 0; k < 2; k++)
                    result.data[i][j] += data[i][k] * m.data[k][j];
            }
        }

        return result;
    }

    // Operator ==
    bool operator==(const Matrix &m) const
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (data[i][j] != m.data[i][j])
                    return false;
            }
        }

        return true;
    }

    // Operator []
    int* operator[](int index)
    {
        return data[index];
    }

    // Operator <<
    friend ostream& operator<<(ostream &out, const Matrix &m)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                out << m.data[i][j] << " ";

            out << endl;
        }

        return out;
    }
};

int main()
{
    Matrix A(2, 4, 6, 8);
    Matrix B(1, 3, 5, 7);

    Matrix sum = A + B;
    Matrix difference = A - B;
    Matrix product = A * B;

    // Unit Tests
    assert(sum[0][0] == 3);
    assert(sum[1][1] == 15);

    assert(difference[0][0] == 1);
    assert(difference[1][1] == 1);

    assert(product[0][0] == 22);
    assert(product[0][1] == 34);
    assert(product[1][0] == 46);
    assert(product[1][1] == 74);

    assert(A == A);
    assert(!(A == B));

    cout << "Matrix A:" << endl;
    cout << A;

    cout << "Matrix B:" << endl;
    cout << B;

    cout << "Addition of Matrices:" << endl;
    cout << sum;

    cout << "Subtraction of Matrices:" << endl;
    cout << difference;

    cout << "Multiplication of Matrices:" << endl;
    cout << product;

    cout << "Are A and A equal? "
         << (A == A ? "Yes" : "No") << endl;

    cout << "Are A and B equal? "
         << (A == B ? "Yes" : "No") << endl;

    cout << "All unit tests passed successfully." << endl;

    return 0;
}

