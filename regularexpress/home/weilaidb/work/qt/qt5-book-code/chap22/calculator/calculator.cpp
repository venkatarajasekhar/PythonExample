Calculator::Calculator(QWidget *parent)
: QDialog(parent)
void Calculator::digitClicked()
void Calculator::unaryOperatorClicked()
void Calculator::additiveOperatorClicked()
void Calculator::multiplicativeOperatorClicked()
void Calculator::equalClicked()
void Calculator::pointClicked()
void Calculator::changeSignClicked()
void Calculator::backspaceClicked()
void Calculator::customButtonClicked()
void Calculator::clear()
void Calculator::clearAll()
void Calculator::clearMemory()
void Calculator::readMemory()
void Calculator::setMemory()
void Calculator::addToMemory()
QDir Calculator::directoryOf(const QString &subdir)
void Calculator::createCustomButtons()
QToolButton *Calculator::createButton(const QString &text,
const char *member)
void Calculator::abortOperation()
void Calculator::setDisplayValue(double value)
bool Calculator::calculate(double rightOperand,
const QString &pendingOperator)
