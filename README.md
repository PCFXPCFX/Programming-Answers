# 我的编程解答记录

欢迎来到我的解答仓库！这里记录了我在不同平台上做题的解答，旨在展示我的成长与学习过程。希望通过保存一些有意义的题目，而非水题，来帮助我建立良好的算法思维。

## 目录

- [关于我](#关于我)
- [解答列表](#解答列表)
- [贡献](#贡献)
- [许可证](#许可证)

## 关于我

我是一名广东寄宿吃饭大学计算机专业的大学生，正在不断探索和提升自己的技能。希望通过这些解答帮助自己复习和回顾，同时与大家分享学习的过程。

## 解答列表

解答列表分为**算法学习**和**基础**两个部分，以便于更好地区分和查找：

## 灵茶山艾府 灵神刷题路线

### 滑动窗口与双指针（定长/不定长/单序列/双序列/三指针）

##### 一、定长滑动窗口

| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
| [1456. 定长子串中元音的最大数目](https://leetcode.cn/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/) | [链接](https://github.com/PCFXPCFX/Programming-Answers/edit/main/EndlessCheng/滑动窗口/1456.%20%E5%AE%9A%E9%95%BF%E5%AD%90%E4%B8%B2%E4%B8%AD%E5%85%83%E9%9F%B3%E7%9A%84%E6%9C%80%E5%A4%A7%E6%95%B0%E7%9B%AE.md) | 2024年10月31日 |
|[643. 子数组最大平均数 I](https://leetcode.cn/problems/maximum-average-subarray-i/description/) | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/643.%20%E5%AD%90%E6%95%B0%E7%BB%84%E6%9C%80%E5%A4%A7%E5%B9%B3%E5%9D%87%E6%95%B0%20I.cpp) | 2024年10月31日 |
|[1343. 大小为 K 且平均值大于等于阈值的子数组数目](https://leetcode.cn/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/description/)  | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/1343.%20%E5%A4%A7%E5%B0%8F%E4%B8%BA%20K%20%E4%B8%94%E5%B9%B3%E5%9D%87%E5%80%BC%E5%A4%A7%E4%BA%8E%E7%AD%89%E4%BA%8E%E9%98%88%E5%80%BC%E7%9A%84%E5%AD%90%E6%95%B0%E7%BB%84%E6%95%B0%E7%9B%AE.cpp)   | 2024年11月1日 |
|[2090. 半径为 k 的子数组平均值](https://leetcode.cn/problems/k-radius-subarray-averages/) |[链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/2090.%20%E5%8D%8A%E5%BE%84%E4%B8%BA%20k%20%E7%9A%84%E5%AD%90%E6%95%B0%E7%BB%84%E5%B9%B3%E5%9D%87%E5%80%BC.cpp) |2024年11月1日|
|[2379. 得到 K 个黑块的最少涂色次数](https://leetcode.cn/problems/minimum-recolors-to-get-k-consecutive-black-blocks/) | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/2379.%20%E5%BE%97%E5%88%B0%20K%20%E4%B8%AA%E9%BB%91%E5%9D%97%E7%9A%84%E6%9C%80%E5%B0%91%E6%B6%82%E8%89%B2%E6%AC%A1%E6%95%B0.cpp) | 2024年11月1日 |
|[1052. 爱生气的书店老板](https://leetcode.cn/problems/grumpy-bookstore-owner/description/) | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/1052.%20%E7%88%B1%E7%94%9F%E6%B0%94%E7%9A%84%E4%B9%A6%E5%BA%97%E8%80%81%E6%9D%BF.cpp) | 2024年11月1日 |
|[1461. 检查一个字符串是否包含所有长度为 K 的二进制子串](https://leetcode.cn/problems/check-if-a-string-contains-all-binary-codes-of-size-k/description/) | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/1461.%20%E6%A3%80%E6%9F%A5%E4%B8%80%E4%B8%AA%E5%AD%97%E7%AC%A6%E4%B8%B2%E6%98%AF%E5%90%A6%E5%8C%85%E5%90%AB%E6%89%80%E6%9C%89%E9%95%BF%E5%BA%A6%E4%B8%BA%20K%20%E7%9A%84%E4%BA%8C%E8%BF%9B%E5%88%B6%E5%AD%90%E4%B8%B2.cpp) | 2024年11月2日 |
|[2841. 几乎唯一子数组的最大和](https://leetcode.cn/problems/maximum-sum-of-almost-unique-subarray/description/)  | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/2841.%20%E5%87%A0%E4%B9%8E%E5%94%AF%E4%B8%80%E5%AD%90%E6%95%B0%E7%BB%84%E7%9A%84%E6%9C%80%E5%A4%A7%E5%92%8C.cpp) |2024年11月2日|

#### 二、不定长滑动窗口
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
|[1208. 尽可能使字符串相等](https://leetcode.cn/problems/get-equal-substrings-within-budget/description/) |[链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/1208.%20%E5%B0%BD%E5%8F%AF%E8%83%BD%E4%BD%BF%E5%AD%97%E7%AC%A6%E4%B8%B2%E7%9B%B8%E7%AD%89.cpp)|2024年12月9日|
|[2730. 找到最长的半重复子字符串](https://leetcode.cn/problems/find-the-longest-semi-repetitive-substring/description/)|[链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/%E6%BB%91%E5%8A%A8%E7%AA%97%E5%8F%A3/2730.%20%E6%89%BE%E5%88%B0%E6%9C%80%E9%95%BF%E7%9A%84%E5%8D%8A%E9%87%8D%E5%A4%8D%E5%AD%90%E5%AD%97%E7%AC%A6%E4%B8%B2.cpp)|2024年12月10日|
|[904. 水果成篮](https://leetcode.cn/problems/fruit-into-baskets/description/)|[链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/%E6%BB%91%E5%8A%A8%E7%AA%97%E5%8F%A3/904.%20%E6%B0%B4%E6%9E%9C%E6%88%90%E7%AF%AE.cpp)|2024年12月10日|

#### 三、单序列双指针
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
| [344. 反转字符串](https://leetcode.cn/problems/reverse-string/description/)|[链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/344.%20%E5%8F%8D%E8%BD%AC%E5%AD%97%E7%AC%A6%E4%B8%B2.md) |2024年11月1日|
|[125. 验证回文串](https://leetcode.cn/problems/valid-palindrome) |[链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/125.%20%E9%AA%8C%E8%AF%81%E5%9B%9E%E6%96%87%E4%B8%B2.md) |2024年11月1日 |
|[209. 长度最小的子数组](https://leetcode.cn/problems/minimum-size-subarray-sum/description/) |[链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/EndlessCheng/滑动窗口/209.%20%E9%95%BF%E5%BA%A6%E6%9C%80%E5%B0%8F%E7%9A%84%E5%AD%90%E6%95%B0%E7%BB%84.md) | 2024年11月5日 |





### 二分算法（二分答案/最小化最大值/最大化最小值/第K小）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 单调栈（基础/矩形面积/贡献法/最小字典序）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 网格图（DFS/BFS/综合应用）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 位运算（基础/性质/拆位/试填/恒等式/思维）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 图论算法（DFS/BFS/拓扑排序/最短路/最小生成树/二分图/基环树/欧拉路径）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 动态规划（入门/背包/状态机/划分/区间/状压/数位/数据结构优化/树形/博弈/概率期望）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 常用数据结构（前缀和/差分/栈/队列/堆/字典树/并查集/树状数组/线段树）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 数学算法（数论/组合/概率期望/博弈/计算几何/随机算法）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 贪心与思维（基本贪心策略/反悔/区间/字典序/数学/思维/脑筋急转弯/构造）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 链表、二叉树与一般树（前后指针/快慢指针/DFS/BFS/直径/LCA）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|
### 字符串（KMP/Z函数/Manacher/字符串哈希/AC自动机/后缀数组/子序列自动机）
| 题目       | 解答链接                   | 日期     |
|------------|---------------------------|----------|

### 基础

包含编程语言基础知识的题目和解答，帮助巩固语法和常用数据结构的理解。

#### C语言/C++

##### LeetCode

| 题目                               | 平台      | 解答链接                                                                                                                                     |
|-----------------------------------|-----------|--------------------------------------------------------------------------------------------------------------------------------------------|
| 2535. 数组元素和与数字和的绝对差 | LeetCode  | [链接](https://github.com/PCFXPCFX/leetcode-solution/blob/main/leetcode/2535difference-between-element-sum-and-digit-sum-of-an-array.c) |
| 1014. 最佳观光组合               | LeetCode  | [链接](https://github.com/PCFXPCFX/leetcode-solution/blob/main/leetcode/1014.%20Best%20Sightseeing%20Pair.c)                           |
| 1470. 重新排列数组               | LeetCode  | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/leetcode/1470.%20%E9%87%8D%E6%96%B0%E6%8E%92%E5%88%97%E6%95%B0%E7%BB%84) |
| 21. 合并两个有序链表             | LeetCode  | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/leetcode/21.%20%E5%90%88%E5%B9%B6%E4%B8%A4%E4%B8%AA%E6%9C%89%E5%BA%8F%E9%93%BE%E8%A1%A8.cpp) |
| 2. 两数相加                      | LeetCode  | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/leetcode/2.%20%E4%B8%A4%E6%95%B0%E7%9B%B8%E5%8A%A0.cpp)             |
| 445. 两数相加 II                 | LeetCode  | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/leetcode/445.%20%E4%B8%A4%E6%95%B0%E7%9B%B8%E5%8A%A0%20II.cpp)      |

##### 941

| 题目               | 平台 | 解答链接                                                                                                          |
|-------------------|------|------------------------------------------------------------------------------------------------------------------|
| 宝石与物品栏      | 941  | [链接](https://github.com/PCFXPCFX/leetcode-solution/blob/main/941solution/F1003%20%E5%AE%9D%E7%9F%B3%E4%B8%8E%E7%89%A9%E5%93%81%E6%A0%8F.c) |
| 冒泡排序         | 941  | [链接](https://github.com/PCFXPCFX/leetcode-solution/blob/main/941solution/YBT2039%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F.c)                     |
| 【2023新生组】【J】1或145 进阶 | 941  | [链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/941solution/C1009%E3%80%902023%E6%96%B0%E7%94%9F%E7%BB%84%E3%80%91%E3%80%90J%E3%80%911%E6%88%96145%20-%20%E8%BF%9B%E9%98%B6.md) |
|【2023新生组】【F】落花流水 | 941 |[链接](https://github.com/PCFXPCFX/Programming-Answers/blob/main/941solution/P949%E3%80%902023%E6%96%B0%E7%94%9F%E7%BB%84%E3%80%91%E3%80%90F%E3%80%91%E8%90%BD%E8%8A%B1%E6%B5%81%E6%B0%B4.c) |

##### Nowcoder

| 题目                  | 平台     | 解答链接                                                                                     |
|----------------------|----------|-----------------------------------------------------------------------------------------------|
| A小红的字符移动     | 牛客周赛 | [链接](https://github.com/PCFXPCFX/leetcode-solution/blob/main/nowcoder/Round62/A.c)       |
| B小红的数轴移动     | 牛客周赛 | [链接](https://github.com/PCFXPCFX/leetcode-solution/blob/main/nowcoder/Round62/B.c)       |
| C小红的圆移动       | 牛客周赛 | [链接](https://github.com/PCFXPCFX/leetcode-solution/blob/main/nowcoder/Round62/C.c)       |

## 贡献

如果你发现我在解答中有错误或可以改进的地方，请在 [Issues](https://github.com/PCFXPCFX/leetcode-solution/issues) 中指出。我会非常感激你的反馈！

## 许可证

本仓库中的内容遵循 [MIT 许可证](LICENSE)。
