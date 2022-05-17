#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////int main()
////{
//	//char ch;
//	//cin >> ch;
//	//if (isupper(ch))
//	//{
//	//	printf("%c", ch);
//	//}
//    int main()
//    {
//        char ch;
//        while (ch = getchar() != EOF)
//        {
//            getchar();
//            if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//            {
//                cout << putchar(ch) << " is an alphabet.\n";
//            }
//            else
//            {
//                cout << ch << " is not an alphabet.\n";
//            }
//        }
//        return 0;
//    }


//int main()
//{
//    char ch;
//    while (ch = getchar() != EOF)
//    {
//        getchar();
//        if (isa)
//        {
//            cout << "a";
//        }
//        else
//        {
//            cout << "b";
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int a;
//    cin >> a;
//    int walk = a / 1;
//   float car = a / 10.0;
//   a = (int)car;
//    if (walk <= (10 + car))
//    {
//        cout << 'w';
//    }
//    else
//    {
//        cout << 'v';
//    }
//    return 0;
//}
#include<map>
#include<string>
int add(int a, int b)
{
	return a + b;
}

int multi(int a, int b)
{
	return a * b;
}


//int main()
//{
//	//map<int, string> m;
//	//m.insert(make_pair(5, "aaa"));
//	//m.erase(5);
//	//cout << m[5];
//
//	int (*p[2]) (int, int) = { add,multi };
//	int ret = (*p[1])(1, 2);
//	cout << ret;
//}



//int main()
//{
//    int i;
//    int count = 3;
//    while (1)
//    {
//        cin >> i;
//        if (i > 0)
//        {
//            cout << '1' << endl;
//        }
//        if (i == 0)
//        {
//            cout << 0.5 << endl;
//        }
//        if (i < 0) {
//            cout << '0';
//        }
//    }
//    return 0;
//
//}


//int main()
//{
//    float a, b, c;
//
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        double root;
//        if (a == 0)
//        {
//            cout << "Not quadratic equation" << endl;
//        }
//        else
//        {
//
//            if ((b * b - 4 * a * c) == 0)
//            {
//                if (b == 0)
//                {
//                    root = 0;
//                }
//                else
//                {
//                    root = (-1 * b) / (2 * a);
//                }
//                printf("x1=x2=%.2f", root);
//            }
//            else if ((b * b - 4 * a * c) > 0)
//            {
//                int x1 = sqrt(b * b - 4 * a * c);
//                int x2 = sqrt(b * b - 4 * a * c);
//                printf("x1=%.2f", x1 <= x2 ? x1 : x2);
//                printf("x2=%.2f", x1 <= x2 ? x2 : x1);
//            }
//            else
//            {
//                int x3 = sqrt(4 * a * c - b * b) / 2 * a;
//                printf("x1=%.2f-%.2fi", (-b / 2 * a), x3);
//                printf("x2=%.2f+%.2fi", (-b / 2 * a), x3);
//            }
//        }
//
//    }
//}


#define X 10
//int main()
//{
//    int a, b, c, d;
//    scanf("%d-%d-%d-%d", &a, &b, &c, &d);
//    int sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
//    sum1 = a * 1;
//    for (int i = 4; i > 1; i--)
//    {
//        sum1 = sum1 + i * (b % 10);
//        b = b / 10;
//    }
//    for (int j = 9; j > 4; j--)
//    {
//        sum2 = sum2 + j * (c % 10);
//        c = c / 10;
//    }
//    sum = sum1 + sum2;
//    if ((sum % 11) == d)
//    {
//        cout << "Right";
//    }
//    else
//    {
//        printf("%d-%d-%d-%d", a, b, c, (sum % 11));
//    }
//
//    return 0;
//}

//int main()
//{
//    string s;
//    cin >> s;
//    int len = s.size();
//    int sum = 0;
//    char mod[15] = { "0123456789X" };
//    int j = 1;
//    for (int i = 0; i < len - 1; i++)
//    {
//        if (s[i] == '-')
//        {
//            continue;
//        }
//        sum = sum + (j * (s[i] - '0'));
//        j++;
//    }
//    char c;
//    if (sum % 11 == 10)
//        c = 'X';
//    else
//        c = (sum % 11) + '0';
//    if (c == s[len - 1])
//    {
//        cout << "Right";
//    }
//    else
//    {
//        s[len - 1] = mod[sum % 11];
//        cout << s;
//    }
//
//    return 0;

int main()
{
    double a, b;
    char ch;
    scanf("%lf%c%lf", &a, &ch, &b);
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        if (ch == '+')
        {
            printf("%.4f+%.4f=%.4f", a, b, a + b);
        }
        else if (ch == '-')
        {
            printf("%.4f%c%.4f=%.4f", a, ch, b, a - b);
        }
        else if (ch == '*')
            printf("%.4f%c%.4f=%.4f", a, ch, b, a * b);
        else
        {
            if (b == 0)
            {
                cout << "Wrong!Division by zero!";
            }
            else
            {
                printf("%.4f%c%.4f=%.4f", a, ch, b, a / b);
            }
        }
    }
    else
    {
        cout << "Invalid operation!";
    }
    return 0;
}