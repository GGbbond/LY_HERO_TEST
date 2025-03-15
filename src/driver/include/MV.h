#ifndef MVCAMERA_H
#define MVCAMERA_H
#pragma once

#include "CameraApi.h"

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdio.h>


unsigned char           * g_pRgbBuffer;     //处理后数据缓存区

namespace ly {

    class MV{
        public:
            MV();
            ~MV();

            int                     iCameraCounts = 1;
            int                     iStatus=-1;
            tSdkCameraDevInfo       tCameraEnumList;
            int                     hCamera;
            tSdkCameraCapbility     tCapability;      //设备描述信息
            tSdkFrameHead           sFrameInfo;
            BYTE*			        pbyBuffer;
            int                     iDisplayFrames = 10000;
            //IplImage *iplImage = NULL;
            int                     channel=3;

            void OpenDevice();

            cv::Mat GetBuffer();



    }
}

#endif