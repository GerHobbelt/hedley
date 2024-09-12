cd test

if [%COMPILER%] == [msvc] (
  if []==[%VS_VERSION%] (
    "C:\Program Files (x86)\Microsoft Visual Studio\%VS_YEAR%\Community\VC\Auxiliary\Build\vcvarsall.bat" x86
  ) else (
    "C:\Program Files (x86)\Microsoft Visual Studio %VS_VERSION%\VC\vcvarsall.bat"
  )
  nmake /f Makefile.msvc
)
