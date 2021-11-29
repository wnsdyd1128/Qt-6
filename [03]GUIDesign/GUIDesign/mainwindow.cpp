#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  scene = new QGraphicsScene(this);
  ui->graphicsView->setScene((scene));
  QBrush greenBrush(Qt::green);
  QBrush redBrush(Qt::red);
  QBrush blueBrush(Qt::blue);
  QPen outlinePen(Qt::black);

  outlinePen.setWidth(2);

  rectangle = scene->addRect(100, 0, 80, 100, outlinePen, redBrush);
  ellipse = scene->addEllipse(0, -100, 300, 60, outlinePen, blueBrush);
  text = scene->addText("Hello World!", QFont("Arial", 15));
  text->setFlag(QGraphicsItem::ItemIsSelectable);
  text->setFlag(QGraphicsItem::ItemIsMovable);
  text->setFont(QFont("D2Coding", 18));
  text->setFlag(QGraphicsItem::ItemIsFocusable);

}

MainWindow::~MainWindow()
{
  delete ui;
}

