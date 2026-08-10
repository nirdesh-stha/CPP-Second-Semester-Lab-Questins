#include<iostream>
using namespace std;

// Define a class for 3x3 matrix operations

class Matrix{
    private:
        int n[3][3];
        int i,j;
    public:
        Matrix(){
            cout<<"enter the 3*3 matrix elements: ";
            for( i=0;i<3;i++){
                for( j=0;j<3;j++){
                    cin>>n[i][j];
                }
            }
        }
        void Add(Matrix m){
            cout<<"Addition is: "<<endl;
            for( i=0;i<3;i++){
                for(j=0;j<3;j++){
                    cout<<n[i][j]+m.n[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        void Multiply(Matrix m){
            cout<<"Multiplication is: "<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int sum=0;
                    for(int k=0;k<3;k++){
                        sum+=n[i][k]*m.n[k][j];
                    }
                    cout<<sum<<" ";
                }
                cout<<endl;
            }
        }

};

int main(){
    Matrix m1;
    Matrix m2;
    m1.Add(m2);
    m1.Multiply(m2);
    return 0;
}