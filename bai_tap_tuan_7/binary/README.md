## 1. Yêu cầu bài toán 
Tìm kiếm phần tử `k` trong mảng có n phần tử đã được sắp xếp theo thứ tự tăng dần hoặc giảm dần bằng tìm kiếm nhị phân. 
## 2. Diễn giải các bước thực hiện giải thuật (`binary.c`)
- Xét với mảng array có n phẩn tử, ta tìm kiếm vị trí phần tử k xuất hiện:
- **Bước 1:** Sắp xếp mảng đã cho theo thứ tự tăng dần hoặc giảm dần 
- **Bước 2:** Điều kiện dừng: Nếu first > last, trả về giá trị -1 do mảng con đã bị thu hẹp hoàn toàn   
              - Nếu `first <= last`, tính m = (first+last)/2  
              1. Nếu `array[m] = k`, trả về giá trị m  
              2. Nếu `array[m] < k`, gọi hàm đệ quy với nửa bên phải   
                    return binary(array,m+1,last,k).  
              3. Nếu `array[m] > k`, gọi hàm đệ quy với nửa bên trái   
                    return binary(array,first,m-1,k).   

## 3. Test case kiểm tra độ chính xác
