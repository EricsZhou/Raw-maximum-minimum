//***************************************************************************
//
// 
//
// FileName:      rawimage.h
// Author:        Erics
// Date:          2022/11/29
// Description:   16位raw图像处理方法
// Function List:  
// History:              
//          <author>     <time>     <desc>        
//          Erics        2022/11/29  Build
//
//***************************************************************************

#ifndef _RAW_IMAGE_
#define _RAW_IMAGE_

// 获取Raw图片的均值
template<typename T>
double CalculateMean(T* raw, int width, int left, int top, int right, int bottom);

// 获取Raw图片的最大值和最小值
template<typename T>
void GetMaxAndMin(T* raw, int width, int height, T& min, T& max);

#endif // _RAW_IMAGE_
