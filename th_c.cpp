#include <iostream>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//#include <conio.h>
#define PI 3.14
using namespace std;

//-------Bai 1-------

//1.2 Co ban

//1.2.1 "hello world"
// int main()
// {
//     cout << "Hello, World!";
//     cout << "Hello, World!" << endl;
//     cout << "Hello, \nWorld!" << endl;
//     cout << "Hello, \tWorld!" << endl;
//     return 0;
// }

//1.2.2 Thiep moi
// int main()
// {
//     cout << "**********************************************************" << endl;
//     cout << "   THIEP MOI\n   Than moi ban: \"Le Loi\"\n   Toi du le sinh nhat cua minh\n   Vao luc 19h ngay 20/10/2016\n   Tai: 05/42 Vinh Vien - TP. HCM\n   Rat mong duoc don tiep!\n   Ho Le Thu" << endl;
//     cout << "**********************************************************" << endl;
//     return 0;
// }

//1.2.3 Nhap xuat co ban
// int main()
// {
//     //3a
//     int a;
//     float b;
//     char c;
//     cin >> a >> b >> c;
//     cout << endl
//          << a << endl
//          << b << endl
//          << c << endl;
//     return 0;
// }

//1.2.4 cv dt htron
// int main()
// {
//     float r, cv = 0, dt = 0;
//     cin >> r;
//     cv = 2 * PI * r;
//     dt = PI * pow(r, 2);
//     cout << endl
//          << cv << endl
//          << dt << endl;
//     return 0;
// }

//1.2.5 Max
// int main()
// {
//     int a, b, c, max;
//     cin >> a >> b;
//     max = a;
//     if (max < b)
//         max = b;
//     cout << "a. " << max << endl;
//     cin >> c;
//     if (max < c)
//         max = c;
//     cout << "b. " << max << endl;
//     return 0;
// }

//1.3 Nang cao

//1.3.6 tam giac
// int main()
// {
//     int a, b, c;
//     float cv = 0, dt = 0, p = 0;
//     cin >> a >> b >> c;
//     if (a > 0 && b > 0 && c > 0)
//     {
//         if (a + b > c && a + c > b && b + c > a)
//         {
//             cout << "a, b, c la canh cua tam giac" << endl;
//             cv = a + b + c;
//             p = cv / 2;
//             dt = sqrt(p * (p - a) * (p - b) * (p - c));
//             cout << cv << endl
//                  << dt << endl;
//         }
//         else
//             cout << "a, b, c khong phai ba canh tam giac" << endl;
//     }
//     return 0;
// }

//1.3.7 so dao ngc
// int main()
// {
//     int n, tram, chuc, dv;
//     cin >> n;
//     if (n > 99 && n < 1000)
//     {
//         cout << n << " la so ban dau" << endl;
//         tram = n / 100;
//         chuc = (n / 10) % 10;
//         dv = (n % 100) % 10;
//         cout << dv << chuc << tram << " la so sau khi chuyen doi" << endl;
//     }
//     else
//         cout << "So vua nhap khong phai so co 3 chu so" << endl;
//     return 0;
// }

//-------Bai 2-------

//2.2 Co ban

//2.2.1 pt bac nhat
// int main()
// {
//     float a, b;
//     cin >> a >> b;
//     if (a == 0 && b == 0)
//         cout << "pt vo so nghiem" << endl;
//     else if (a == 0 && b != 0)
//         cout << "pt vo nghiem" << endl;
//     else if (a != 0)
//         cout << "pt co nghiem duy nhat: " << -b / a << endl;
//     return 0;
// }

//2.2.2 pt bac hai
// int main()
// {
//     float a, b, c;
//     cin >> a >> b >> c;
//     if (a == 0)
//     {
//         cout << "pt bac nhat:" << endl;
//         if (c == 0 && b == 0)
//             cout << "pt vo so nghiem" << endl;
//         else if (c != 0 && b == 0)
//             cout << "pt vo nghiem" << endl;
//         else if (b != 0)
//             cout << "pt co nghiem duy nhat: " << -c / b << endl;
//     }
//     else
//     {
//         cout << "pt bac hai" << endl;
//         float denta = 0;
//         denta = pow(b, 2) - 4 * a * c;
//         if (denta < 0)
//             cout << "pt vo vo nghiem" << endl;
//         else if (denta == 0)
//             cout << "pt co mot nghiem duy nhat: " << -b / (2 * a);
//         else
//         {
//             cout << "pt co hai nghiem pb:" << endl;
//             cout << "x1 = " << (-b + sqrt(denta)) / (2 * a) << endl;
//             cout << "x2 = " << (-b - sqrt(denta)) / (2 * a) << endl;
//         }
//     }
//     return 0;
// }

