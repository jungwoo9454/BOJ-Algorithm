    #include <iostream>
    using namespace std;
    int Fibo(int n)
    {
        if(n <= 0) return 0;
        if(n == 1) return 1;
        else return Fibo(n - 1) + Fibo(n - 2);
    }

    int main(void)
    {
        int n;
        cin >> n;
        cout << Fibo(n) << endl;
        return 0;
    }