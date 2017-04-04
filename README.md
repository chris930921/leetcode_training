## n167 Two Sum II - Input array is sorted

給一數值 target，從陣列中找出任兩個數值相加等於 target，

並且回傳數值在陣列中的索引值，回傳陣列大小固定都是 2。

## n387 First Unique Character in a String

在字串中找出第一個不重複的字元。

## n412 Fizz Buzz

輸出 n 長度的陣列，第 n 個位置的字串數值為 n + 1，

3 的倍數字串替換成 "Fizz"，

5的倍數字串替換成 "Buzz"，

15 的倍數字串替換成 "FizzBuzz"。

## n448 Find All Numbers Disappeared in an Array

假設給一個長度 8 的陣列，找出 1 ~ 8 之中哪個數字沒有出現在陣列中。

## 453. Minimum Moves to Equal Array Elements

輸入一個 int 陣列長度為 n，每一次 move 只能對 n-1 個數字 +1。

輸出最少需要幾次 move，才能使陣列內所有數值相等。

## n455 Assign Cookies

輸入一個 child 陣列，陣列 size 就是 child 數量，每個 value 代表 child 要多大的 cookie 才會滿足 (content)。

輸入一個 cookie 陣列，陣列 size 就是 cookie 數量，每個 value 代表 cookie 有多大。

如果 cookie 的 value 大於等於 child 的 value，則 child 就可以被 content。

最後輸出最多可以被 content 的 child 數量。

## n461 Hamming Distance

兩個輸入數值的 binary 有幾個不同的 bit。 

## n463 Island Perimeter

給一個二維陣列，裡面的數值只有 0 或 1，求出 1 面積的邊框數量。

如果 1 的上下左右格子其中一個也是 1，表示該方向無邊框。

## n476 Number Complement

將數值每個 bit 作 not，要注意比最左邊的 1 更高位元的 0 不做 not，且測資中沒有負數。

## n485 Max Consecutive Ones

找出陣列中最長的連續的 1，求其包含 1 的數量。

## n492 Construct the Rectangle

輸入面積(area)，輸出長寬且符合以下條件。

長寬相乘等於面積(area)。

長度(length)大於等於寬度(width)。

長度和寬度的差(length - width)要最小。

## n496 Next Greater Element I
1. 宣告 int 陣列 returnNums。
1. returnSize 等於 findNumsSize。 
2. findNums 是 nums 的子集。
3. findNums 中不會有重複的數值。
4. nums 中不會有重複的數值。
5. 從 findNums 取出一數值 x 後，先找到其數值在 nums 中的位置 y。
6. 從 nums 位置 y 的右邊開始尋找第一個比 x 大的數值 z。
7. 將數值 z 放入 returnNums 中。

## n500 Keyboard Row

檢查每個字串裡的字母，是否在鍵盤上的同一列，測資有些有大寫，有些沒有。

## n504 Base 7

給一個 10 進制數字，轉換成 7 進制字串。

## n506 Relative Ranks

輸入一個沒有排序的成績數值陣列，輸出名次字串陣列，

輸出的名次位置要對應輸入的成績位置。

## n520 Detect Capital
1. 只有開頭字母大寫，回傳 true。
2. 全部字母大寫，回傳 true。
3. 全部字母小寫，回傳 true。
4. 其他，回傳 false。

## n530 Minimum Absolute Difference in BST

輸入 binary tree，輸出任意兩個節點的 difference，且 difference 必須是最小值。

假設有節點 A 和節點 B，這兩個節點有各自的 value 分別是 A.val 和 B.val。

difference 就是 A.val 減去 B.val 的絕對值。