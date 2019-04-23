/*
7-1 大美数 （15 分）
若正整数 N 可以整除它的 4 个不同正因数之和，则称这样的正整数为“大美数”。本题就要求你判断任一给定的正整数是否是“大美数”。

输入格式：
输入在第一行中给出正整数 K（≤10），随后一行给出 K 个待检测的、不超过 10
​4
​​  的正整数。

输出格式：
对每个需要检测的数字，如果它是大美数就在一行中输出 Yes，否则输出 No。

输入样例：
3
18 29 40
输出样例：
Yes
No
Yes

考场数据：
分数  通过数 提交数 通过率
15  63  3411    0.02
做题手记：A能整除B的意思是A和B可以互相整除。
*/
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int n,m,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
        vector<int> v;
        for(int j=1;j<=m;j++){
            if(m%j==0){
                v.push_back(j);
            }
        }
        int l=v.size(),sum=0,flag=0;
        for(int j=0;j<l-3;j++){
            for(int k=j+1;k<l-2;k++){
                for(int o=k+1;o<l-1;o++){
                    for(int p=o+1;p<l;p++){
                        sum=v[j]+v[k]+v[o]+v[p];
                        if(m%sum==0&&flag==0){
                            cout<<"Yes\n";
                            flag=1;
                        }
                        if(sum%m==0&&flag==0){
                            cout<<"Yes\n";
                            flag=1;
                        }
                    }
                }
            }
        }
    if(flag==0)cout<<"No\n";
	}

	return 0;
}
