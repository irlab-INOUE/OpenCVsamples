# OpenCVsamples
OpenCV のサンプルプログラム，テンプレート的に使ってください．

# ディレクトリ構成
    .
    ├── faceDetect
    │   ├── CMakeLists.txt
    │   ├── face.jpg
    │   └── faceDetect.cpp
    ├── firstSamples
    │   ├── drawPoints
    │   │   ├── CMakeLists.txt
    │   │   └── drawPoints.cpp
    │   └── windowOpen
    │       ├── CMakeLists.txt
    │       └── windowOpen.cpp
    ├── readFile
    │   ├── CMakeLists.txt
    │   └── main.cpp
    └── takePhoto
        ├── CMakeLists.txt
        ├── image.png
        └── main.cpp

## firstSamples
最初に試してみるサンプルプログラム

コンパイルのテストも兼ねる

- windowOpen.cpp ウィンドウの描画
- drawPoints.cpp 点を打つことで直線を描画する

## faceDetect
顔検出のサンプルプログラム

使用方法は ./faceDetect と打つと表示されるので参考にしてほしい

## readFile
画像ファイルを読み込んで表示する

## takePhoto
カメラから画像を取得して表示する
