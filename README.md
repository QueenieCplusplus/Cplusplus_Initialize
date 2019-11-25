# Cplusplus_Initialize
對物件做初始化數值的設定意義

初始風格：

                    a {val}; // 推薦使用
                    
                    a { }; // 代表空值為預設的初始值。但對整數而言則為 0。

                    b = {val}; // 源自於 Ｃ

                    c = val; // 常見

                    d(val); // 少見
>>>

    使用 {} 符號，推薦使用 list initialization (可避免轉換的窄化)。

>>>

    * 直接初始化，允許隱形的轉型

    * 複製的初始化，不允許隱形轉型


舉例說明：

// 總之，意思是預設避免畫地自限，造成日後型別轉換無法轉成功的煩惱 （中了窄化的計）！

    [1] char 可以 type cast 到 int, 但無法 vise versa。

    [2] double 可以 type cast 到 int, 但無法 vise versa。

    [3] float 可以 type cast 到 double, 但無法 vise versa。

