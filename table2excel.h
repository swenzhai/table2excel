#ifndef TABLE2EXCEL_H
#define TABLE2EXCEL_H
#include <QTableWidget>
#include <QFileDialog>
#include <QDesktopServices>
#include <QMessageBox>
#include <ActiveQt/QAxObject>

class table2excel{
public:
    int add(int a,int b);
    void Table2ExcelByStr(QTableWidget *table,QString title);
};

#endif // TABLE2EXCEL_H
