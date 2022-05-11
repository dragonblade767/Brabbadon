#include "Mathematics.hpp"

int Brabbadon::Core::Maths::randomInt()
{
    return rand() % 100;
}
int Brabbadon::Core::Maths::randomInt(int startNr, int endNr)
{
    return rand() % endNr-startNr + startNr;
}
float Brabbadon::Core::Maths::randomFloat()
{
    return static_cast<float>(rand() % 1000)/10;
}
float Brabbadon::Core::Maths::randomFloat(int startNr, int endNr, int decPlaces)
{
    return static_cast<float>(rand() % (endNr-startNr) + startNr) / decPlaces;
}
double Brabbadon::Core::Maths::randomDouble()
{
    return rand() % 100;
}
double Brabbadon::Core::Maths::randomDouble(int startNr, int endNr, int decPlaces)
{
    return static_cast<float>(rand() % endNr-startNr + startNr) / pow(10, decPlaces);
}

int Brabbadon::Core::Maths::min(vector<int> &vec)
{
    int minimal = vec[0];
    for(int i=0;i<static_cast<int>(vec.size());i++) if(vec[i]<minimal) minimal = vec[i];
    return minimal;
}
int Brabbadon::Core::Maths::max(vector<int> &vec)
{
    int maximal = vec[0];
    for(int i=0;i<static_cast<int>(vec.size());i++) if(vec[i]>maximal) maximal = vec[i];
    return maximal;
}
float Brabbadon::Core::Maths::min(vector<float> &vec)
{
    float minimal = vec[0];
    for(int i=0;i<static_cast<int>(vec.size());i++) if(vec[i]<minimal) minimal = vec[i];
    return minimal;
}
float Brabbadon::Core::Maths::max(vector<float> &vec)
{
    float maximal = vec[0];
    for(int i=0;i<static_cast<int>(vec.size());i++) if(vec[i]>maximal) maximal = vec[i];
    return maximal;
}
double Brabbadon::Core::Maths::min(vector<double> &vec)
{
    double minimal = vec[0];
    for(int i=0;i<static_cast<int>(vec.size());i++) if(vec[i]<minimal) minimal = vec[i];
    return minimal;
}
double Brabbadon::Core::Maths::max(vector<double> &vec)
{
    double maximal = vec[0];
    for(int i=0;i<static_cast<int>(vec.size());i++) if(vec[i]>maximal) maximal = vec[i];
    return maximal;
}

int Brabbadon::Core::Maths::min(int *arr, int size)
{
    int minimal = arr[0];
    for(int i=0;i<size;i++) if(arr[i]<minimal) minimal = arr[i];
    return minimal;
}
int Brabbadon::Core::Maths::max(int *arr, int size)
{
    int maximal = arr[0];
    for(int i=0;i<size;i++) if(arr[i]>maximal) maximal = arr[i];
    return maximal;
}
float Brabbadon::Core::Maths::min(float *arr, int size)
{
    float minimal = arr[0];
    for(int i=0;i<size;i++) if(arr[i]<minimal) minimal = arr[i];
    return minimal;
}
float Brabbadon::Core::Maths::max(float *arr, int size)
{
    float maximal = arr[0];
    for(int i=0;i<size;i++) if(arr[i]>maximal) maximal = arr[i];
    return maximal;
}
double Brabbadon::Core::Maths::min(double *arr, int size)
{
    double minimal = arr[0];
    for(int i=0;i<size;i++) if(arr[i]<minimal) minimal = arr[i];
    return minimal;
}
double Brabbadon::Core::Maths::max(double *arr, int size)
{
    double maximal = arr[0];
    for(int i=0;i<size;i++) if(arr[i]>maximal) maximal = arr[i];
    return maximal;
}

void Brabbadon::Core::Maths::swapNumbers(int &num1, int &num2)
{
    int num3 = num1;
    num1 = num2;
    num2 = num3;
}
void Brabbadon::Core::Maths::swapNumbers(float &num1, float &num2)
{
    float num3 = num1;
    num1 = num2;
    num2 = num3;
}
void Brabbadon::Core::Maths::swapNumbers(double &num1, double &num2)
{
    double num3 = num1;
    num1 = num2;
    num2 = num3;
}

long long Brabbadon::Core::Maths::factorial(double num)
{
    if (num == 1) return 1;
    return num * factorial(num-1);
}

