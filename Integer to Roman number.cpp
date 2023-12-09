#include<iostream>
using namespace std;
class roman
{
    private:
        int integer[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    public:
        string inttoroman(int num)
        {
            string result;
            for(int i=0;i<13;i++)
            {
                while(integer[i]<=num)
                {
                    result+=roman[i];
                    num-=integer[i];
                }
            }
            return result;
        }
};
int main()
{
    int num;
    cin>>num;
    roman c;
    cout<<c.inttoroman(num);
}
