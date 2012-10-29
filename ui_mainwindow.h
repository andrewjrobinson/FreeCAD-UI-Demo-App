/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Oct 25 22:30:11 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuTools;
    QMenu *menuMacro;
    QMenu *menuCam;
    QMenu *menuWindows;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QDockWidget *ComboView;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_8;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QGridLayout *gridLayout_6;
    QTableWidget *tableWidget;
    QWidget *tab_6;
    QGridLayout *gridLayout_7;
    QTableWidget *tableWidget_2;
    QWidget *tab;
    QDockWidget *PythonConsole;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QToolBar *toolBar;
    QDockWidget *GCode;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_9;
    QTextBrowser *textBrowser;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_4;
    QGridLayout *gridLayout_4;
    QTextEdit *textEdit_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(859, 569);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setTabPosition(QTabWidget::South);
        tabWidget_2->setTabShape(QTabWidget::Rounded);
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("web-browser.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_2->addTab(tab_4, icon, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget = new QWidget(tab_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(52, 52, 102, 255), stop:1 rgba(170, 170, 193, 255));"));

        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8("freecad.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_2->addTab(tab_3, icon1, QString());

        gridLayout_5->addWidget(tabWidget_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 859, 29));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuMacro = new QMenu(menubar);
        menuMacro->setObjectName(QString::fromUtf8("menuMacro"));
        menuCam = new QMenu(menubar);
        menuCam->setObjectName(QString::fromUtf8("menuCam"));
        menuWindows = new QMenu(menubar);
        menuWindows->setObjectName(QString::fromUtf8("menuWindows"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        ComboView = new QDockWidget(MainWindow);
        ComboView->setObjectName(QString::fromUtf8("ComboView"));
        ComboView->setStyleSheet(QString::fromUtf8("margin: 0; padding:0px;"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidgetContents->setStyleSheet(QString::fromUtf8("padding: 0; margin: 0;"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(dockWidgetContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_8 = new QGridLayout(tab_2);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        splitter = new QSplitter(tab_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        treeWidget = new QTreeWidget(splitter);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Document.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("PartFeatureImport.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../FreeCAD/cam.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../FreeCAD/tp2.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setIcon(0, icon2);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setIcon(0, icon3);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem3->setIcon(0, icon4);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem3);
        __qtreewidgetitem4->setIcon(0, icon5);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeWidget->setRootIsDecorated(false);
        splitter->addWidget(treeWidget);
        tabWidget_3 = new QTabWidget(splitter);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setTabPosition(QTabWidget::South);
        tabWidget_3->setTabShape(QTabWidget::Triangular);
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_6 = new QGridLayout(tab_5);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tableWidget = new QTableWidget(tab_5);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_6->addWidget(tableWidget, 0, 0, 1, 1);

        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_7 = new QGridLayout(tab_6);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tableWidget_2 = new QTableWidget(tab_6);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout_7->addWidget(tableWidget_2, 0, 0, 1, 1);

        tabWidget_3->addTab(tab_6, QString());
        splitter->addWidget(tabWidget_3);

        gridLayout_8->addWidget(splitter, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        ComboView->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), ComboView);
        PythonConsole = new QDockWidget(MainWindow);
        PythonConsole->setObjectName(QString::fromUtf8("PythonConsole"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout_2 = new QGridLayout(dockWidgetContents_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit = new QTextEdit(dockWidgetContents_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);

        PythonConsole->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), PythonConsole);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        GCode = new QDockWidget(MainWindow);
        GCode->setObjectName(QString::fromUtf8("GCode"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout_9 = new QGridLayout(dockWidgetContents_3);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        textBrowser = new QTextBrowser(dockWidgetContents_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_9->addWidget(textBrowser, 0, 0, 1, 1);

        GCode->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), GCode);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        gridLayout_4 = new QGridLayout(dockWidgetContents_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        textEdit_2 = new QTextEdit(dockWidgetContents_4);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        gridLayout_4->addWidget(textEdit_2, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuMacro->menuAction());
        menubar->addAction(menuCam->menuAction());
        menubar->addAction(menuWindows->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FreeCAD", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Start page", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Unnamed : 1*", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuMacro->setTitle(QApplication::translate("MainWindow", "Macro", 0, QApplication::UnicodeUTF8));
        menuCam->setTitle(QApplication::translate("MainWindow", "Cam", 0, QApplication::UnicodeUTF8));
        menuWindows->setTitle(QApplication::translate("MainWindow", "Windows", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        ComboView->setWindowTitle(QApplication::translate("MainWindow", "Combo View", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Labels & Attributes", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Application", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Unnamed", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Box", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Cam Feature", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "ToolPath", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Property", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Value", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Property", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Value", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Data", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        tab->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tasks", 0, QApplication::UnicodeUTF8));
        PythonConsole->setWindowTitle(QApplication::translate("MainWindow", "Python console", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:10pt; color:#868686;\">&gt;&gt;&gt;</span><span style=\" font-family:'Courier'; font-size:10pt;\"> App.setActiveDocument</span><span style=\" font-family:'Courier'; font-size:10pt; color:#868686;\">(</span><span style=\" font-family:'Courier'; font-size:10pt; color:#dd0700;\">&quot;Unnamed&quot;</span><span style=\" font-family:'Courier'; font-size:10pt; color:#868686;\">)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span s"
                        "tyle=\" font-family:'Courier'; font-size:10pt; color:#868686;\">&gt;&gt;&gt;</span><span style=\" font-family:'Courier'; font-size:10pt;\"> App.ActiveDocument=App.getDocument</span><span style=\" font-family:'Courier'; font-size:10pt; color:#868686;\">(</span><span style=\" font-family:'Courier'; font-size:10pt; color:#dd0700;\">&quot;Unnamed&quot;</span><span style=\" font-family:'Courier'; font-size:10pt; color:#868686;\">)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:10pt; color:#868686;\">&gt;&gt;&gt;</span><span style=\" font-family:'Courier'; font-size:10pt;\"> Gui.ActiveDocument=Gui.getDocument</span><span style=\" font-family:'Courier'; font-size:10pt; color:#868686;\">(</span><span style=\" font-family:'Courier'; font-size:10pt; color:#dd0700;\">&quot;Unnamed&quot;</span><span style=\" font-family:'Courier'; font-size:10pt; color:#868686;\">)</span></p>\n"
"<p styl"
                        "e=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:10pt; color:#868686;\">&gt;&gt;&gt; </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        GCode->setWindowTitle(QApplication::translate("MainWindow", "GCode", 0, QApplication::UnicodeUTF8));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "Tool Path", 0, QApplication::UnicodeUTF8));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:9pt; color:#5c46ff;\">'''<br />Generated by FreeCAD/CAM Module<br />Date: 2012-10-25 22:00<br />Document: Unnamed.fcstd<br />'''</span><span style=\" font-family:'Courier'; font-size:9pt;\"><br /></span><span style=\" font-family:'Courier'; font-size:9pt; font-weight:600; color:#666666;\"># Setup</span><span style=\" font-family:'Courier'; font-size:9pt;\"><br /></span><span style=\" font-family:'Courier'; font-size:9pt; color:#0d8f94;\">MachineLibrary</span><span style=\" font-family:'Courier'; font-size:9pt;\""
                        ">(</span><span style=\" font-family:'Courier'; font-size:9pt; color:#9b0000;\">'MyMachines'</span><span style=\" font-family:'Courier'; font-size:9pt;\">)<br /></span><span style=\" font-family:'Courier'; font-size:9pt; color:#0d8f94;\">SetMachine</span><span style=\" font-family:'Courier'; font-size:9pt;\">(</span><span style=\" font-family:'Courier'; font-size:9pt; color:#9b0000;\">'3-Axis Desktop CNC'</span><span style=\" font-family:'Courier'; font-size:9pt;\">)<br /></span><span style=\" font-family:'Courier'; font-size:9pt; color:#0d8f94;\">ToolLibrary</span><span style=\" font-family:'Courier'; font-size:9pt;\">(</span><span style=\" font-family:'Courier'; font-size:9pt; color:#9b0000;\">'Default'</span><span style=\" font-family:'Courier'; font-size:9pt;\">)<br /><br /></span><span style=\" font-family:'Courier'; font-size:9pt; font-weight:600; color:#666666;\"># Box - Rough</span><span style=\" font-family:'Courier'; font-size:9pt;\"><br /></span><span style=\" font-family:'Courier'; font-size:9pt; co"
                        "lor:#0d8f94;\">SetTool</span><span style=\" font-family:'Courier'; font-size:9pt;\">(</span><span style=\" font-family:'Courier'; font-size:9pt; color:#9b0000;\">'6.35mm Carbide'</span><span style=\" font-family:'Courier'; font-size:9pt;\">)<br /></span><span style=\" font-family:'Courier'; font-size:9pt; font-weight:600; color:#9b0000;\">Rapid</span><span style=\" font-family:'Courier'; font-size:9pt;\">(0,1,1)<br /></span><span style=\" font-family:'Courier'; font-size:9pt; font-weight:600; color:#9b0000;\">Rapid</span><span style=\" font-family:'Courier'; font-size:9pt;\">(0,1,0.9)<br /></span><span style=\" font-family:'Courier'; font-size:9pt; font-weight:600; color:#025000;\">Move</span><span style=\" font-family:'Courier'; font-size:9pt;\">(0,1,0.5)<br /></span><span style=\" font-family:'Courier'; font-size:9pt; font-weight:600; color:#025000;\">Move</span><span style=\" font-family:'Courier'; font-size:9pt;\">(1,1,0.5)<br /></span><span style=\" font-family:'Courier'; font-size:9pt; font-weight:600; c"
                        "olor:#666666;\">#...</span><span style=\" font-family:'Courier'; font-size:9pt;\"><br /><br /></span><span style=\" font-family:'Courier'; font-size:9pt; font-weight:600; color:#666666;\"># Box - Finish</span><span style=\" font-family:'Courier'; font-size:9pt;\"><br /></span><span style=\" font-family:'Courier'; font-size:9pt; color:#0d8f94;\">SetTool</span><span style=\" font-family:'Courier'; font-size:9pt;\">(</span><span style=\" font-family:'Courier'; font-size:9pt; color:#9b0000;\">'3.175mm Ball'</span><span style=\" font-family:'Courier'; font-size:9pt;\">)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
