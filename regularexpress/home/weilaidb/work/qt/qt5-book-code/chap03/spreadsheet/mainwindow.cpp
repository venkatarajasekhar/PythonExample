MainWindow::MainWindow()
void MainWindow::closeEvent(QCloseEvent *event)
void MainWindow::newFile()
void MainWindow::open()
bool MainWindow::save()
bool MainWindow::saveAs()
void MainWindow::find()
void MainWindow::goToCell()
void MainWindow::sort()
void MainWindow::about()
void MainWindow::openRecentFile()
void MainWindow::updateStatusBar()
void MainWindow::spreadsheetModified()
void MainWindow::createActions()
void MainWindow::createMenus()
void MainWindow::createContextMenu()
void MainWindow::createToolBars()
void MainWindow::createStatusBar()
void MainWindow::readSettings()
void MainWindow::writeSettings()
bool MainWindow::okToContinue()
bool MainWindow::loadFile(const QString &fileName)
bool MainWindow::saveFile(const QString &fileName)
void MainWindow::setCurrentFile(const QString &fileName)
void MainWindow::updateRecentFileActions()
QString MainWindow::strippedName(const QString &fullFileName)
