void moPhong() {
        string ma;
        int chon;

        cout << "\nNhap ma xe can mo phong: ";
        cin >> ma;

        int vt = timXe(ma);

        if(vt == -1) {
            cout << "Khong tim thay xe!" << endl;
            return;
        }

        Xe* p = &danhSach[vt];

        do {
            cout << "\n========== MO PHONG VF3 ==========";
            cout << "\n1. Khoi dong";
            cout << "\n2. Di chuyen";
            cout << "\n3. Sac pin";
            cout << "\n4. Hien thi thong tin";
            cout << "\n0. Quay lai";
            cout << "\nNhap lua chon: ";
            cin >> chon;

            if(cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                chon = -1;
                cout << "Lua chon khong hop le!" << endl;
            }
            else {
                switch(chon) {
                    case 1:
                        p->khoiDong();
                        break;

                    case 2: {
                        double km;
                        cout << "Nhap quang duong (km): ";
                        cin >> km;

                        if(cin.fail()) {
                            cin.clear();
                            cin.ignore(1000, '\n');
                            cout << "Du lieu khong hop le!" << endl;
                        }
                        else {
                            p->diChuyen(km);
                        }
                        break;
                    }

                    case 3: {
                        double pin;
                        cout << "Nhap luong pin muon sac (%): ";
                        cin >> pin;

                        if(cin.fail()) {
                            cin.clear();
                            cin.ignore(1000, '\n');
                            cout << "Du lieu khong hop le!" << endl;
                        }
                        else {
                            p->sacPin(pin);
                        }
                        break;
                    }

                    case 4:
                        p->hienThi();
                        break;

                    case 0:
                        cout << "Quay lai menu!" << endl;
                        break;

                    default:
                        cout << "Lua chon khong hop le!" << endl;
                }
            }
        } while(chon != 0);
    }

    void menu() {
        int chon;

        do {
            cout << "\n";
            cout << "========================================" << endl;
            cout << "     QUAN LY O TO DIEN VINFAST VF3" << endl;
            cout << "========================================" << endl;
            cout << "1. Them xe" << endl;
            cout << "2. Hien thi danh sach xe" << endl;
            cout << "3. Tim kiem xe" << endl;
            cout << "4. Sua thong tin xe" << endl;
            cout << "5. Xoa xe" << endl;
            cout << "6. Mo phong hoat dong xe" << endl;
            cout << "0. Thoat" << endl;
            cout << "----------------------------------------" << endl;
            cout << "Nhap lua chon: ";
            cin >> chon;

            if(cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                chon = -1;
                cout << "Vui long nhap so!" << endl;
            }
            else {
                switch(chon) {
                    case 1:
                        themXe();
                        break;
                    case 2:
                        hienThiDanhSach();
                        break;
                    case 3:
                        timKiemXe();
                        break;
                    case 4:
                        suaXe();
                        break;
                    case 5:
                        xoaXe();
                        break;
                    case 6:
                        moPhong();
                        break;
                    case 0:
                        cout << "Ket thuc chuong trinh!" << endl;
                        break;
                    default:
                        cout << "Lua chon khong hop le!" << endl;
                }
            }
        } while(chon != 0);
    }
};

int main() {
    QuanLyXeVF3 ql;
    ql.menu();
    return 0;
}
