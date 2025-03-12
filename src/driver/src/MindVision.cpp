#include "VideoCapture.h"

using namespace ly;
using namespace cv;
unsigned char           * g_pRgbBuffer;     //处理后数据缓存区


void MVcamera::open(){
    CameraSdkInit(1);
}