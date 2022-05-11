#pragma once
#include <iostream>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;

namespace Brabbadon::Core::Maths
{

    int randomInt();
    int randomInt(int startNr, int endNr);
    float randomFloat();
    float randomFloat(int startNr, int endNr, int decPlaces);
    double randomDouble();
    double randomDouble(int startNr, int endNr, int decPlaces);
    int min(vector<int> &vec);
    int max(vector<int> &vec);
    float min(vector<float> &vec);
    float max(vector<float> &vec);
    double min(vector<double> &vec);
    double max(vector<double> &vec);
    int min(int *arr, int size);
    int max(int *arr, int size);
    float min(float *arr, int size);
    float max(float *arr, int size);
    double min(double *arr, int size);
    double max(double *arr, int size);
    void swapNumbers(int &num1, int &num2);
    void swapNumbers(float &num1, float &num2);
    void swapNumbers(double &num1, double &num2);
    long long factorial(double num);

    struct vector2float
    {
        float x;
        float y;
        vector2float();
        vector2float(float a, float b);
    };
    struct vector2int
    {
        int x;
        int y;
        vector2int();
        vector2int(int a, int b);
    };
    struct vector2double
    {
        double x;
        double y;
        vector2double();
        vector2double(double a, double b);
    };

    class Matrix
    {
    public:
        vector<vector<double>> matrix;
        Matrix();
        Matrix(double value, int sizeX, int sizeY);
        Matrix(vector<vector<double>> data);
        void matrixInput();
        void matrixInput(vector<vector<double>> data);
        void matrixOutput();
        void setValue(double value);
        vector2int getSize();
        void calculateDet();
        void matrixshortener();
        void setSize(vector2int size);
        void ones();
        void zeroes();
        void identity();
        void transpose();
        Matrix operator*(int other);
        Matrix operator*(float other);
        Matrix operator*(double other);
    };

    class Complex
    {
    public:
        double Real;
        double Imaginary;
        Complex();
        Complex(double real, double imaginary);
        Complex operator+(Complex other);
        Complex operator-(Complex other);
        Complex operator*(Complex other);
        Complex operator/(Complex other);
        Complex operator=(Complex other);
        friend ostream& operator<<(ostream& os, Complex nr);
    };

}

using namespace Brabbadon::Core::Maths;
