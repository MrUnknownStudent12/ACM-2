#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (long long)pow(3, n-1)+1 << '\n';
    }
    return 0;
}
/*
因为最大的可以放在最上面, 所以就不能像 汉诺塔III那样把前n-1个盘全部从1->3了.
  
只要把前n-1个盘从1->2,然后把第n个盘1->2->3,然后把前n-1个盘2->3, 这样就完成了.

所以,问题现在转换成 n 个盘移动一步需要多少次.   我们可以看到, 除了最后一个最

大的盘n以外, 前n-1个盘的移动方式是和 汉诺塔III的规则是一样的.所以我们先把前
 
n-2 个盘 1->3, 然后把 第n-1个盘 1->2, 再把前n-2个盘 3->2, 这样就把前 n-1个盘
 
1->2 移动了一步.
因为把 n 个盘 按找汉诺塔III的方法 1->3 需要 3n -1 推导见 :

                              HDOJ HDU 2064 汉诺塔III ACM 2064 IN HDU 

所以由上面描述的步骤知道把 n 个盘移动一步需要 : f(n) = f(n-1) + ( 3n-1 - 1 ) + 1 = f (n-1) + 3n-1 而 f(1) = 1 
由递推式化简得: f(n) = 3n-1 + 3n-2 + ...+ 3 + 1 = ( 3n -1 ) / 2
所以按 汉诺塔IV的规则, 移动 n 个盘 需要 : m(n) = 2 * f (n-1) + 2 = 3n-1 + 1
 Problem Description
 还记得汉诺塔III吗？他的规则是这样的：不允许直接从最左(右)边移到最右(左)边(每次移动一定是移到中间杆或从中间移出)，也不允许大盘放到小盘的上面。xhd在想如果我们允许最大的盘子放到最上面会怎么样呢？（只允许最大的放在最上面）当然最后需要的结果是盘子从小到大排在最右边。
 Input
 输入数据的第一行是一个数据T，表示有T组数据。
 每组数据有一个正整数n(1 <= n <= 20)，表示有n个盘子。
 Output
 对于每组输入数据，最少需要的摆放次数。
 Sample Input
 2
 1
 10
 Sample Output
 2
 19684
*/