# question7-1

>輸入一整數，判斷它是否為質數，若不為質數，則列印出其因數，請利用函數處理之。

## 想法:
* num:輸入的整數
* fromOneToNum:從1到num的變數
* divisorNum:因數數量

num % num的因數 == 0，num的因數數量 == 2 &rarr; 質數。

So

1. 輸入num
2. 找出num的因數並且計算因數數量
3. 若num的因數數量 = 2，則n為質數
4. 若num的因數數量不為2，則列出n的所有因數

## 程式的做法 v1 :

1. 輸入num
2. 找出num的因數，印出因數並且計算因數數量
3. 若num的因數數量 = 2，則n為質數，印出質數

## 需要改進的點

若num的因數數量不為2(不是質數)，才列出n的所有因數。

## 程式的做法 v2 :
>你可以跑兩次 loop，一次檢查一次印數字 
>
>by 莊博傑 學長
1. 輸入num
2. 計算num的因數數量
   1. 若num的因數數量為2，則判斷為質數，程式結束。
   2. 若num的因數數量不為2，則先把fromOneToNum跟divisorNum初始化，跑回圈並印出因數，程式結束。
