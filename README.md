# Game-2048
GVHD : HOÀNG QUANG HUY 
NHÓM 49 
49 Trịnh Minh Quân 20233797 
59 Nguyễn Đình Thi 20233810

2048 Game in C++

Giới thiệu
2048 là một trò chơi giải đố đơn giản nhưng gây nghiện, nơi người chơi phải di chuyển các ô số trong bảng để hợp nhất các số giống nhau, với mục tiêu tạo ra ô có giá trị bằng 2048. Trò chơi được viết bằng ngôn ngữ C++ và có thể chạy trên các hệ điều hành hỗ trợ môi trường C++ chuẩn.

Cách chơi
Trò chơi bắt đầu với một bảng 4x4, ban đầu có một số 2 hoặc 4 xuất hiện ở một ô ngẫu nhiên.
Bạn có thể di chuyển các ô theo bốn hướng: lên, xuống, trái, phải.
Mỗi khi di chuyển, tất cả các ô sẽ trượt về phía mà bạn chọn. Nếu có hai ô có giá trị giống nhau ở gần nhau trong hướng di chuyển, chúng sẽ hợp nhất thành một ô mới có giá trị gấp đôi.
Trò chơi kết thúc khi bạn tạo ra ô có giá trị bằng 2048 hoặc không còn nước đi hợp lệ nào nữa.
Yêu cầu hệ thống
C++ Compiler (g++ hoặc bất kỳ trình biên dịch C++ chuẩn nào)
Hệ điều hành: Windows, Linux, macOS
Không cần thư viện bên ngoài
Cài đặt và Chạy game
Tải mã nguồn: g++ -o 2048 2048.cpp

Tải hoặc sao chép mã nguồn game từ kho lưu trữ của bạn.

Biên dịch mã nguồn: ./2048

Mở terminal hoặc command prompt và sử dụng lệnh sau để biên dịch game:
g++ -o 2048 2048.cpp
Chạy game:
Sau khi biên dịch thành công, chạy game bằng cách sử dụng lệnh sau:
./2048

Điều khiển
Dùng phím mũi tên Up, Down, Left, Right để di chuyển các ô trong bảng.
Trò chơi sẽ tiếp tục cho đến khi bạn tạo ra ô có giá trị 2048 hoặc không còn nước đi hợp lệ nào nữa.
Cấu trúc mã nguồn
Dưới đây là một số thành phần chính trong mã nguồn:

Bảng (Grid): Lưu trữ trạng thái hiện tại của trò chơi (4x4 ô).
Hệ thống di chuyển (Move system): Quản lý các thao tác di chuyển ô và hợp nhất chúng.
Đầu vào của người chơi (User Input): Nhận đầu vào từ bàn phím để di chuyển các ô.
Kiểm tra kết thúc game (Game Over Check): Kiểm tra nếu người chơi đã thắng (tạo ra 2048) hoặc không còn nước đi hợp lệ.
Ví dụ
Khi bạn chạy trò chơi, màn hình sẽ hiển thị như sau:

diff
+----+----+----+----+
|    | 2  |    |    |
+----+----+----+----+
|    |    |    | 4  |
+----+----+----+----+
|    | 2  | 4  | 8  |
+----+----+----+----+
|    |    |    |    |
+----+----+----+----+
Sau khi thực hiện di chuyển và hợp nhất các ô, bảng sẽ thay đổi tương ứng.

Các tính năng bổ sung
Ghi điểm cao nhất và điểm hiện tại.
Lưu lại tiến trình và tải lại từ tệp khi tiếp tục chơi.
Tính năng đang phát triển
Hỗ trợ chế độ nhiều người chơi.
Thêm giao diện đồ họa.

Cảm ơn
Cảm ơn bạn đã tải trò chơi 2048 C++! Hy vọng bạn sẽ thích và có những phút giây thư giãn với trò chơi này. Nếu bạn có bất kỳ đề xuất hoặc lỗi nào, vui lòng mở issue trên GitHub.
