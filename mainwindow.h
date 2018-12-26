#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_zeroButton_clicked();

    void on_dotButton_clicked();

    void on_oneButton_clicked();

    void on_equalButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();


    void on_clearButton_clicked();

    void on_plusButton_clicked();

    void on_minusButton_clicked();

    void on_multiplyButton_clicked();

    void on_devideButton_clicked();

    void on_pushButton_2_clicked();

    void on_sqrtButton_clicked();

    void on_sqrButton_clicked();

private:
    Ui::MainWindow *ui;
    QString calcline ="";
    double a,b;
    int size=0;
    double *arr = new double[size];

};

#endif // MAINWINDOW_H