//2.2.3 loai tam giac
// int main()
// {
//     unsigned int a, b, c;
//     cin >> a >> b >> c;
//     if (a + b > c && a + c > b && b + c > a)
//     {
//         cout << "a, b, c la canh cua tam giac" << endl;
//         if (a == b && a == c && b == c)
//             cout << "Tam giac deu" << endl;
//         else if (a == b || a == c || b == c)
//             cout << "Tam giac can" << endl;
//         else if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2))
//             cout << "Tam giac vuong" << endl;
//     }
//     else
//         cout << "a, b, c khong phai ba canh tam giac" << endl;
//     return 0;
// }

//2.2.4 doc so 9<x<100
// int main()
// {
//     int n;
//     cin >> n;
//     if (n > 9 && n < 100)
//     {
//         int chuc = 0, dv = 0;
//         chuc = n / 10;
//         dv = n % 10;
//         switch (chuc)
//         {
//         case 1:
//             cout << "Muoi ";
//             break;
//         case 2:
//             cout << "Hai muoi ";
//             break;
//         case 3:
//             cout << "Ba muoi ";
//             break;
//         case 4:
//             cout << "Bon muoi ";
//             break;
//         case 5:
//             cout << "Nam muoi ";
//             break;
//         case 6:
//             cout << "Sau muoi ";
//             break;
//         case 7:
//             cout << "Bay muoi ";
//             break;
//         case 8:
//             cout << "Tam muoi ";
//             break;
//         case 9:
//             cout << "Chin muoi ";
//             break;
//         default:
//             cout << "Error";
//             break;
//         }
//         switch (dv)
//         {
//         case 0:
//             break;
//         case 1:
//             cout << "mot ";
//             break;
//         case 2:
//             cout << "hai";
//             break;
//         case 3:
//             cout << "ba";
//             break;
//         case 4:
//             cout << "bon";
//             break;
//         case 5:
//             cout << "nam";
//             break;
//         case 6:
//             cout << "sau";
//             break;
//         case 7:
//             cout << "bay";
//             break;
//         case 8:
//             cout << "tam";
//             break;
//         case 9:
//             cout << "chin";
//             break;
//         default:
//             cout << "Error";
//             break;
//         }
//         cout << endl;
//     }
//     else
//         cout << "So nhap vao khong phai so co hai chu so" << endl;
// }

//2.2.5 ktra thang
// int main()
// {
//     int n;
//     cin >> n;
//     if (n > 0 && n < 13)
//     {
//         switch (n)
//         {
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             cout << "Thang co 31 ngay" << endl;
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             cout << "Thang co 30 ngay" << endl;
//             break;
//         case 2:
//             int y;
//             cin >> y;
//             if ((y % 4 == 0) && (y % 100 != 0) ||
//                 (y % 400 == 0))
//             {
//                 cout << "Thang co 29 ngay" << endl;
//             }
//             else
//                 cout << "Thang co 28 ngay" << endl;
//             break;
//         }
//     }
//     else
//         cout << "Khong ton tai thang nay" << endl;
// }

// 2.3 Nang cao

//2.3.6 ktra ngay thang nam
// int main()
// {
//     int d, m, y, check = 0;
//     cin >> d >> m >> y;
//     if (m > 0 && m < 13)
//     {
//         switch (m)
//         {
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             if (d > 0 && d < 32 && y > 1)
//                 check = 1;
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             if (d > 0 && d < 31 && y > 1)
//                 check = 1;
//             break;
//         case 2:
//             if ((y % 4 == 0) && (y % 100 != 0) ||
//                 (y % 400 == 0))
//             {
//                 if (d > 0 && d < 30 && y > 1)
//                     check = 1;
//             }
//             else if (d > 0 && d < 29 && y > 1)
//                 check = 1;
//             break;
//         }
//         if (check == 1)
//             cout << d << " / " << m << " / " << y << " hop le" << endl;
//         else
//             cout << d << " / " << m << " / " << y << " khong hop le" << endl;
//     }
//     else
//         cout << "Khong ton tai thang nay" << endl;
// }

