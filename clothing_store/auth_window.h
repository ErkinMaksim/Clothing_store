#ifndef AUTH_WINDOW_H
#define AUTH_WINDOW_H

#include <QWidget>

namespace Ui {
class auth_window;
}

class auth_window : public QWidget
{
    Q_OBJECT

public:
    explicit auth_window(QWidget *parent = nullptr);
    ~auth_window();

    QString getLogin();
    QString getPass();

signals:
    void login_button_clicked();
    void register_button_clicked();

private slots:

    void on_lineEdit_name_textEdited(const QString &arg1);
    void on_lineEdit_pass_textEdited(const QString &arg1);
    void on_pushButton_log_clicked();
    void on_pushButton_reg_clicked();

private:
    Ui::auth_window *ui;
    QString m_username;
    QString m_userpass;
};

#endif // AUTH_WINDOW_H
