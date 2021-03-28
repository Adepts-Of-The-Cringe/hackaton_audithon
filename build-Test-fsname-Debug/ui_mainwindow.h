/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QtCharts"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *vnesh_tab;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *rb_vnesh_hrztl_layout;
    QRadioButton *rb_vnesh_volstr;
    QRadioButton *rb_vnesh_pogas;
    QHBoxLayout *gbx_vnesh_hrztl_layout;
    QGroupBox *gbx_volstr;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *top_volstr_lbl_cmb_hrzntl_layout;
    QLabel *lbl_vnesh_volstr_from;
    QComboBox *cmb_vnesh_volstr_month_from;
    QComboBox *cmb_vnesh_volstr_year_from;
    QLabel *lbl_vnesh_volstr_to;
    QComboBox *cmb_vnesh_volstr_month_to;
    QComboBox *cmb_vnesh_volstr_year_to;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *vnesh_volume_2;
    QGridLayout *gridLayout_2;
    QGroupBox *vnesh_struct_2;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *vnesh_struct_cb_6;
    QCheckBox *vnesh_struct_cb_7;
    QCheckBox *vnesh_struct_cb_8;
    QCheckBox *vnesh_struct_cb_9;
    QCheckBox *vnesh_struct_cb_10;
    QCheckBox *vnesh_struct_cb_11;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QGroupBox *gbx_pogas;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *cmb_vnesh_pogas_month_from;
    QComboBox *cmb_vnesh_pogas_year_from;
    QLabel *label_2;
    QComboBox *cmb_vnesh_pogas_month_to;
    QComboBox *cmb_vnesh_pogas_year_to;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *vnesh_volume;
    QGridLayout *gridLayout_3;
    QChartView *chartview_vnesh_volume_2;
    QWidget *vnutr_tab;
    QVBoxLayout *verticalLayout;
    QLabel *sql_label;
    QCalendarWidget *calendarWidget;
    QLabel *sql_label_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 1800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        vnesh_tab = new QWidget();
        vnesh_tab->setObjectName(QString::fromUtf8("vnesh_tab"));
        vnesh_tab->setEnabled(true);
        verticalLayout_5 = new QVBoxLayout(vnesh_tab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        rb_vnesh_hrztl_layout = new QHBoxLayout();
        rb_vnesh_hrztl_layout->setObjectName(QString::fromUtf8("rb_vnesh_hrztl_layout"));
        rb_vnesh_volstr = new QRadioButton(vnesh_tab);
        rb_vnesh_volstr->setObjectName(QString::fromUtf8("rb_vnesh_volstr"));
        rb_vnesh_volstr->setChecked(true);

        rb_vnesh_hrztl_layout->addWidget(rb_vnesh_volstr);

        rb_vnesh_pogas = new QRadioButton(vnesh_tab);
        rb_vnesh_pogas->setObjectName(QString::fromUtf8("rb_vnesh_pogas"));

        rb_vnesh_hrztl_layout->addWidget(rb_vnesh_pogas);


        verticalLayout_5->addLayout(rb_vnesh_hrztl_layout);

        gbx_vnesh_hrztl_layout = new QHBoxLayout();
        gbx_vnesh_hrztl_layout->setObjectName(QString::fromUtf8("gbx_vnesh_hrztl_layout"));
        gbx_volstr = new QGroupBox(vnesh_tab);
        gbx_volstr->setObjectName(QString::fromUtf8("gbx_volstr"));
        gbx_volstr->setEnabled(true);
        gbx_volstr->setFlat(true);
        verticalLayout_6 = new QVBoxLayout(gbx_volstr);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        top_volstr_lbl_cmb_hrzntl_layout = new QHBoxLayout();
        top_volstr_lbl_cmb_hrzntl_layout->setObjectName(QString::fromUtf8("top_volstr_lbl_cmb_hrzntl_layout"));
        lbl_vnesh_volstr_from = new QLabel(gbx_volstr);
        lbl_vnesh_volstr_from->setObjectName(QString::fromUtf8("lbl_vnesh_volstr_from"));
        lbl_vnesh_volstr_from->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        top_volstr_lbl_cmb_hrzntl_layout->addWidget(lbl_vnesh_volstr_from);

        cmb_vnesh_volstr_month_from = new QComboBox(gbx_volstr);
        cmb_vnesh_volstr_month_from->setObjectName(QString::fromUtf8("cmb_vnesh_volstr_month_from"));
        cmb_vnesh_volstr_month_from->setMaxVisibleItems(12);

        top_volstr_lbl_cmb_hrzntl_layout->addWidget(cmb_vnesh_volstr_month_from);

        cmb_vnesh_volstr_year_from = new QComboBox(gbx_volstr);
        cmb_vnesh_volstr_year_from->setObjectName(QString::fromUtf8("cmb_vnesh_volstr_year_from"));

        top_volstr_lbl_cmb_hrzntl_layout->addWidget(cmb_vnesh_volstr_year_from);

        lbl_vnesh_volstr_to = new QLabel(gbx_volstr);
        lbl_vnesh_volstr_to->setObjectName(QString::fromUtf8("lbl_vnesh_volstr_to"));
        lbl_vnesh_volstr_to->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        top_volstr_lbl_cmb_hrzntl_layout->addWidget(lbl_vnesh_volstr_to);

        cmb_vnesh_volstr_month_to = new QComboBox(gbx_volstr);
        cmb_vnesh_volstr_month_to->setObjectName(QString::fromUtf8("cmb_vnesh_volstr_month_to"));
        cmb_vnesh_volstr_month_to->setMaxVisibleItems(12);

        top_volstr_lbl_cmb_hrzntl_layout->addWidget(cmb_vnesh_volstr_month_to);

        cmb_vnesh_volstr_year_to = new QComboBox(gbx_volstr);
        cmb_vnesh_volstr_year_to->setObjectName(QString::fromUtf8("cmb_vnesh_volstr_year_to"));

        top_volstr_lbl_cmb_hrzntl_layout->addWidget(cmb_vnesh_volstr_year_to);


        verticalLayout_6->addLayout(top_volstr_lbl_cmb_hrzntl_layout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        vnesh_volume_2 = new QGroupBox(gbx_volstr);
        vnesh_volume_2->setObjectName(QString::fromUtf8("vnesh_volume_2"));
        gridLayout_2 = new QGridLayout(vnesh_volume_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        horizontalLayout_9->addWidget(vnesh_volume_2);

        vnesh_struct_2 = new QGroupBox(gbx_volstr);
        vnesh_struct_2->setObjectName(QString::fromUtf8("vnesh_struct_2"));
        verticalLayout_7 = new QVBoxLayout(vnesh_struct_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        vnesh_struct_cb_6 = new QCheckBox(vnesh_struct_2);
        vnesh_struct_cb_6->setObjectName(QString::fromUtf8("vnesh_struct_cb_6"));
        vnesh_struct_cb_6->setEnabled(true);
        vnesh_struct_cb_6->setMaximumSize(QSize(16777215, 16777215));
        vnesh_struct_cb_6->setChecked(true);
        vnesh_struct_cb_6->setAutoRepeat(false);
        vnesh_struct_cb_6->setAutoExclusive(false);
        vnesh_struct_cb_6->setTristate(false);

        verticalLayout_7->addWidget(vnesh_struct_cb_6);

        vnesh_struct_cb_7 = new QCheckBox(vnesh_struct_2);
        vnesh_struct_cb_7->setObjectName(QString::fromUtf8("vnesh_struct_cb_7"));

        verticalLayout_7->addWidget(vnesh_struct_cb_7);

        vnesh_struct_cb_8 = new QCheckBox(vnesh_struct_2);
        vnesh_struct_cb_8->setObjectName(QString::fromUtf8("vnesh_struct_cb_8"));

        verticalLayout_7->addWidget(vnesh_struct_cb_8);

        vnesh_struct_cb_9 = new QCheckBox(vnesh_struct_2);
        vnesh_struct_cb_9->setObjectName(QString::fromUtf8("vnesh_struct_cb_9"));

        verticalLayout_7->addWidget(vnesh_struct_cb_9);

        vnesh_struct_cb_10 = new QCheckBox(vnesh_struct_2);
        vnesh_struct_cb_10->setObjectName(QString::fromUtf8("vnesh_struct_cb_10"));

        verticalLayout_7->addWidget(vnesh_struct_cb_10);

        vnesh_struct_cb_11 = new QCheckBox(vnesh_struct_2);
        vnesh_struct_cb_11->setObjectName(QString::fromUtf8("vnesh_struct_cb_11"));

        verticalLayout_7->addWidget(vnesh_struct_cb_11);

        checkBox = new QCheckBox(vnesh_struct_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_7->addWidget(checkBox);

        checkBox_2 = new QCheckBox(vnesh_struct_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_7->addWidget(checkBox_2);


        horizontalLayout_9->addWidget(vnesh_struct_2);


        verticalLayout_6->addLayout(horizontalLayout_9);


        gbx_vnesh_hrztl_layout->addWidget(gbx_volstr);

        gbx_pogas = new QGroupBox(vnesh_tab);
        gbx_pogas->setObjectName(QString::fromUtf8("gbx_pogas"));
        verticalLayout_2 = new QVBoxLayout(gbx_pogas);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(gbx_pogas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label);

        cmb_vnesh_pogas_month_from = new QComboBox(gbx_pogas);
        cmb_vnesh_pogas_month_from->setObjectName(QString::fromUtf8("cmb_vnesh_pogas_month_from"));
        cmb_vnesh_pogas_month_from->setMaxVisibleItems(12);

        horizontalLayout_4->addWidget(cmb_vnesh_pogas_month_from);

        cmb_vnesh_pogas_year_from = new QComboBox(gbx_pogas);
        cmb_vnesh_pogas_year_from->setObjectName(QString::fromUtf8("cmb_vnesh_pogas_year_from"));

        horizontalLayout_4->addWidget(cmb_vnesh_pogas_year_from);

        label_2 = new QLabel(gbx_pogas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_2);

        cmb_vnesh_pogas_month_to = new QComboBox(gbx_pogas);
        cmb_vnesh_pogas_month_to->setObjectName(QString::fromUtf8("cmb_vnesh_pogas_month_to"));
        cmb_vnesh_pogas_month_to->setMaxVisibleItems(12);

        horizontalLayout_4->addWidget(cmb_vnesh_pogas_month_to);

        cmb_vnesh_pogas_year_to = new QComboBox(gbx_pogas);
        cmb_vnesh_pogas_year_to->setObjectName(QString::fromUtf8("cmb_vnesh_pogas_year_to"));

        horizontalLayout_4->addWidget(cmb_vnesh_pogas_year_to);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        vnesh_volume = new QGroupBox(gbx_pogas);
        vnesh_volume->setObjectName(QString::fromUtf8("vnesh_volume"));
        gridLayout_3 = new QGridLayout(vnesh_volume);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        chartview_vnesh_volume_2 = new QChartView(vnesh_volume);
        chartview_vnesh_volume_2->setObjectName(QString::fromUtf8("chartview_vnesh_volume_2"));

        gridLayout_3->addWidget(chartview_vnesh_volume_2, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(vnesh_volume);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gbx_vnesh_hrztl_layout->addWidget(gbx_pogas);


        verticalLayout_5->addLayout(gbx_vnesh_hrztl_layout);

        tabWidget->addTab(vnesh_tab, QString());
        vnutr_tab = new QWidget();
        vnutr_tab->setObjectName(QString::fromUtf8("vnutr_tab"));
        verticalLayout = new QVBoxLayout(vnutr_tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        sql_label = new QLabel(vnutr_tab);
        sql_label->setObjectName(QString::fromUtf8("sql_label"));

        verticalLayout->addWidget(sql_label);

        calendarWidget = new QCalendarWidget(vnutr_tab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout->addWidget(calendarWidget);

        sql_label_2 = new QLabel(vnutr_tab);
        sql_label_2->setObjectName(QString::fromUtf8("sql_label_2"));

        verticalLayout->addWidget(sql_label_2);

        tabWidget->addTab(vnutr_tab, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 30));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\"\320\222\320\270\320\223\320\276\320\224\"", nullptr));
        rb_vnesh_volstr->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274 \320\270 \321\201\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260", nullptr));
        rb_vnesh_pogas->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \320\263\321\200\320\260\321\204\320\270\320\272 \320\277\320\276\320\263\320\260\321\210\320\265\320\275\320\270\321\217", nullptr));
        gbx_volstr->setTitle(QString());
        lbl_vnesh_volstr_from->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264 \321\201:", nullptr));
        cmb_vnesh_volstr_month_from->setCurrentText(QString());
        cmb_vnesh_volstr_month_from->setPlaceholderText(QString());
        lbl_vnesh_volstr_to->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276:", nullptr));
        cmb_vnesh_volstr_month_to->setCurrentText(QString());
        cmb_vnesh_volstr_month_to->setPlaceholderText(QString());
        vnesh_volume_2->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274", nullptr));
        vnesh_struct_2->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\321\203\320\272\321\202\321\203\321\200\320\260", nullptr));
#if QT_CONFIG(whatsthis)
        vnesh_struct_cb_6->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        vnesh_struct_cb_6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        vnesh_struct_cb_7->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        vnesh_struct_cb_8->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        vnesh_struct_cb_9->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        vnesh_struct_cb_10->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        vnesh_struct_cb_11->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        gbx_pogas->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264 \321\201:", nullptr));
        cmb_vnesh_pogas_month_from->setCurrentText(QString());
        cmb_vnesh_pogas_month_from->setPlaceholderText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276:", nullptr));
        cmb_vnesh_pogas_month_to->setCurrentText(QString());
        cmb_vnesh_pogas_month_to->setPlaceholderText(QString());
        vnesh_volume->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\277\320\276\320\263\320\260\321\210\320\265\320\275\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(vnesh_tab), QCoreApplication::translate("MainWindow", "\320\222\320\275\320\265\321\210\320\275\320\270\320\271 \320\264\320\276\320\273\320\263", nullptr));
        sql_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        sql_label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(vnutr_tab), QCoreApplication::translate("MainWindow", "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\271 \320\264\320\276\320\273\320\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
