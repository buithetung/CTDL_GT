## **Mô tả:**
- Cho 2 mảng X, Y đã được sắp xếp với kích thước m,n (m>=n) cho trước.
- Mảng X có chính xác n phần tử 0 để điền phần tử từ Y vào. 
## **Yêu cầu:**
- Điền các phần tử Y vào đúng vị trí trong X và in ra.
## **Ý tưởng:**
1. *Dồn hết các phần tử 0 ở mảng X về đầu mảng.*
2. *Quản lý 2 mảng bảng 3 chỉ số*
- x: Quản lý vị trí của phần tử đầu tiên khác 0 của mảng X.
- y: Quản lý vị trí của phần tử chưa sắp xếp ở mảng Y.
- index: Quản lý vị trí bằng 0 đầu tiên mà ta sẽ chèn phần tử vào.
3. *Trộn 2 mảng vào nhau như thuật toán merge sort.*
- Điều kiện dừng: Khi 1 trong 2 chỉ số x,y vượt ra khỏi chiều dài của mảng.
- So sáng lần lượt 2 phần tử ở vị trí x, y tương ứng của 2 mảng:
+ TH1: Nếu X <= Y: nhập chèn phẩn tử X vào vị trí index,gán vị trí tại X = 0,  đồng thời tăng chỉ số x, index.
+ TH2: Nếu X > Y: nhập chèn phẩn tử của Y vào vị trí index, tăng Y, index.
## **Thuật toán**
1. *Input:* Nhập vào m,n và các phẩn tử của 2 mảng.
2. *Output:* Mảng X đã được trộn, sắp xếp. 
## **Ví dụ**
1. *Input:* 9 5  

          X[] = {0 2 0 3 0 5 6 0 0}  

          Y[] = {1 8 9 10 15}  

2. *Output:*
X[] = {1 2 3 5 6 8 9 10 15}