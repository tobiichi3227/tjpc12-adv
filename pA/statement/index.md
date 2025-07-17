# pA. Min XOR Sum

## 題目敘述

恭喜各位完成為期4天的程設營進階班課程，想必各位現在一定是迫不及待想要練習新題目了!

因此我們提供了一個開胃小菜作為本比賽的開始!

給你一個長度為 $N$ 的數列，求選擇 $1$ ~ $N$ 個數字的最小 **XOR** 和

**什麼是 XOR ?** 

對於非負整數 $A$ 和 $B$，其 XOR（記作 $A \oplus B$）定義如下：  

在 $A \oplus B$ 的二進位表示中，對應 $2^k$（ $k \ge 0$ ）這一位的數位為 $1$ 當且僅當 $A$ 和 $B$ 在相同位元位置上恰好有一個為 $1$，否則該位數為 $0$。  

$$
\text{例如，}
3 \oplus 5 = 6
\qquad\bigl(\text{二進位：} 011 \oplus 101 = 110\bigr).
$$

XOR擁有交換律跟結合律，並且$0 \oplus A = A , \space A \oplus A = 0$

XOR在C++中的運算符號為 "**^**", 例如
```C++
int c = a^b;
```
就是代表 $c = a \oplus b$

\clearpage

## 輸入

第一行給定一個數字 $N$ ， 代表數列的長度

第二行有 $N$ 個整數 $A_i, \space (1\le i \le N), \space (1\le A_i \le 2^{31})$

## 輸出

輸出選擇 $1$ ~ $N$ 個數字的最小 **XOR** 和

## 輸入限制
- $1 \leq n \leq 20$
- $1 \leq A_i \leq 2^{31}$

## 子任務
\subtasks

\clearpage

## 範例輸入
\testfile{0-01.in}

## 範例輸出
\testfile{0-01.out}

## 範例測資解釋
選擇{2, 4, 8, 16, 31}，計算出他們的XOR sum是1，沒有XOR sum比1更小的方案，因此輸出1
