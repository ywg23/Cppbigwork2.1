#ifndef SYW1_H
#define SYW1_H

#include <QWidget>

namespace Ui {
class syw1;
}

class syw1 : public QWidget
{
    Q_OBJECT

public:
    explicit syw1(QWidget *parent = nullptr);
    ~syw1();
    int kind=0;
    QString str;
    int sha,guan,bei;
    int isExist;
    int level;
    int a,b,c,d;
    syw1 *syw=NULL;

    double sumatt[10];
    int countatt[40];
    int mainrand[3];

    int checkKind(int a);
    void showAttribute1(int a1);
    void showAttribute2(int a2);
    void showAttribute3(int a3);
    void showAttribute4(int a4);
    void calsumatt(int *arr);

    void printatt();
    void showname();
    void showmainatt();


private slots:
    void on_twentyBtn_clicked();

    void on_fourBtn_clicked();

    void on_againBtn_clicked();

    void on_backbtn_clicked();


    void on_viewRatingBtn_clicked();

private:
    Ui::syw1 *ui;
};

#endif // SYW1_H
