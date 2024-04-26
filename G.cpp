//#include<iostream>
//#include<cstring> // 引入字符串处理头文件
//using namespace std;
//
//// 定义中序遍历数组
//int mid[10010];
//// 定义后序遍历数组
//int las[10010];
//// 定义全局变量root，用于存储最终构建的二叉树的根节点索引
//int root;
//// 定义全局变量ml、mr、ll、lr，分别用于记录当前构建子树的中序与后序遍历的左、右边界
//int ml, mr, ll, lr;
//// 定义全局变量mmin，用于记录当前构建子树中的最小值
//int mmin;
//
//void build(int ml, int mr, int ll, int lr) {
//    // 如果当前子树只包含一个节点（即没有子节点）
//    if (ml == mr) {
//        // 如果当前节点的值大于全局变量mmin，则更新mmin为当前节点的值
//        if (mmin > las[lr]) {
//            mmin = las[lr];
//        }
//        return;
//    }
//    // 在中序遍历的范围内寻找根节点，根节点是后序遍历中最后一个元素，其在中序遍历中的位置即为右边界的索引
//    for (int i = ml; i <= mr; i++) {
//        // 当找到中序遍历中的根节点时
//        if (mid[i] == las[lr]) {
//            // 递归构建左子树，传入当前子树的中序左边界、中序右边界、后序左边界和后序右边界
//            build(ml, i - 1, ll, ll + i - ml - 1);
//            // 递归构建右子树，传入当前子树的中序左边界、中序右边界、后序左边界和后序右边界
//            build(i + 1, mr, ll + i - ml, lr - 1);
//            // 由于已经找到根节点，所以不需要继续在当前层级查找其他节点
//            break;
//        }
//    }
//}
//
//int main() {
//    int t; // 定义变量t，用于存储测试用例的数量
//
//    // 循环读取每个测试用例
//    while (cin >> t) {
//        for (int i = 0; i < t; i++) {
//            // 循环读取每个测试用例的中序遍历序列
//            cin >> mid[i];
//        }
//        for (int i = 0; i < t; i++) {
//            // 循环读取每个测试用例的后序遍历序列
//            cin >> las[i];
//        }
//        // 初始化全局变量mmin为一个很大的值
//        mmin = 100000000;
//        // 调用build函数，传入整个中序遍历序列的范围和后序遍历序列的范围，开始构建二叉树
//        build(0, t - 1, 0, t - 1);
//        // 输出找到的最小值
//        cout << mmin << endl;
//        // 清空数组，为下一个测试用例做准备
//        memset(mid, 0, sizeof mid);
//        memset(las, 0, sizeof las);
//    }
//    return 0;
//}