//2.3.7 taxi
// int main()
// {
//     float km, money = 5000;
//     cout << "Nhap km: ";
//     cin >> km;
//     int check = km;
//     if (km > 0)
//     {
//         if (km > 1 && km <= 30)
//         {
//             if ((km - (float)check) / 2 != 0)
//                 km += 0.1;
//             money += ((km - 1) / 0.2) * 1000;
//         }
//         else if (km > 30)
//         {
//             if ((km - (float)check) > (int)km - check)
//                 km = (int)km - 29;
//             money += km * 3000 + 29 * money;
//         }
//         cout << "So tien phai tra: " << money / 1000 << ".000d" << endl;
//     }
//     return 0;
// }
//-------Bai 3-------

//3.2 Co ban

//3.2.1 lap hello
// int main()
// {
//     //a
//     int i = 1;
//     while (i < 11)
//     {
//         cout << i << ". XIN CHAO CAC BAN" << endl;
//         i++;
//     }
//     //b
//     cout << "\n b. " << endl;
//     int n;
//     cin >> n;
//     for (int i = 1; i < n + 1; i++)
//         cout << i << ". XIN CHAO CAC BAN" << endl;
// }

//3.2.2 lap n
// int main()
// {
//     int n;
//     cin >> n;
//     if (n > 0)
//     {
//         cout << "a. ";
//         for (int i = 1; i < n + 1; i++)
//             cout << i << "   ";
//         cout << "\nb. ";
//         for (int i = 1; i < n + 1; i++)
//         {
//             if (i % 2 == 0)
//                 cout << i << "   ";
//         }
//         cout << "\nc. ";
//         for (int i = 1; i < n + 1; i++)
//         {
//             if (i % 3 != 0)
//                 cout << i << "   ";
//         }
//         cout << "\nd. ";
//         int s1 = 0, s2 = 0, x;
//         float s3 = 0;
//         cin >> x;
//         for (int i = 1; i <= n; i++)
//         {
//             s1 += i;
//             s2 += i * pow(-1, i);
//             s3 += ((float)i / (i + 1));
//         }
//         cout << "S1 = " << s1 << endl;
//         cout << "S2 = " << s2 << endl;
//         cout << "S3 = " << s3 << endl;
//         cout << "S4 = " << pow(x, n) << endl;
//         cout << "e.";
//         int sum = 0, i;
//         while (n != 0)
//         {
//             i = n % 10;
//             sum += i;
//             cout << sum << endl;
//             n /= 10;
//         }
//     }
// }

//3.2.3 nt,cp
// int main()
// {
//     int n, d;
//     do
//     {
//         cin >> n;
//         if (n <= 0 || n > 100)
//             cout << "Error" << endl;
//     } while (n <= 0 || n > 100);
//     d = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             d++;
//         }
//     }
//     if (d == 2)
//         cout << n << " la snt" << endl;
//     else
//         cout << n << " k la snt" << endl;
//     d = 0;
//     for (int i = 1; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//             d += i;
//     }
//     if (d == n)
//         cout << n << " la sht" << endl;
//     else
//         cout << n << " k la sht" << endl;
// }

//3.2.4 ve *
// int main()
// {
//     int n;
//     cin >> n;
//     if (n > 0 && n <= 10)
//     {
//         cout << "a." << endl;
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << "*";
//             }
//             cout << endl;
//         }
//         cout << "b." << endl;
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 cout << "*";
//             }
//             cout << endl;
//         }
//     }
// }

//3.3 Nang cao

//3.3.5 bang cuu chuong
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 9; j++)
//         {
//             cout << j << " * " << i << " = " << j * i << "\t";
//         }
//         cout << endl;
//     }
// }

//3.3.6
// int main()
// {
//     int n, count = 0, sum1 = 0;
//     cin >> n;
//     cout << "b." << endl;
//     for (int i = 2; i <= n; i++)
//     {
//         int d = 0;
//         for (int j = 2; j <= i; j++)
//         {
//             if (i % j == 0)
//                 d++;
//         }
//         if (d == 1)
//         {
//             cout << i << "   ";
//             count++;
//             sum1 += i;
//         }
//     }
//     cout << "\n"
//          << "c." << count << endl;
//     cout << "d." << sum1 << endl;
// }

//3.3.7 tong cac chu so cua n
// int main()
// {
//     int n, count = 0, sum = 0;
//     cin >> n;
//     while (n != 0)
//     {
//         int i = n % 10;
//         sum += i;
//         n /= 10;
//     }
//     cout << sum << endl;
// }
// void input(int &n)
// {
//     cin >> n;
// }
// int check_nt(int n)
// {
//     if (n < 2)
//         return 0;
//     else
//     {
//         for (int i = 2; i <= sqrt(n); i++)
//         {
//             if (n % i == 0)
//                 return 0;
//         }
//         return 1;
//     }
// }

