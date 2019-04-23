/*7-4 性感素数 （20 分）
“性感素数”是指形如 (p, p+6) 这样的一对素数。之所以叫这个名字，是因为拉丁语管“六”叫“sex”（即英语的“性感”）。（原文摘自 http://mathworld.wolfram.com/SexyPrimes.html）

现给定一个整数，请你判断其是否为一个性感素数。

输入格式：
输入在一行中给出一个正整数 N (≤10
​8
​​ )。

输出格式：
若 N 是一个性感素数，则在一行中输出 Yes，并在第二行输出与 N 配对的另一个性感素数（若这样的数不唯一，输出较小的那个）。若 N 不是性感素数，则在一行中输出 No，然后在第二行输出大于 N 的最小性感素数。

输入样例 1：
47
输出样例 1：
Yes
41
输入样例 2：
21
输出样例 2：
No
23
分数	通过数	提交数	通过率
20	154	3783	0.04
做题手记：
这道题需要之前写过判断素数函数的经验。如果有些测试点不能过，可以重读题目，找一下之前自己没有想到的地方。
*/
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
using namespace std;
bool f(int n){
	if(n<2)return false;
	if(n==2)return true;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	if(f(n)==true){
		if(f(n-6)==true){
			cout<<"Yes\n"<<n-6;
			return 0;
		}
		else if(f(n+6)==true){
			cout<<"Yes\n"<<n+6;
			return 0;
		}
	}
	cout<<"No\n";
	for(int i=n+1;i<999999999;i++){
		if(f(i)==true&&f(i+6)==true){
			cout<<i;
			return 0;
			}
		if(f(i)==true&&f(i-6)==true){
			cout<<i;
			return 0;
			}
	}
	return 0;
}
