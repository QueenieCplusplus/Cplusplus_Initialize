# Cplusplus_Initialize
對物件做初始化數值的設定意義

初始風格：

                    a {val}; // 推薦使用

                    b = {val}; // 源自於 Ｃ

                    c = val; // 常見

                    d(val); // 少見
>>>
使用 {} 符號，推薦使用 list initialization (可避免轉換的窄化)。

舉例說明：

[1] char 可以 type cast 到 int, 但無法 vise versa。

[2] float 可以 type cast 到 int, 但無法 vise versa。

