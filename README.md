- Ép kiểu
  `(kieu_du_lieu) bieu_thuc`

- String
  String trong C++ là một mảng 1 chiều các ký tự
  | Stt | Phương thức | Công dụng |
  |:-------|:------:|:-------|
  | 1 | append() | |
  | 2 | assign() | |
  | 3 | at() | |
  | 4 | size() | |
  | 5 | length() | |

- stringstream
  Stringstream liên kiết một đối tượng string với một luồng stream cho phép:

  - Đọc dữ liệu từ stringstream: tương tự cin kết hợp với toán tử >>
  - Ghi dữ liệu ra stringstream: tương tự cout kết hợp với <<

  Để sử dụng stringstream: `#include<sstream>`
  Lớp stringstream cực ký hữu ích trong việc phân tích dữ liệu đầu vào

  Các phương thức cơ bản

  - clear(): To clear the stream
  - str(): To get and set object whole content is present in the stream
  - operator <<: Add a string to the stringstream object
  - operator >>: Read something from the stringstream object

- Con trỏ
  - Con trỏ là một biến đặc biệt dùng để lưu địa chỉ của biến
    `int *ip`
    `*ip = val`
    `ip = &val`
