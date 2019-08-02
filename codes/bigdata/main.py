# This Python file uses the following encoding: utf-8
import sys
from PySide2.QtCore import *
from PySide2.QtGui import *
from PySide2.QtWidgets import *
from PySide2.QtWidgets import QApplication
from up import Ui_Dialog

class Test_Form(QDialog):
    def __init__(self,parent=None):
        QDialog.__init__(self,parent)
        self.ui=Ui_Dialog()
        self.ui.setupUi(self)
if __name__ == "__main__":
    app = QApplication([])
    form = Test_Form()
    form.show()
    # ...
    sys.exit(app.exec_())
