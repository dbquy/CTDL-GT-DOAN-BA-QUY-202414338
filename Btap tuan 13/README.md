Độ phức tạp của thuật toán tìm kiếm trên cây nhị phân tìm kiếm là O(h) 
( T(n) = O(h) )
(trong đó h là chiều cao của cây)

- Tốt nhất: O(1): Xảy ra khi phần tử cần tìm nằm ngay tại nút gốc của cây. Thuật toán chỉ cần thực hiện một phép so sánh là tìm thấy phần tử, không cần tiếp tục duyệt xuống các nhánh con.
- Trung bình: O(log n): Xảy ra khi dữ liệu đầu vào được phân bố tương đối ngẫu nhiên làm cho cây phát triển khá cân bằng. Khi tìm kiếm, sau mỗi lần so sánh, thuật toán chỉ cần đi xuống một trong hai nhánh của cây và loại bỏ được khoảng một nửa số nút còn lại, tương tự như nguyên lý của thuật toán tìm kiếm nhị phân.
- Xấu nhất: O(n): Xảy ra khi dữ liệu được chèn theo một thứ tự đặc biệt (ví dụ tăng dần hoặc giảm dần), làm cho cây bị lệch hoàn toàn về một phía. Khi đó cây nhị phân tìm kiếm có dạng gần giống một danh sách liên kết. Để tìm được phần tử hoặc kết luận phần tử không tồn tại, thuật toán có thể phải duyệt qua hầu hết các nút trong cây.