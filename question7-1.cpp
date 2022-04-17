#include <iostream>
using namespace std;
void judge(int);

int main()
{
    int num;
    cout << "請輸入一整數: ";
    cin >> num;
    judge(num);

    return 0;
}

void judge(int num)
{
    int fromOneToNum = 1, divisorNum = 0;
    while(fromOneToNum <= num)
    {
        if(num % fromOneToNum == 0)
        {
            divisorNum++;
        }
        fromOneToNum++;
    }
    if(divisorNum == 2)
    {
        cout << "質數";
    }
    else
    {   int fromOneToNum = 1;
        while(fromOneToNum <= num)
        {
            if(num % fromOneToNum == 0)
            {
                cout << fromOneToNum << endl;
            }
            fromOneToNum++;
        }
    }
}