//-------Bai 4-------

//4.2 Co ban

//4.2.1 nguyen to
// void input(int &n)
// {
//     cin >> n;
// }
// int check_nt(int n)
// {
//     if (n < 2)
//         return 0;
//     else
//     {
//         for (int i = 2; i <= sqrt(n); i++)
//         {
//             if (n % i == 0)
//                 return 0;
//         }
//         return 1;
//     }
// }
// void output_nt(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (check_nt(i) == 1)
//         {
//             cout << i << "   ";
//         }
//     }
//     cout << endl;
// }
// int count_nt(int n)
// {
//     int d = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (check_nt(i) == 1)
//             d++;
//     }
//     return d;
// }
// int sum_nt(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (check_nt(i) == 1)
//             sum += i;
//     }
//     return sum;
// }
// float tbc(int n)
// {
//     return (float)sum_nt(n) / count_nt(n);
// }
// int main()
// {
//     int n;
//     input(n);
//     cout << "Danh sach so nt tu 1-n la:" << endl;
//     output_nt(n);
//     cout << "sl nt: " << count_nt(n) << endl;
//     cout << "tong: " << sum_nt(n) << endl;
//     cout << "tbc: " << tbc(n) << endl;
// }

//4.2.2 menu
// void input_a_b(int &a, int &b)
// {
//     cin >> a >> b;
// }
// float pt_b1(int a, int b)
// {
//     return -(float)b / a;
// }
// void input_n(int &n)
// {
//     cin >> n;
// }
// int check_ht(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//             sum += i;
//     }
//     if (sum == n)
//         return 1;
//     else
//         return 0;
// }
// void ouput_list_ht(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (check_ht(i) == 1)
//             cout << i << "  ";
//     }
// }
// int gcd(int a, int b)
// {
//     if (a == 0 || b == 0)
//         return a + b;
//     while (a * b != 0)
//     {
//         if (a > b)
//             a %= b;
//         else
//             b %= a;
//     }
//     return a + b;
// }
// void menu(int &chon)
// {
//     cout << "\n-------Menu-------" << endl;
//     cout << "1. Giai pt bac 1" << endl;
//     cout << "2. Ktra hoan thien" << endl;
//     cout << "3. Xuat cac so hoan thien tu 1-n" << endl;
//     cout << "4. Tim uoc chung lon nhat cua (a, b)" << endl;
//     cout << "0. Exit" << endl;
//     cout << "\n Chon chuc nang: ";
//     cin >> chon;
// }
// int main()
// {
//     int a, b, n, chon;
//     do
//     {
//         menu(chon);
//         switch (chon)
//         {
//         case 1:
//             input_a_b(a, b);
//             if (a == 0 && b == 0)
//                 cout << "pt vo so nghiem" << endl;
//             else if (a == 0 && b != 0)
//                 cout << "pt vo nghiem" << endl;
//             else if (a != 0)
//                 cout << "pt co nghiem duy nhat: " << pt_b1(a, b) << endl;
//             break;
//         case 2:
//             input_n(n);
//             if (check_ht(n) == 1)
//                 cout << n << " la sht" << endl;
//             else
//                 cout << n << " k la sht" << endl;
//             break;
//         case 3:
//             input_n(n);
//             ouput_list_ht(n);
//             break;
//         case 4:
//             input_a_b(a, b);
//             cout << "Gia tri uoc lon nhat la: " << gcd(a, b) << endl;
//             break;
//         default:
//             break;
//         }
//     } while (chon != 0);
// }

//4.3 Nang cao

//4.3.3 menu + - * /
// void input_a_b(int &a, int &b)
// {
//     cin >> a >> b;
// }
// void menu(char &chon)
// {
//     cout << "\n-------Menu-------" << endl;
//     cout << "+. Cong 2 so" << endl;
//     cout << "-. Tru 2 so" << endl;
//     cout << "*. Nhan 2 so" << endl;
//     cout << "/. Chia 2 so" << endl;
//     // cout << "0. Exit" << endl;
//     cout << "\n Chon chuc nang: ";
//     cin >> chon;
// }
// int check_input(char chon)
// {
//     if (chon == '+' || chon == '-' || chon == '*' || chon == '/')
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     int a, b;
//     char chon;
//     do
//     {
//         menu(chon);
//         switch (chon)
//         {
//         case '+':
//             input_a_b(a, b);
//             cout << a << " + " << b << " = " << a + b << endl;
//             break;
//         case '-':
//             input_a_b(a, b);
//             cout << a << " - " << b << " = " << a - b << endl;
//             break;
//         case '*':
//             input_a_b(a, b);
//             cout << a << " * " << b << " = " << a * b << endl;
//             break;
//         case '/':
//             input_a_b(a, b);
//             cout << a << " / " << b << " = " << (float)a / b << endl;
//             break;
//         default:
//             break;
//         }
//     } while (check_input(chon) == 1);
// }

