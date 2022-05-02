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

|  No  | Question |
|:----:|:---------|
| [13](ch01/hw1_13/hw1_13.c) | 試修改 prog1_1，使得它可以印出 "我愛C語言" 一行中文字。 |
| [14](ch01/hw1_14/hw1_14.c) | 試修改 prog1_1，使得它可以印出 "我愛C語言" 及 "這是我的第一個C語言程式兩行中文字。 |
| [15](ch01/hw1_15/hw1_15.c) | 試撰寫一程式，利用 printf() 函數印出下面的圖案（不須使用迴圈，每一列星號請用一個 printf() 函數來列印）： |
| [16](ch01/hw1_16/hw1_16.c) | 試以 printf() 函數印出下面的圖案（不需使用迴圈，每一列星號請用一個 printf() 函數來列印）： |
| [17](ch01/hw1_17/hw1_17.c) | 試撰寫一程式，利用 printf() 函數以星號和空白字元印出下面的圖案： |

※ 原諒我表格內不附圖示。

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 02 章 -- C 語言基本概述 ##

- 簡單的例子
- 解析 C 語言
- 識別字與關鍵字
- 偵錯
- 提高程式的可讀性

|  No  | Question |
|:----:|:---------|
| [3](ch02/hw2_3/hw2_3.c) | 試寫一個程式，可以列印出 "You are my best friend." 字串。 |
| [4](ch02/hw2_4/hw2_4.c) | 試寫一個程式，可以印出如下的輸出結果：<br>`See you tomorrow.`<br>`Have a good night.` |
| [5](ch02/hw2_5/hw2_5.c) | 試寫一程式，可計算 5+12 的值，並將結果列印出來。 |
| [6](ch02/hw2_6/hw2_6.c) | 試寫一程式，可計算 6+7+24 的值，並將結果列印出來。 |
| [7](ch02/hw2_7/hw2_7.c) | 試在您所使用的 C 語言開發環境裡找出 stdio.h 與 stdlib.h 這兩個檔案，請將它們的內容分別拷貝起來，然後分別貼在 hw2_1.c 裡的第 2 行與第 3 行的位置，取代掉<br>`#include <stdio.h>`<br>`#include <stdlib.h>`<br>這兩行，最後再編譯之。<br>以上的動作事實上就是編譯器所做的 "含括" 動作，只是現在是以手動方式將 stdio.h 與 stdlib.h 這兩個檔案含括進來罷了！如果執行本範例，您是否會得到與習題 1 相同的結果？ |
| [8](ch02/hw2_8/hw2_8.c) | 試仿照習題 7 的步驟，將 prog2_2 重新編譯並執行之。 |
| [10](ch02/hw2_10/hw2_10.c) | 試修改 prog2_2，使得第 9 行與第 10 行可以合併成一行來撰寫。
| [11](ch02/hw2_11/hw2_11.c) | 試以 printf() 函數印出如下的圖案： |
| [20](ch02/hw2_20/hw2_20.c) | 下面是一個簡單的 C 程式碼，但程式的編排方式並不易於閱讀。請重新編排它來提高程式的可讀性：<br>`01　　/* hwh2_20.c, 基本程式的練習 */`<br>`02　　#include <stdio.h>`<br>`03　　#include <stdlib.h>`<br>`04　　int main(void){int i=5;`<br>`05　　printf("%d+%d=%d\n",i,i,i+i);`<br>`06　　system("pause");return 0; }` |
| [21](ch02/hw2_21/hw2_21.c) | 接續習題 20，試將習題 20 重新編排後，再加上適當註解，使得程式碼更具可讀性。 |

※ 原諒我表格內不附圖示。

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 03 章 -- 基本資料型態 ##

- 變數與常數
- 基本資料型態
- 查詢常數、變數或資料型態所佔位元組
- 資料型態的轉換

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 04 章 -- 格式化的輸出與輸入 ##

- 輸出函數 printf()
- 輸入函數 scanf()
- 使用 scanf() 函數應注意的事項
- 輸出、輸入字元的函數

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 05 章 -- 運算子、運算式與敘述 ##

- 運算式與運算子
- 運算子的優先順序
- 運算式
- 運算式的型態轉換

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 06 章 -- 選擇性敘述 ##

- 我的程式會轉彎--if 敘述
- 另外的選擇--if-else 敘述
- 簡潔版的 if-else 敘述--條件運算子
- 更好用的多重選擇--switch 敘述
- 使用 goto 敘述

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

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 09 章 -- 陣列與字串 ##

- 一維陣列
- 二維陣列與多維陣列
- 傳遞陣列給函數
- 字串
- 字串的輸入與輸出函數
- 字串陣列

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 10 章 -- 指標 ##

- 指標概述
- 使用指標變數
- 指標與函數
- 指標與一維陣列
- 指標與字串
- 指向指標的指標--雙重指標

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 11 章 -- 結構與其他資料型態 ##

- 認識結構
- 巢狀結構
- 結構陣列
- 指向結構的指標
- 以結構為引數傳遞到函數
- 列舉型態
- 使用自訂的型態--typedef

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 12 章 -- 檔案處理 ##

- 檔案的觀念
- 有緩衝區的檔案處理函數
- 無緩衝區的檔案處理函數
- 二進位檔案的使用

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 13 章 -- 大型程式的發展 ##

- 程式的模組化與實作
- 於不同檔案裡使用全域變數
- 條件式編譯
- 命令列引數的使用

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 14 章 -- 動態記憶體配置與鏈結串列 ##

- 動態記憶體配置
- 鏈結串列
- 鏈結串列的操作

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 15 章 -- 位元處理 ##

- 數字系統與位元、位元組
- 二進位系統
- 其他的進位系統
- 位元運算子
- 位元欄位

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)

## 第 16 章 -- 邁向 C++ 之路 ##

- 認識 C++
- 簡單的例子
- 函數的多載
- 認識類別
- 公有成員與私有成員
- 建構元

[![table_of_contents](https://img.shields.io/badge/%E5%9B%9E%E5%88%B0%E7%9B%AE%E9%8C%84-Top-blue)](#table-of-contents)
