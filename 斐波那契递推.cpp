#include <iostream>
using namespace std;
public static int Fibonacci1(int n){
		if(n<0){
			return 0;
		}
		else if(n==1||n==2){
			return 1;
		}
		//n=1时候总和为1 n=2时候总和为1
		int sta=1;
		int end=1;
		//定义一个中介值
		int temp;
		//当n=3时候开始计算 一直计算到传入的n 为止
		for (int i = 3; i <= n; i++) {
		    //先把第一个值给中间值存储 然后下一步将当前的最后一个值给到第一个值 已免sta值被覆盖
			temp=sta;
			//再把当前的第二个值给到sta 作为下一次计算结果的第一个值
			sta=end;
			//最终的结果就是原始的第一个值加上第二个值 而这个计算出来的end就是当前的结果
			// 也是下一次计算时候的第二个值哈
			end=temp+end;
		}
		return end;
	}