//4.3.4 tính tien luong
// void input_a_b(int &a, int &b)
// {
//     do
//     {
//         cin >> a >> b;
//         if (a > b || a < 6 || b > 18)
//             cout << "Nhap sai gia tri..." << endl;
//     } while (a > b || a < 6 || b > 18);
// }
// int tinhluong(int a, int b)
// {
//     int luong = 0;
//     if( a < 12)
//     {
//      	if (b > 12)
//         luong = 7500 * (b - 12) + (12 - a) * 6000;
//         else luong = (b - a) * 6000;
// 	}
//     else
//     {
//     	luong = 7500 * (b - a);
// 	}
//     return luong;
// }
// int main()
// {
//     int a, b;
//     input_a_b(a, b);
//     if (tinhluong(a, b) % 1000 == 500)
//         cout << "Tong luong phai tra la: " << tinhluong(a, b) / 1000 << ".500d" << endl;
//     else
//         cout << "Tong luong phai tra la: " << tinhluong(a, b) / 1000 << ".000d" << endl;
// }

//-------Bai 5-------

//5.2 Co ban

//5.2.1 & 5.2.2
// void input_sl(int &n)
// {
//     cin >> n;
// }
// void input(int a[], int &n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
// }
// void output(int a[], int n)
// {
//     cout << "Cac ptu cua mang: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << "   ";
//     }
//     cout << endl;
// }
// void output_chia3(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 3 == 0)
//             cout << a[i] << "   ";
//     }
//     cout << endl;
// }
// int count_duong(int a[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 0)
//             count++;
//     }
//     return count;
// }
// int sum_array(int a[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     return sum;
// }
// float tbc_array(int a[], int n)
// {
//     return (float)sum_array(a, n) / n;
// }
// float tbc_array_duong(int a[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 0)
//             sum += a[i];
//     }
//     return (float)sum / count_duong(a, n);
// }
// int check_nt(int n)
// {
//     if (n < 2)
//         return 0;
//     else
//     {
//         for (int i = 2; i <= sqrt(n); i++)
//         {
//             if (n % i == 0)
//                 return 0;
//         }
//         return 1;
//     }
// }
// void output_nt(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (check_nt(a[i]) == 1)
//             cout << a[i] << "   ";
//     }
//     cout << endl;
// }
// int count_nt(int a[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (check_nt(a[i]) == 1)
//             count++;
//     }
//     return count;
// }
// int sum_array_nt(int a[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (check_nt(a[i]) == 1)
//             sum += a[i];
//     }
//     return sum;
// }
// float tbc_array_nt(int a[], int n)
// {
//     return (float)sum_array_nt(a, n) / count_nt(a, n);
// }
// int search_duong_first(int a[], int n)
// {
//     int check = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 0)
//         {
//             check = i;
//             break;
//         }
//     }
//     return check;
// }
// int search_duong_last(int a[], int n)
// {
//     int check_last = 0;
//     for (int i = n - 1; i != 0; i--)
//     {
//         if (a[i] > 0)
//         {
//             check_last = i;
//             break;
//         }
//     }
//     return check_last;
// }
// int search_max(int a[], int n)
// {
//     int max = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (max < a[i])
//             max = a[i];
//     }
//     return max;
// }
// int search_min(int a[], int n)
// {
//     int min = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (min > a[i])
//             min = a[i];
//     }
//     return min;
// }
// int main()
// {
//     int a[100], n;
//     input_sl(n);
//     input(a, n);
//     output(a, n);
//     cout << "a. Cac ptu chia het cho 3 co trong mang: ";
//     output_chia3(a, n);
//     cout << "b. So luong ptu duong co trong mang: " << count_duong(a, n) << endl;
//     cout << "c. Tong cac so trong mang: " << sum_array(a, n) << endl;
//     cout << "d. Tbc cac so trong mang: " << tbc_array(a, n) << endl;
//     cout << "e. Tbc cac so duong trong mang: " << tbc_array_duong(a, n) << endl;
//     cout << "f. Cac snt co trong mang la: ";
//     output_nt(a, n);
//     cout << "g. So luong so nguyen to co trong mang la: " << count_nt(a, n) << endl;
//     cout << "h. Tong cac snt trong mang: " << sum_array_nt(a, n) << endl;
//     cout << "i. Tbc cac snt trong mang: " << tbc_array_nt(a, n) << endl;
//     cout << "j. ";
//     if (search_duong_first(a, n) != 0)
//     {
//         cout << "Tim thay ptu duong dau tien cua mang\n Ptu do nam o vi tri: " << search_duong_first(a, n) << endl;
//     }
//     else
//         cout << "Kh ton tai ptu duong trong mang." << endl;
//     cout << "k. ";
//     if (search_duong_last(a, n) != 0)
//     {
//         cout << "Tim thay ptu duong cuoi cua mang\n Ptu do nam o vi tri: " << search_duong_last(a, n) << endl;
//     }
//     else
//         cout << "Kh ton tai ptu duong trong mang." << endl;
//     cout << "l. Ptu lon nhat cua mang: " << search_max(a, n) << "\nPtu nho nhat cua mang: " << search_min(a, n) << endl;
// }

