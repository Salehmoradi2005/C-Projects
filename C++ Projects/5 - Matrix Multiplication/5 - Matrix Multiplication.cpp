#include <iostream>
#include <random>
#include <vector>

using namespace std;

vector <vector<int>> CMatrix_RandNums(int Rows , int Cols) {

    //Creating 2D list
    vector<vector<int>> Matrix(Rows, vector<int>(Cols, 0));

    //Random generator (use dis(gen) for creating random nums)
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 9);

    //Filling Matrix with Random numbers
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Matrix[i][j] = dis(gen);
        }
    }
    
    return Matrix;
 }

void MatrixMultiply(vector<vector<int>> M1, vector<vector<int>> M2) {
    cout << "First Matrix :" << endl;
    for (int i = 0; i < M1.size(); i++)
    {
        for (int j = 0; j < M1[0].size(); j++) {
            cout << M1[i][j] << "    ";
        }
        cout << endl;
        cout << endl;
    }

    cout << "Second Matrix :" << endl;
    for (int i = 0; i < M2.size(); i++)
    {
        for (int j = 0; j < M2[0].size(); j++) {
            cout << M2[i][j] << "    ";
        }
        cout << endl;
        cout << endl;
    }

    vector<vector<int>> MM = CMatrix_RandNums(M1.size(), M2[0].size());

    for (int i = 0; i < M1.size(); ++i) {
        for (int j = 0; j < M2[0].size(); ++j) {
            for (int k = 0; k < M1[0].size(); ++k) {
                MM[i][j] += M1[i][k] * M2[k][j];
            }
        }

    };

    cout << "Multipied Matrix :" << endl;
    for (int i = 0; i < MM.size(); i++)
    {
        for (int j = 0; j < MM[0].size(); j++) {
            cout << MM[i][j] << "    ";
        }
        cout << endl;
        cout << endl;
    }
}

int main()
{
    int FirstMatrixRows = 3;
    int FirstMatrixCols = 4;

    vector<vector<int>> Matrix1 = CMatrix_RandNums(FirstMatrixRows, FirstMatrixCols);

    int SecMatrixRows = 4;
    int SecMatrixCols = 3;

    vector<vector<int>> Matrix2 = CMatrix_RandNums(SecMatrixRows, SecMatrixCols);
    MatrixMultiply(Matrix1, Matrix2);

}



