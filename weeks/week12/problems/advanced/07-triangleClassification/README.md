# 07 支架形狀分類

難度：進階

## 題目說明

支架驗收需要先判斷三邊能否形成非退化三角形，再分為正三角形、等腰三角形或不等邊三角形。請用 triangleShape 函式回傳分類，再由主程式輸出。

## 輸入格式

每筆三個正整數邊長，直到輸入結束。

## 輸出格式

依序判斷：不能形成三角形為 noTriangle；三邊相等為 equilateral；恰有兩邊相等為 isosceles；其餘為 scalene。每筆一行。

## 資料範圍

各邊長 1～1000000；最多 100 筆。

## 範例

### 輸入

```text
1 2 3
3 3 3
3 3 4
3 4 5
```

### 輸出

```text
noTriangle
equilateral
isosceles
scalene
```

## 範例說明

先檢查三角形不等式，再分類；三邊相等不歸入 isosceles。