//5.2.3 nhap xuat mang (0 - 100)
// void input_sl(int &n)
// {
//     do
//     {
//         cin >> n;
//         if (n <= 0 || n > 100)
//             cout << "Vui long nhap nhieu hon 1 ptu va it hon 100 ptu..." << endl;
//     } while (n <= 0 || n > 100);
// }
// void input(int a[], int &n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
// }
// void output(int a[], int n)
// {
//     cout << "Cac ptu cua mang: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << "   ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int n, a[n];
//     input_sl(n);
//     input(a, n);
//     output(a, n);
// }

//5.3.4 check nhap trung
// void input_sl(int &n)
// {
//     do
//     {
//         cin >> n;
//         if (n <= 0 || n > 100)
//             cout << "Vui long nhap nhieu hon 1 ptu va it hon 100 ptu..." << endl;
//     } while (n <= 0 || n > 100);
// }
// bool check_trung(int a[], int n, int check)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == check)
//             return true;
//     }
//     return false;
// }
// void input(int a[], int &n)
// {
//     int temp;
//     do
//     {
//         cin >> n;
//         if (n <= 0 || n > 100)
//             cout << "Vui long nhap nhieu hon 1 ptu va it hon 100 ptu..." << endl;
//     } while (n <= 0 || n > 100);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> temp;
//         if (check_trung(a, n, temp) == true)
//         {
//             cout << "Ptu vua r da dc nhap vui long nhap lai..." << endl;
//             i--;
//         }
//         else
//             a[i] = temp;
//     }
// }
// void output(int a[], int n)
// {
//     cout << "Cac ptu cua mang: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << "   ";
//     }
//     cout << endl;
// }
// int check_cp(int n)
// {
//     int sqr = sqrt(n);
//     if (sqr * sqr == n)
//         return 1;
//     else
//         return 0;
// }
// void output_cp_le(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (check_cp(a[i]) == 1 && i % 2 == 0)
//         {
//             cout << a[i] << "   ";
//         }
//     }
//     cout << endl;
// }
// void output_vtmax(int a[], int n)
// {
//     int max = a[0], check = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (max < a[i])
//         {
//             max = a[i];
//             check = i;
//         }
//     }
//     cout << "Ptu " << max << " nam o vi tri " << check << endl;
// }
// int sum_vtchan(int a[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 != 0)
//             sum += a[i];
//     }
//     return sum;
// }
// void swap(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }
// void sort(int a[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//                 swap(a[i], a[j]);
//         }
//     }
// }
// void menu(int &chon)
// {
//     cout << "\n-------Menu-------" << endl;
//     cout << "1. Nhap mang" << endl;
//     cout << "2. Xuat mang" << endl;
//     cout << "3. Xuat cac so chinh phuong o vi tri le" << endl;
//     cout << "4. Xuat vi tri ptu lon nhat" << endl;
//     cout << "5. Tong cac ptu vi tri chan" << endl;
//     cout << "6. Sap xep mang tang dan" << endl;
//     cout << "0. Exit" << endl;
//     cout << "\n Chon chuc nang: ";
//     cin >> chon;
// }
// int main()
// {
//     int n, a[100], chon;
//     //input_sl(n);
//     do
//     {
//         menu(chon);
//         switch (chon)
//         {
//         case 1:
//             input(a, n);
//             break;
//         case 2:
//             output(a, n);
//             break;
//         case 3:
//             output_cp_le(a, n);
//             break;
//         case 4:
//             output_vtmax(a, n);
//             break;
//         case 5:
//             cout << "Tong cac ptu nam o vi tri chan: " << sum_vtchan(a, n) << endl;
//             break;
//         case 6:
//             sort(a, n);
//             output(a, n);
//             break;
//         default:
//             break;
//         }
//     } while (chon != 0);
// }

