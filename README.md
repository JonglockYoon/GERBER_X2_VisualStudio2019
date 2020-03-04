# GERBER_X2_For_VisualStudio2019
V0.7.8

Gerber 파일을 분석할려고 하다보면 가장 먼저 접하게 되는것이 gerbv — a Gerber (RS-274X) viewer 입니다
GTK 와 GLIB Base로 제작된 Open source : http://gerbv.geda-project.org/

최근 GitHub에 xray3d@ya.ru 님이 올린 QT Base의 GERBER_X2 Open source가 있습니다.
만든 원본 : https://github.com/XRay3D/GERBER_X2

gerbv 와는 용도를 달리 만들었지만 Gerber Format을 분석하고 화면에 Display하는것은 
동일하고 QT Base로 제작되었기 때문에 활용도가 조금더 높을것으로 예상됩니다

원본 Source를 가지고 Visual Studio 2019를 이용하여 컴파일하고 Windows상에서 실행될수 있도록
일부 수정한 Program을 올려둡니다.

moc_....cpp 파일과 ui_...h 파일은 QT Creator에서 생성된 파일을 그대로 이용합니다
이것이 불편하신분은 uic 와 moc 명령을 통해 Visual studio에서 직접생성할수 있도록 작성해서 사용하면 됩니다.
$(QTDIR)\bin\uic.exe %(UIFiles.FullPath) -o %(UIFiles.RootDir)%(UIFiles.Directory)ui_%(UIFiles.Filename).h
$(QTDIR)\bin\moc.exe "%(FullPath)" -o "%(RootDir)%(Directory)moc_%(Filename).cpp"

GraphicsView::searching() : 마우스로 드래깅한 영역에 Gerber Item이 조사하는 함수.

Scene::itemSelChanged() : Gerber item을 선택했을때 호출되도록 작성한 함수.

원본 : https://github.com/XRay3D/GERBER_X2
