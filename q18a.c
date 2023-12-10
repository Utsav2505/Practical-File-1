#include <stdio.h>

// Define a structure for complex numbers
struct Complex {
    float real;
    float imag;
};

// Function to read a complex number
void readComplex(struct Complex *c) {
    printf("Enter real part: ");
    scanf("%f", &c->real);
    printf("Enter imaginary part: ");
    scanf("%f", &c->imag);
}

// Function to write a complex number
void writeComplex(struct Complex c) {
    printf("Complex Number: %.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    // Reading two complex numbers
    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("\nEnter the second complex number:\n");
    readComplex(&num2);

    // Writing the complex numbers
    printf("\nFirst Complex Number:\n");
    writeComplex(num1);

    printf("\nSecond Complex Number:\n");
    writeComplex(num2);

    // Addition of complex numbers
    sum = addComplex(num1, num2);
    printf("\nSum of Complex Numbers:\n");
    writeComplex(sum);

    // Multiplication of complex numbers
    product = multiplyComplex(num1, num2);
    printf("\nProduct of Complex Numbers:\n");
    writeComplex(product);

    return 0;
}