vector2int::vector2int() {}
vector2int::vector2int(int a, int b) : x(a), y(b) {}
vector2float::vector2float() {}
vector2float::vector2float(float a, float b) : x(a), y(b) {}
vector2double::vector2double() {}
vector2double::vector2double(double a, double b) : x(a), y(b) {}

Matrix::Matrix()
{

}
Matrix::Matrix(double value, int sizeX, int sizeY)
{
    setSize({sizeX, sizeY});
    setValue(value);
}
Matrix::Matrix(vector<vector<double>> data)
{
    matrix = data;
}
void Matrix::matrixInput()
{
    int a, b;
    cout << "Please enter size of matrix:";
    cin >> a >> b;

    for(int i=0; i<b; i++)
    {
        vector<double> temp;
        for(int j=0; j<a; j++)
        {
            double val;
            cout << "Please enter value for (" << i << ", " << j << "):";
            cin >> val;
            temp.emplace_back(val);
        }
        matrix.emplace_back(temp);
    }
    cout << "Matrix complete" << endl;
}

void Matrix::matrixInput(vector<vector<double>> data)
{
    matrix = data;
}

void Matrix::matrixOutput()
{
    if (matrix.size() == 0) cout << "empty" << endl;
    else for(auto &v : matrix)
    {
        cout << "| ";
        for(auto &b : v)
        {
            cout << b << " ";
        }
        cout << "|" << endl;
    }
}
void Matrix::setValue(double value)
{
    for(auto &v : matrix)
    {
        for(auto &b : v)
        {
            b = value;
        }
    }
}
vector2int Matrix::getSize()
{
    return vector2int(matrix[0].size(), matrix.size());
}
void Matrix::calculateDet()
{
    cout << "under construction" << endl;
}
void Matrix::matrixshortener()
{
    cout << "under construction" << endl;

}
void Matrix::setSize(vector2int size)
{
    matrix.clear();
    vector<vector<double>> temp(size.y, std::vector<double>(size.x));
    matrix = temp;
}
void Matrix::ones()
{
    for(auto &v : matrix)
    {
        for(auto &b : v)
        {
            b = 1;
        }
    }
}
void Matrix::zeroes()
{
    for(auto &v : matrix)
    {
        for(auto &b : v)
        {
            b = 0;
        }
    }
}
void Matrix::identity()
{
    for(int i=0; i < matrix.size(); i++)
    {
        for(int j=0; j < matrix[0].size(); j++)
        {
            if (i==j) matrix[i][j] = 1;
            else matrix[i][j] = 0;
        }
    }
}

void Matrix::transpose()
{
    Matrix temp = matrix;
    for(int i=0; i < matrix.size(); i++)
    {
        for(int j=0; j < matrix[0].size(); j++)
        {
            temp.matrix[i][j] = matrix[j][i];
        }
    }
    matrix = temp.matrix;
}

Matrix Matrix::operator*(int other)
{
    for(auto &v : matrix)
    {
        for(auto &b : v)
        {
            b = b * other;
        }
    }
    return matrix;
}

Matrix Matrix::operator*(float other)
{
    for(auto &v : matrix)
    {
        for(auto &b : v)
        {
            b = b * other;
        }
    }
    return matrix;
}

Matrix Matrix::operator*(double other)
{
    for(auto &v : matrix)
    {
        for(auto &b : v)
        {
            b = b * other;
        }
    }
    return matrix;
}

Complex::Complex() : Real(0), Imaginary(0) {}
Complex::Complex(double real, double imaginary) : Real(real), Imaginary(imaginary) {}
Complex Complex::operator+(Complex other) { return Complex(Real + other.Real, Imaginary + other.Imaginary);}
Complex Complex::operator-(Complex other) { return Complex(Real - other.Real, Imaginary - other.Imaginary);}
Complex Complex::operator*(Complex other) { return Complex(Real * other.Real, Imaginary * other.Imaginary);}
Complex Complex::operator/(Complex other) { return Complex(Real / other.Real, Imaginary / other.Imaginary);}
Complex Complex::operator=(Complex other) { return Complex(other.Real, other.Imaginary);}
ostream& Brabbadon::Core::Maths::operator<<(ostream& os, Complex nr)
{
    if (nr.Imaginary > 0)
        return os << nr.Real << "+j" << nr.Imaginary;
    else
        return os << nr.Real << "-j" << nr.Imaginary*-1;
}
