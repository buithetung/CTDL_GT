## 1. Yêu cầu bài tập
Cài đặt bài toán Tháp Hà Nội chuyển `n` đĩa từ cọc nguồn sang cọc đích với 2 phương pháp:
- **Phương pháp 1 (Đệ quy):** Cài đặt trong file `thapHaNoicodequy.cpp`.
- **Phương pháp 2 (Khử đệ quy):** Tự xây dựng Stack bằng mảng một chiều trong file `thapHaNoikhongdequy.cpp` (không dùng thư viện STL `<stack>`).

## 2. Diễn giải các bước thực hiện giải thuật
### 2.1. Thuật toán Đệ quy (`thapHaNoicodequy.cpp`)
Để chuyển `n` đĩa từ cọc gốc sang cọc đích qua cọc trung gian:
- Nếu `n == 1`: Chuyển trực tiếp 1 đĩa từ cọc gốc sang cọc đích.
- Nếu `n > 1`, chia thành 3 bước:
  1. Đệ quy chuyển `(n - 1)` đĩa từ cọc gốc sang cọc trung gian (lấy cọc đích làm phụ).
  2. Chuyển đĩa thứ `n` từ cọc gốc sang cọc đích.
  3. Đệ quy chuyển `(n - 1)` đĩa từ cọc trung gian sang cọc đích (lấy cọc gốc làm phụ).

### 2.2. Thuật toán Khử đệ quy (`thapHaNoikhongdequy.cpp`)
- **Cấu trúc Stack tự tạo:**
  - `struct TrangThaiDia`: Lưu `so_dia`, `cot_dau`, `cot_giua`, `cot_cuoi`.
  - Mảng `s[MAX]` với `MAX = 500` và con trỏ `top = -1`.
  - Hàm `push_dia`: Đẩy trạng thái bài toán con vào ngăn xếp.
  - Hàm `pop_dia`: Lấy trạng thái ở đỉnh ngăn xếp ra xử lý.
- **Nguyên lý thực hiện:**
  - Ngăn xếp có cơ chế LIFO (Vào sau - Ra trước). Để thứ tự xử lý giống với đệ quy, ta đẩy vào Stack theo **thứ tự ngược lại**:
    1. Đẩy bài toán chuyển `(n - 1)` đĩa từ cọc phụ sang cọc đích.
    2. Đẩy bài toán chuyển 1 đĩa lớn nhất từ cọc đầu sang cọc đích (`so_dia = 1`).
    3. Đẩy bài toán chuyển `(n - 1)` đĩa từ cọc đầu sang cọc phụ (được đẩy vào sau cùng nên nằm ở đỉnh và được lấy ra xử lý trước tiên).
  - Vòng lặp `while (top >= 0)` lấy từng trạng thái ra, nếu `cur.so_dia == 1` thì in ngay bước chuyển đĩa.

## 3. Test case kiểm tra độ chính xác
Với `n` đĩa, tổng số bước di chuyển luôn là `2^n - 1`. Cả hai phương pháp (đệ quy và khử đệ quy) đều phải cho ra kết quả khớp hoàn toàn với bảng dưới đây:

| Test Case | Input (`n`) | Output |
| :--- | :---: | :--- |
| **Test 1**<br>*(1 bước)* | `1` | `Buoc 1: Chuyen tu A -> C`<br>`Tong cong: 1 buoc` |
| **Test 2**<br>*(3 bước)* | `2` | `Buoc 1: Chuyen tu A -> B`<br>`Buoc 2: Chuyen tu A -> C`<br>`Buoc 3: Chuyen tu B -> C`<br>`Tong cong: 3 buoc` |
| **Test 3**<br>*(7 bước)* | `3` | `Buoc 1: Chuyen tu A -> C`<br>`Buoc 2: Chuyen tu A -> B`<br>`Buoc 3: Chuyen tu C -> B`<br>`Buoc 4: Chuyen tu A -> C`<br>`Buoc 5: Chuyen tu B -> A`<br>`Buoc 6: Chuyen tu B -> C`<br>`Buoc 7: Chuyen tu A -> C`<br>`Tong cong: 7 buoc` |

## 4. Cấu trúc thư mục mã nguồn
```text
Baitaptuan4/
├── README.md                  # File báo cáo và diễn giải giải thuật
├── codedequy.cpp       # Mã nguồn cài đặt phương pháp Đệ quy
└── codekhongdequy.cpp    # Mã nguồn cài đặt phương pháp Khử đệ quy