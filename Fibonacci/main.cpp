//serie fibonacci -> 1 1 2 3 5 8 13 21 44... n

#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=1,c=1;

    cout<< "Digite un numero: "; cin>>n;
        cout <<"1 ";
        for(int i=1; i<=n; i++){
            //cout <<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
            c = a + b;
            cout<<c<<" "; // 1 2 3 5 8
            a = b; // 1 1 2 3
            b = c; // 1 2 3 5
        }

    cout<<"\n";
    system("pause");
    return 0;
}