//-------Bai 6-------

//6.2 Co ban

//6.2.1 && 6.2.2 Phan So
// typedef struct PhanSo
// {
//     int tu, mau;
// } PS;
// void input_1PS(PS &x)
// {
//     cout << "Nhap tu so cua PS: ";
//     cin >> x.tu;
//     cout << "Nhap mau so cua PS: ";
//     cin >> x.mau;
//     // cout << "Nhap tu so cua PS2: ";
//     // cin >> y.tu;
//     // cout << "Nhap mau so cua PS2: ";
//     // cin >> y.mau;
// }
// int gcd(int a, int b)
// {
//     a = abs(a), b = abs(b);
//     if (a == 0 || b == 0)
//         return a + b;
//     while (a * b != 0)
//     {
//         if (a > b)
//             a %= b;
//         else
//             b %= a;
//     }
//     return a + b;
// }
// void output_1PS(PS x)
// {
//     // cout << x.tu<< " " << x.mau << endl;
//     if (x.mau == 1)
//         cout << x.tu << endl;
//     else
//         cout << x.tu << "/" << x.mau << endl;
// }
// void rutgon_PS(PS &x)
// {
//     if (x.tu == 0)
//     {
//         return;
//     }
//     else
//     {
//         int c = gcd(x.tu, x.mau);
//         x.tu /= c;
//         x.mau /= c;
//     }
// }
// PS sum_PS(PS x, PS y)
// {
//     PS tong;
//     tong.tu = x.tu * y.mau + x.mau * y.tu;
//     tong.mau = x.mau * y.mau;
//     rutgon_PS(tong);
//     return tong;
// }
// void sosanh_PS(PS x, PS y)
// {
//     int v = x.tu * y.mau - x.mau * y.tu;
//     //return v;
//     if (v > 0)
//     {
//         cout << "PS1 lon hon";
//     }
//     else if (v < 0)
//         cout << "PS2 lon hon";
//     else
//         cout << "2 PS bang nhau";
// }
// void input_nPS(PS a[], int &n)
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         input_1PS(a[i]);
//     }
// }
// void output_nPS(PS a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         output_1PS(a[i]);
//     }
// }
// PS tong_nPS(PS a[], int n)
// {
//     PS tong = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         tong = sum_PS(tong, a[i]);
//     }
//     rutgon_PS(tong);
//     return tong;
// }
// PS search_PSmax(PS a[], int n)
// {
//     PS max = a[0];
//     //(float)a[0].tu / a[0].mau;
//     for (int i = 1; i < n; i++)
//     {
//         if (max.tu / max.mau < (float)a[i].tu / a[i].mau)
//         {
//             max.tu = a[i].tu;
//             max.mau = a[i].mau;
//         }
//     }
//     return max;
// }
// void swap(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }
// void sort_nPS(PS a[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if ((float)a[i].tu / a[i].mau > (float)a[j].tu / a[j].mau)
//                 swap(a[i], a[j]);
//         }
//     }
//     output_nPS(a, n);
// }
// int main()
// {
//     PS a[100], x, y;
//     int n;
//     // input_1PS(x);
//     // input_1PS(y);
//     // cout << "PS1 trc khi rut gon: ";
//     // output_1PS(x);
//     // cout << "PS2 trc khi rut gon: ";
//     // output_1PS(y);
//     // rutgon_PS(x);
//     // rutgon_PS(y);
//     // cout << "PS1: ";
//     // output_1PS(x);
//     // cout << "PS2: ";
//     // output_1PS(y);
//     // PS kq = sum_PS(x, y);
//     // cout << "Tong 2 PS: ";
//     // output_1PS(kq);
//     // sosanh_PS(x, y);
//     input_nPS(a, n);
//     output_nPS(a, n);
//     PS kq = tong_nPS(a, n);
//     cout << "Tong n PS: ";
//     output_1PS(kq);
//     PS kq1 = search_PSmax(a, n);
//     cout << "PS max: ";
//     output_1PS(kq1);
//     sort_nPS(a, n);
// }

