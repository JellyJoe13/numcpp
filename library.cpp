#include "library.h"

#include <iostream>

void hello() {
    std::cout << "Hello, World!" << std::endl;
}

template<typename T>
nc::Matrix2D<T>::Matrix2D() {
    this->content = new std::vector<T>(9);
    this->height = 3;
    this->width = 3;
}

template<typename T>
nc::Matrix2D<T>::Matrix2D(const std::vector<T> &content, const int& width, const int& height) : content(content), width(width), height(height) {}

template<typename T>
nc::Matrix2D<T>::Matrix2D(const int& height, const int& width) : height(height), width(width){
    this->content = std::vector<T>(height*width);
}

template<typename T>
nc::Matrix2D<T>::Matrix2D(const Matrix2D<T>& original) {
    this->content = std::vector<T>(original.content);
    this->width = original.width;
    this->height = original.height;
}

template<typename T>
nc::Matrix2D<T>::~Matrix2D() {
    delete this->content;
    delete this->height;
    delete this->width;
}

template<typename T>
nc::Matrix2D<T>& nc::Matrix2D<T>::operator=(const Matrix2D<T>& other) {
    // delete previous contents
    delete this->content;
    delete this->height;
    delete this->width;
    //assign new
    this->content = new std::vector<T>(other.content);
    this->height = other.height;
    this->width = other.width;

    return *this;
}