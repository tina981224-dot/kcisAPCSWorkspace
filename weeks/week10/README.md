# Week 10：`string`、`char` 與常用操作

## 今天的內容

本週用 `string` 保存不含空白的文字，透過 `cin >>` 依序讀取單字或代碼。用索引走訪字元、依題目範圍比較大小寫，並用 `substr` 檢查片段。需要處理多筆資料時，先讀筆數再用迴圈逐筆讀取；本週不教整行讀取或行內解析。

## 題目

01、02 練習逐字元走訪與統計；04 練習 `substr` 與重疊比對。03、05 是選做延伸，不要求五題全部完成。作答檔 `main.cpp` 留空，請自行撰寫完整程式。

### 本週練習

| 題目 | 難度 |
|---|---|
| [01 文字頻率摘要](problems/basic/01-mostFrequentLetter/README.md) | 基礎 |
| [02 文章字母統計](problems/basic/02-articleStatistics/README.md) | 基礎 |
| [03 圓形標籤讀值](problems/advanced/03-radiusDisplay/README.md) | 進階 |
| [04 文件片段搜尋](problems/advanced/04-substringCount/README.md) | 進階 |
| [05 分組紀錄加總](problems/advanced/05-groupTotals/README.md) | 進階 |

## 操作與測試

在 VS Code 開啟題目資料夾，閱讀 README 後完成程式。空白 main.cpp 尚不能編譯，要先寫出程式入口。修改後重新編譯，用範例核對結果，再試零、最小值或邊界情況；不要額外輸出「請輸入」等提示文字。

輸入可用空白或換行分隔；`cin >>` 不會把空行當成一筆資料。請依題目給定的筆數處理，不需要手動輸入檔案結束訊號。

下課前確認程式已儲存；要保留的進度請 commit 並 push 到自己的 GitHub repo。