//6.2.3 Sinh vien
// struct NS
// {
//     int d, m, y;
// };
// typedef struct SINHVIEN
// {
//     char mssv[11];
//     char ten[11];
//     struct NS ngaySinh;
//     char gt[3];
//     char lop[8];
//     float toan, ly, tin;
// } SV;
// void input_NS(NS &ns)
// {
//     // int check = 0;
//     // while (true)
//     // {
//     cout << "Nhap ngay sinh:";
//     cin >> ns.d;
//     cout << "Nhap thang sinh:";
//     cin >> ns.m;
//     cout << "Nhap nam sinh:";
//     cin >> ns.y;
//     // }
// }
// void input_1SV(SV &sv)
// {
//     cout << "Nhap mssv: ";
//     fflush(stdin);
//     gets(sv.mssv);
//     cout << "Nhap ten: ";
//     fflush(stdin);
//     gets(sv.ten);
//     input_NS(sv.ngaySinh);
//     do
//     {
//         cout << "Nhap gioi tinh (m-nam / f-nu): ";
//         cin >> sv.gt;
//     } while (strcmp(sv.gt, "m") != 0 && strcmp(sv.gt, "f") != 0);
//     cout << "Nhap lop: ";
//     cin >> sv.lop;
//     cout << "Nhap diem toan: ";
//     cin >> sv.toan;
//     cout << "Nhap diem ly: ";
//     cin >> sv.ly;
//     cout << "Nhap diem tin: ";
//     cin >> sv.tin;
// }
// void output_NS(NS ns)
// {
//     cout << ns.d << "/" << ns.m << "/" << ns.y;
// }
// float dtb_1SV(SV sv)
// {
//     return (sv.toan + sv.ly + sv.tin) / 3;
// }
// void output_1SV(SV sv)
// {
//     cout << sv.mssv << " | " << sv.ten << " | ";
//     output_NS(sv.ngaySinh);
//     cout << " | ";
//     if (strcmp(sv.gt, "m") == 0)
//         cout << "Nam" << endl;
//     else
//         cout << "Nu" << endl;
//     cout << sv.lop << endl;
//     cout << dtb_1SV(sv) << endl;
// }
// void input_nSV(SV a[], int &n)
// {
//     cout << "Nhap sl sv:";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << " Sinh vien thu " << i + 1 << endl;
//         input_1SV(a[i]);
//     }
// }
// void output_nSV(SV a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << "\n   --------\n Sinh vien thu " << i + 1 << endl;
//         output_1SV(a[i]);
//     }
// }
// void search_SV(SV a[], int n, char x[])
// {
//     int check = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(x, a[i].ten) == 0)
//         {
//             output_1SV(a[i]);
//             check = 1;
//         }
//     }
//     if (check == 0)
//         cout << "Khong co sinh vien cung ten can tim" << endl;
// }
// int count_DTBlon5(SV a[], int n)
// {
//     int d = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (dtb_1SV(a[i]) > 5)
//             d++;
//     }
//     return d;
// }
// void output_nSVcntt(SV a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         char t[100];
//         strncpy(t, a[i].lop + 3, 2);
//         t[2] = '\0';
//         if (strcmp(t, "CN") == 0)
//             output_1SV(a[i]);
//     }
// }
// void output_nSVnu(SV a[], int n)
// {
//     int check = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(a[i].gt, "f") == 0)
//         {
//             output_1SV(a[i]);
//             check = 1;
//         }
//     }
//     if (check == 0)
//         cout << "Khong co sv nu" << endl;
// }
// void swap(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }
// void sort_nSVdtb(SV a[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (dtb_1SV(a[i]) > dtb_1SV(a[j]))
//                 swap(a[i], a[j]);
//         }
//     }
//     output_nSV(a, n);
// }
// int main()
// {
//     SV a[100];
//     int n;
//     char x[11];
//     input_nSV(a, n);
//     output_nSV(a, n);
//     cout << "\nNhap ten muon tim: ";
//     fflush(stdin);
//     gets(x);
//     search_SV(a, n, x);
//     cout << "Sl sv co dtb >5: " << count_DTBlon5(a, n) << endl;
//     cout << "Danh sach sv thuoc nganh cntt:" << endl;
//     output_nSVcntt(a, n);
//     cout << "Danh sach sv nu:" << endl;
//     output_nSVnu(a, n);
//     cout << "Danh sach sv co dtb tang dan: "<< endl;
//     sort_nSVdtb(a,n);
// }

//made by: _trn.vinh 26/06/2022 22:11:07