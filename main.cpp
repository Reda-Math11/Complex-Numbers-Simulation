#include <iostream>

// [1-1] Representation of Complex Numbers System (R -> C)
struct Complex {
    double real; // The real coordinate (a) on the horizontal axis
    double imag; // The imaginary coordinate (b) on the vertical axis

    // Function to print the complex number in the standard algebraic form (a + bi)
    void print() {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
};

// [1-2] Basic Arithmetic Operations: Addition
Complex add(Complex z1, Complex z2) {
    Complex result;
    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;
    return result;
}

// [1-2] Basic Arithmetic Operations: Multiplication (i^2 = -1)
Complex multiply(Complex z1, Complex z2) {
    Complex result;
    result.real = (z1.real * z2.real) - (z1.imag * z2.imag);
    result.imag = (z1.real * z2.imag) + (z1.imag * z2.real);
    return result;
}

// [1-3] The Complex Conjugate Logic
Complex conjugate(Complex z) {
    Complex result;
    result.real = z.real;
    result.imag = -z.imag; // Geometrically reflects the vector across the real axis
    return result;
}

int main() {
    std::cout << "--- Complex Numbers Simulation ---" << std::endl;

    // Defining two complex numbers based on the curriculum examples
    Complex z1 = {3.0, 4.0};   // z1 = 3 + 4i
    Complex z2 = {1.0, -2.0};  // z2 = 1 - 2i

    std::cout << "z1 = "; z1.print();
    std::cout << "z2 = "; z2.print();

    // 1. Testing Addition
    Complex sumResult = add(z1, z2);
    std::cout << "Addition (z1 + z2) = "; sumResult.print();

    // 2. Testing Multiplication
    Complex prodResult = multiply(z1, z2);
    std::cout << "Multiplication (z1 * z2) = "; prodResult.print();

    // 3. Testing Conjugate
    Complex conjResult = conjugate(z1);
    std::cout << "Conjugate of z1 = "; conjResult.print();

    return 0;
}
