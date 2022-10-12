#ifndef NUMCPP_LIBRARY_H
#define NUMCPP_LIBRARY_H

#include <vector>

void hello();

namespace nc {
    class Matrix{

    };
    template <typename T>
    class Matrix2D: public Matrix {
    private:
        std::vector<T> content;
        int height{};
        int width{};
        bool transposed = false;
    public:
        /*
         * Constructor which uses an already existing vector, width and height to build matrix class
         *
         * @param values vector holding the values for each entry of the matrix, width and height integers
         */
        explicit Matrix2D(const std::vector<T> &content, const int& width, const int& height);
        /*
         * Basic constructor which assumes a matrix of dimension 3x3.
         */
        Matrix2D();
        /*
         * Constructor based on the dimension of the matrix
         *
         * @param values height and width as integers which will be used for precise allocation of needed storage
         */
        Matrix2D(const int& height, const int& width);
        /*
         * Traditional copy constructor which copies class and contents.
         */
        Matrix2D(const Matrix2D<T>& original);
        /*
         * Destructor of 2d matrix class; frees all allocated memory
         */
        ~Matrix2D();
        /*
         * Copy assignment constructor of 2d matrix which does not swap, but delete previous contents of matrix class
         * and copy contents of assigned matrix.
         *
         * @param values Matrix which contents will be set as the new contents of this matrix
         * @return the matrix itself
         */
        Matrix2D<T>& operator=(const Matrix2D<T>& other);
    };
}

#endif //NUMCPP_LIBRARY_H
