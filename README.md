# Simpsons-Method-
This repository implements the Simpson method for approximating definite integrals using a C++ Simpson class. The project includes methods for setting integral limits and number of intervals, implementing the method for a default function, and allowing user input for custom functions. The result is then verified against the integral value obtained using the SciPy Python library's Quad function.

## Contents
#### C++ Files:
 - Simpson.h: Class declaration.
 - Simpson.cpp: Method implementation file.
 - Test_File.cpp: Test file to demonstrate the functionality.
#### Python Jupyter Notebook: 
 - Used for verifying results.
#### PDF Document: 
 - Simpson_Method.pdf provides a mathematical and algorithmic description of the method.
## Project Overview
### Simpson Method
The Simpson method is a numerical technique to approximate the definite integral of a function. It works by dividing the integration interval into an even number of subintervals and approximating the area under the curve using parabolic segments.

## Implementation Details
### Simpson Class:
#### Attributes:
 - Integral limits.
 - Number of intervals.
#### Methods:
 - setLimits: Sets the lower and upper limits of the integral.
 - setIntervals: Sets the number of intervals, ensuring the input is even.
 - simpsonImplementation: Implements the Simpson method for a default function and allows user input for custom functions.

## Comparison:
The result is checked against the integral value obtained using the SciPy Python library's Quad function

## Dependencies
#### C++ Compiler: 
 - Any standard C++ compiler (e.g., g++).
#### Python:
 - SciPy for calculating the integral value.
 - Matplotlib for plotting graphs (if needed).
 - Jupyter Notebook for interactive analysis.

## Conclusion
This project provides an object-oriented implementation of the Simpson method for approximating definite integrals. The results are verified against the integral value obtained using the SciPy Python library's Quad function, offering a comprehensive understanding of the method's accuracy and application.
