/* 
 * File:   Matrix.h
 * Author: bhitt
 *
 * Created on November 9, 2019, 9:49 AM
 */

#ifndef MATRIX_H
#define MATRIX_H

//includes
#include <vector>
#include <cstddef> //std::size_t
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string.h>
#include <type_traits>

template <class T> 
class Matrix{
private: 
    std::vector<std::vector<T>> data;
    size_t row;
    size_t column;
    bool sFlag;
public:
    
    Matrix(size_t row_, size_t column_, bool flag): row{row_}, column{column_}
    {
        data.resize(row);
        for(size_t i=0; i<row; i++){
            data[i].resize(column);
        }
        sFlag = flag;
    }
    
    const std::vector<T>& operator[](size_t col_index) const {
        return data[col_index];
    }
    
    std::vector<T>& operator[](size_t col_index) {
        return data[col_index];
    }

    size_t get_row()  const { return row; }
    size_t get_column() const { return column; }
    
    T findMax(int &ind1, int &ind2){
        //if vector of strings, use a different comparison method
//        if(sFlag){
//            char *maxElement = const_cast<char*> (data[0][0]);
//            for (int i = 0; i < data.size(); i++) {
//                for (int j = 0; j < data[0].size(); j++) {
//                    if (strcmp(data[i][j], maxElement) > 0) {
//                        std::cout << "data:" << data[i][j] << std::endl;
//                        maxElement = const_cast<char*> (data[i][j]);
//                        ind1 = i;
//                        ind2 = j;
//                    }
//                }
//            }
//            return maxElement; 
//        }

        
        T maxElement = data[0][0];
        for(int i=0;i<data.size();i++){
            for(int j=0;j<data[0].size();j++){
                if( data[i][j] > maxElement){
                    maxElement = data[i][j];
                    ind1 = i;
                    ind2 = j;
                }
            }
        }
        return maxElement;
    }
};

//overload operator
template<typename T>
std::ostream& operator<<(std::ostream& os, Matrix<T> m)
{
    size_t maximum_entry_length = 0;

    for (size_t row = 0; row < m.get_row(); ++row)
    {
        for (size_t col = 0; col < m.get_column(); ++col)
        {
            std::stringstream ss;
            ss << m[row][col];
            std::string entry_text;
            ss >> entry_text;
            maximum_entry_length = std::max(maximum_entry_length,
                                            entry_text.length());
        }
    }

    for (size_t row = 0; row < m.get_row(); ++row)
    {
        for (size_t col = 0; col < m.get_column(); ++col)
        {
            os << std::setw((int) maximum_entry_length) << m[row][col];

            if (col < m.get_column() - 1)
            {
                os << ' ';
            }
        }

        if (row < m.get_row() - 1)
        {
            os << '\n';
        }
    }

    return os;
}

#endif /* MATRIX_H */

