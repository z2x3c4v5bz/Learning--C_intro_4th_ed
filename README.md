# C 語言教學手冊 第四版 (習題個人解答) #

[![issue](https://img.shields.io/github/issues/z2x3c4v5bz/Learning--C_intro_4th_ed)](https://github.com/z2x3c4v5bz/Web-Learning-HTML_CSS/issues)
[![forks](https://img.shields.io/github/forks/z2x3c4v5bz/Learning--C_intro_4th_ed)](https://github.com/z2x3c4v5bz/Web-Learning-HTML_CSS/network)
[![stars](https://img.shields.io/github/stars/z2x3c4v5bz/Learning--C_intro_4th_ed)](https://github.com/z2x3c4v5bz/Web-Learning-HTML_CSS/stargazers)
[![release](https://img.shields.io/github/release/z2x3c4v5bz/Learning--C_intro_4th_ed/all)](https://github.com/z2x3c4v5bz/Web-Learning-HTML_CSS/releases)
[![license](https://img.shields.io/github/license/z2x3c4v5bz/Learning--C_intro_4th_ed)](https://github.com/z2x3c4v5bz/Web-Learning-HTML_CSS/blob/main/LICENSE)

## Abstract ##

**Title:** C 語言教學手冊 第四版

**Auther:** 洪維恩

**Introduction:**

- 循序漸進從頭打好 C 語言基礎
- 豐富範例展示語法最容易理解
- 每章附有自我評量教學最適用
- 資料結構基本觀念導入最易懂

## Table of Contents ##

- [C 語言教學手冊 第四版 (習題個人解答)](#c-語言教學手冊-第四版-習題個人解答)
  - [Abstract](#abstract)
  - [Table of Contents](#table-of-contents)
  - [第 01 章 -- 認識 C 語言](#第-01-章----認識-c-語言)
  - [第 02 章 -- C 語言基本概述](#第-02-章----c-語言基本概述)
  - [第 03 章 -- 基本資料型態](#第-03-章----基本資料型態)
  - [第 04 章 -- 格式化的輸出與輸入](#第-04-章----格式化的輸出與輸入)
  - [第 05 章 -- 運算子、運算式與敘述](#第-05-章----運算子運算式與敘述)
  - [第 06 章 -- 選擇性敘述](#第-06-章----選擇性敘述)
  - [第 07 章 -- 迴圈](#第-07-章----迴圈)
  - [第 08 章 -- 函數](#第-08-章----函數)
  - [第 09 章 -- 陣列與字串](#第-09-章----陣列與字串)
  - [第 10 章 -- 指標](#第-10-章----指標)
  - [第 11 章 -- 結構與其他資料型態](#第-11-章----結構與其他資料型態)
  - [第 12 章 -- 檔案處理](#第-12-章----檔案處理)
  - [第 13 章 -- 大型程式的發展](#第-13-章----大型程式的發展)
  - [第 14 章 -- 動態記憶體配置與鏈結串列](#第-14-章----動態記憶體配置與鏈結串列)
  - [第 15 章 -- 位元處理](#第-15-章----位元處理)
  - [第 16 章 -- 邁向 C++ 之路](#第-16-章----邁向-c-之路)

## 第 01 章 -- 認識 C 語言 ##

- C 語言概述
- 程式的規劃與實作
- 撰寫第一個 C 程式
- 編譯與執行的過程
- 本書的編排與慣例

|  Number  | Question |
|:--------:|:---------|
| [1-13](ch01/hw1_13/hw1_13.c) | 試修改 prog1_1，使得它可以印出 "我愛C語言" 一行中文字。 |
| [1-14](ch01/hw1_14/hw1_14.c) | 試修改 prog1_1，使得它可以印出 "我愛C語言" 及 "這是我的第一個C語言程式兩行中文字。 |
| [1-15](ch01/hw1_15/hw1_15.c) | 試撰寫一程式，利用 printf() 函數印出下面的圖案（不須使用迴圈，每一列星號請用一個 printf() 函數來列印）： |
| [1-16](ch01/hw1_16/hw1_16.c) | 試以 printf() 函數印出下面的圖案（不需使用迴圈，每一列星號請用一個 printf() 函數來列印）： |
| [1-17](ch01/hw1_17/hw1_17.c) | 試撰寫一程式，利用 printf() 函數以星號和空白字元印出下面的圖案： |

※ 原諒我表格內不附圖示。

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 02 章 -- C 語言基本概述 ##

- 簡單的例子
- 解析 C 語言
- 識別字與關鍵字
- 偵錯
- 提高程式的可讀性

|  Number  | Question |
|:--------:|:---------|
| [2-3](ch02/hw2_3/hw2_3.c) | 試寫一個程式，可以列印出 "You are my best friend." 字串。 |
| [2-4](ch02/hw2_4/hw2_4.c) | 試寫一個程式，可以印出如下的輸出結果：<br>`See you tomorrow.`<br>`Have a good night.` |
| [2-5](ch02/hw2_5/hw2_5.c) | 試寫一程式，可計算 5+12 的值，並將結果列印出來。 |
| [2-6](ch02/hw2_6/hw2_6.c) | 試寫一程式，可計算 6+7+24 的值，並將結果列印出來。 |
| [2-7](ch02/hw2_7/hw2_7.c) | 試在您所使用的 C 語言開發環境裡找出 stdio.h 與 stdlib.h 這兩個檔案，請將它們的內容分別拷貝起來，然後分別貼在 hw2_1.c 裡的第 2 行與第 3 行的位置，取代掉<br>`#include <stdio.h>`<br>`#include <stdlib.h>`<br>這兩行，最後再編譯之。<br>以上的動作事實上就是編譯器所做的 "含括" 動作，只是現在是以手動方式將 stdio.h 與 stdlib.h 這兩個檔案含括進來罷了！如果執行本範例，您是否會得到與習題 1 相同的結果？ |
| [2-8](ch02/hw2_8/hw2_8.c) | 試仿照習題 7 的步驟，將 prog2_2 重新編譯並執行之。 |
| [2-10](ch02/hw2_10/hw2_10.c) | 試修改 prog2_2，使得第 9 行與第 10 行可以合併成一行來撰寫。
| [2-11](ch02/hw2_11/hw2_11.c) | 試以 printf() 函數印出如下的圖案： |
| [2-20](ch02/hw2_20/hw2_20.c) | 下面是一個簡單的 C 程式碼，但程式的編排方式並不易於閱讀。請重新編排它來提高程式的可讀性：<br>`01　　/* hwh2_20.c, 基本程式的練習 */`<br>`02　　#include <stdio.h>`<br>`03　　#include <stdlib.h>`<br>`04　　int main(void){int i=5;`<br>`05　　printf("%d+%d=%d\n",i,i,i+i);`<br>`06　　system("pause");return 0; }` |
| [2-21](ch02/hw2_21/hw2_21.c) | 接續習題 20，試將習題 20 重新編排後，再加上適當註解，使得程式碼更具可讀性。 |

※ 原諒我表格內不附圖示。

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 03 章 -- 基本資料型態 ##

- 變數與常數
- 基本資料型態
- 查詢常數、變數或資料型態所佔位元組
- 資料型態的轉換

|  Number  | Question |
|:--------:|:---------|
| [3-2](ch03/hw3_2/hw3_2.c) | 試修改 prog3_1，使得第 9 行與第 10 行可分別印出 num1 與 num2 的平方值。第 9 行與第 10 行的輸出結果應如下所示：<br>`num1 的平方為 153760000`<br>`num2 的平方為 27.394756` |
| [3-12](ch03/hw3_12/hw3_12.c) | 試寫一程式，利用設定字元變數 ch 為 ASCII 碼的方式讓電腦發出一個警告音（警告音的 ASCII 碼為 7）。 |
| [3-14](ch03/hw3_14/hw3_14.c) | 請參閱下面的程式碼，然後回答接續的問題：<br>`01　　/* hw13_14, 數字溢位的練習 */`<br>`02　　#include <stdio.h>`<br>`03　　#include <stdlib.h>`<br>`04　　int main(void)`<br>`05　　{`<br>`06　　  unsigned short num=80000;`<br>`07　　  printf("%d\n",num);`<br>`08　　`<br>`09　　  system("pause");`<br>`10　　  return 0;`<br>`11　　}`<br>(a) 試說明執行此程式的結果，為什麼是 14464，而不是 80000 這個數字？<br>(b) 如果想讓本題第 7 行的執行結果恰好為 80000，應如何修改程式碼？ |
| [3-15a](ch03/hw3_15a/hw3_15a.c)<br>[3-15c](ch03/hw3_15c/hw3_15c.c) | 請參閱下面的程式碼，然後回答接續的問題：<br>`01　　/* hw3_15, 數字精度的問題 */`<br>`02　　#include <stdio.h>`<br>`03　　#include <stdlib.h>`<br>`04　　int main(void)`<br>`05　　{`<br>`06　　  float num1=30000.1F;`<br>`07　　  float num2=0.0004F;`<br>`08　　  printf("%f\n",num1+num2);`<br>`09　　`<br>`10　　  system("pause");`<br>`11　　  return 0;`<br>`12　　}`<br>(a) 試執行此程式碼，您會得到什麼結果？<br>(b) 於數學上，30000.1+0.0004=30000.1004，試說明執行此程式碼後，為什麼得不到這個結果？<br>(c) 如果想讓本題的執行結果恰好為 30000.1004，應如何改進？試撰寫一個完整的程式碼來改進之。 |
| [3-16](ch03/hw3_16/hw3_16.c) | 試撰寫一程式，利用 sizeof 關鍵字查詢下列各種資料型態所佔的位元組：<br>(a) `unsigned int`<br>(b) `double`<br>(c) `unsigned short int` |
| [3-17](ch03/hw3_17/hw3_17.c) | 試撰寫一程式，利用 sizeof 關鍵字查詢下列各常數所佔的位元組：<br>(a) 578<br>(b) 784000000<br>(c) 6.78f<br>(d) 718.26<br>(e) 6.42e127 |
| [3-18](ch03/hw3_18/hw3_18.c) | 假設浮點數變數 num1 與 num2 的值分別為 123.39f 與 3.8e5f，試撰寫一程式，將這兩個變數值轉換成整數。 |
| [3-19b](ch03/hw3_19b/hw3_19b.c) | 請參閱下面的程式碼，然後回答接續的問題：<br>`01　　/* hw3_19, 型態轉換的練習 */`<br>`02　　#include <stdio.h>`<br>`03　　#include <stdlib.h>`<br>`04　　int main(void)`<br>`05　　{`<br>`06　　  int num1=5,num2=8;`<br>`07　　  printf("%d\n",num1/num2);`<br>`08　　`<br>`09　　  system("pause");`<br>`10　　  return 0;`<br>`11　　}`<br>(a) 試解釋第 7 行的輸出結果為何是 0？<br>(b) 試修改程式碼，利用型態轉換的方式，使得第 7 行的輸出結果為 0.625000。 |

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 04 章 -- 格式化的輸出與輸入 ##

- 輸出函數 printf()
- 輸入函數 scanf()
- 使用 scanf() 函數應注意的事項
- 輸出、輸入字元的函數

|  Number  | Question |
|:--------:|:---------|
| [4-1](ch04/hw4_1/hw4_1.c) | 試撰寫一程式，利用 printf() 函數列印出如下的字串：<br>`I love C language best.` |
| [4-2](ch04/hw4_2/hw4_2.c) | 試撰寫一程式，利用 printf() 函數列印出如下的字串（必須包含雙引號）：<br>`"I love C language best."` |
| [4-3](ch04/hw4_3/hw4_3.c) | 試嘗試利用一個 printf() 函數將字串常數 "Hello, C" 與 "Hello, World" 分別列印在不同一行（必須包含雙引號）。 |
| [4-4](ch04/hw4_4/hw4_4.c) | 試撰寫一程式，利用 printf() 函數列印出如下的字串（必須包含雙引號）：<br>`10/4=25"` |
| [4-5](ch04/hw4_5/hw4_5.c) | 試撰寫一程式，利用 printf() 函數列印出如下的字串（必須包含單引號）：<br>'30% 的學生來自中部地區，42% 的學生來自南部地區。' |
| [4-6](ch04/hw4_6/hw4_6.c) | 試撰寫一程式，將浮點數變數 num=28.47f 以下圖的格式印出（小數點前面有 4 位，小數點後面有 2 位，不滿欄位長度時填入 0）： |
| [4-7](ch04/hw4_7/hw4_7.c) | 試撰寫一程式，將浮點數變數 num=12.34f 以下圖的格式印出（小數點前面有 4 位，小數點後面有 2 位，不滿欄位長度時填入 0，並印出其變數的正負號）： |
| [4-8](ch04/hw4_8/hw4_8.c) | 試撰寫一程式，利用 printf() 函數將下列字串印出：<br>`There is an old saying, "Love me, love my dog."` |
| [4-10](ch04/hw4_10/hw4_10.c) | 試撰寫一程式，利用 scanf() 函數輸入兩個整數，然後以 printf() 函數列印出這兩個整數的乘積。 |
| [4-11](ch04/hw4_11/hw4_11.c) | 試撰寫一程式，由鍵盤輸入學生的學號（整數型態）及年齡（整數型態），輸入完畢後將剛才所輸入的內容印出在螢幕中。 |
| [4-12](ch04/hw4_12/hw4_12.c) | 試撰寫一程式，由使用者先輸入姓氏，再輸入名字，輸出時則先印出名字，再印出姓氏。 |
| [4-13](ch04/hw4_13/hw4_13.c) | 試撰寫一程式，輸入一長度最多為 10，且不包括空白的字串，並做下列的處理。<br>(a) 以雙引號將字串包圍。<br>(b) 以反斜線 \ 將字串包圍，印出時的欄寬為 20。<br>(c) 以反斜線 \ 將字串包圍，印出時的欄寬為 20，靠左印出。 |
| [4-14](ch04/hw4_14/hw4_14.c) | 試撰寫一程式，由鍵盤輸入一個十進位的整數，然後印出該整數的八進位和十六進位。 |
| [4-15](ch04/hw4_15/hw4_15.c) | 試撰寫一程式，由鍵盤輸入一個十六進位的整數，然後印出該整數的八進位和十進位。 |
| [4-16](ch04/hw4_16/hw4_16.c) | 試著利用下面的程式，將字串 "No more goodbye" 輸入：<br>`01　　/* hw4_16, 輸入字串的錯誤 */`<br>`02　　#include <stdio.h>`<br>`03　　#include <stdlib.h>`<br>`04　　int main(void)`<br>`05　　{`<br>`06　　  char str[25];`<br>`07　　`<br>`08　　  printf("Input a string:");`<br>`09　　  scanf("%s",str);`<br>`10　　  printf("The string is %s\n",str);`<br>`11　　`<br>`12　　  system("pause");`<br>`13　　  return 0;`<br>`14　　}`<br>(a) 根據執行的結果，您發現了什麼？為什麼會有這樣的執行結果？<br>(b) 試撰寫程式碼，可以將本例中，由鍵盤所輸入的 "No more goodbye" 字串裡所有的英文字母全部讀出，並列印出來。 |
| [4-17](ch04/hw4_17/hw4_17b.c) | 請先執行下面的程式碼，然後回答接續的問題：<br>`01　　/* hw4_17, 輸入字串的錯誤 */`<br>`02　　#include <stdio.h>`<br>`03　　#include <stdlib.h>`<br>`04　　int main(void)`<br>`05　　{`<br>`06　　  char ch1,ch2;`<br>`07　　`<br>`08　　  printf("請輸入第一個字元:");`<br>`09　　  scanf("%c",&ch1);`<br>`10　　  printf("請輸入第二個字元:");`<br>`11　　  scanf("%c",&ch2);`<br>`12　　  printf("ch1=%c, ch2=%c\n",ch1,ch2);`<br>`13　　`<br>`14　　  system("pause");`<br>`15　　  return 0;`<br>`16　　}`<br>(a) 試說明為什麼第二個字元無法順利輸入？<br>(b) 試修改第 11 行的格式字串，使得本例中的第二個字元可以順利的輸入。<br>(c) 試撰寫程式碼，利用 fflush() 函數來清空緩衝區內的資料，使得本例中的第二個字元可以順利的輸入。 |
| [4-19](ch04/hw4_19/hw4_19.c) | 試修改 prog4_20 的第 14 行，以 getchar() 函數來取代。 |
| [4-20](ch04/hw4_20/hw4_20.c) | 試修改 prog4_22，使得字元的輸出是利用 putchar() 函數，而不是 printf() 函數。 |

※ 原諒我表格內不附圖示。

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 05 章 -- 運算子、運算式與敘述 ##

- 運算式與運算子
- 運算子的優先順序
- 運算式
- 運算式的型態轉換

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 06 章 -- 選擇性敘述 ##

- 我的程式會轉彎--if 敘述
- 另外的選擇--if-else 敘述
- 簡潔版的 if-else 敘述--條件運算子
- 更好用的多重選擇--switch 敘述
- 使用 goto 敘述

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 07 章 -- 迴圈 ##

- 結構化程式設計
- 使用 for 迴圈
- 使用 while 迴圈
- 使用 do while 迴圈
- 空迴圈
- 我要使用哪一種迴圈？
- 巢狀迴圈
- 迴圈的跳離

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 08 章 -- 函數 ##

- 簡單的函數範例
- 函數的基本架構
- 更多的函數應用範例
- 遞迴函數
- 區域、全域與靜態變數
- 引數傳遞的機制
- 前置處理器--#define
- 再來看看 #include 前置處理器

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 09 章 -- 陣列與字串 ##

- 一維陣列
- 二維陣列與多維陣列
- 傳遞陣列給函數
- 字串
- 字串的輸入與輸出函數
- 字串陣列

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 10 章 -- 指標 ##

- 指標概述
- 使用指標變數
- 指標與函數
- 指標與一維陣列
- 指標與字串
- 指向指標的指標--雙重指標

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 11 章 -- 結構與其他資料型態 ##

- 認識結構
- 巢狀結構
- 結構陣列
- 指向結構的指標
- 以結構為引數傳遞到函數
- 列舉型態
- 使用自訂的型態--typedef

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 12 章 -- 檔案處理 ##

- 檔案的觀念
- 有緩衝區的檔案處理函數
- 無緩衝區的檔案處理函數
- 二進位檔案的使用

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 13 章 -- 大型程式的發展 ##

- 程式的模組化與實作
- 於不同檔案裡使用全域變數
- 條件式編譯
- 命令列引數的使用

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 14 章 -- 動態記憶體配置與鏈結串列 ##

- 動態記憶體配置
- 鏈結串列
- 鏈結串列的操作

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 15 章 -- 位元處理 ##

- 數字系統與位元、位元組
- 二進位系統
- 其他的進位系統
- 位元運算子
- 位元欄位

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 16 章 -- 邁向 C++ 之路 ##

- 認識 C++
- 簡單的例子
- 函數的多載
- 認識類別
- 公有成員與私有成員
- 建構元

|  Number  | Question |
|:--------:|:---------|

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)
