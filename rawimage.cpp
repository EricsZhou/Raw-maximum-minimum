//***************************************************************************
//
// 
//
// FileName:      rawimage.cpp  
// Author:        Erics
// Date:          2022/11/29
// Description:   16位raw图像处理方法
// Function List:  
// History:              
//          <author>     <time>     <desc>        
//          Erics        2022/11/29  Build
//
//***************************************************************************


// 获取Raw图片的均值
// Get the mean of Raw images
template<typename T>
double CalculateMean(T* raw, int width, int left, int top, int right, int bottom)
{
 double mean = 0.0;

 for (int j = top; j < bottom; j++)
 {
  for (int i = left; i < right; i++)
  {
   mean += raw[j * width + i];
  }
 }

 mean = mean / ((right - left) * (bottom - top));

 return mean;
}

// 获取Raw图片的最大值和最小值
// Gets the maximum and minimum values for Raw images
template<typename T>
void GetMaxAndMin(T* raw, int width, int height, T& min, T& max)
{
 unsigned long bufSize = width * height;
 min = max = raw[0];

 for (unsigned long i = 0; i < bufSize; i++)
 {
  T sValue = *raw++;
  if (sValue > max)
   max = sValue;
  if (sValue < min)
   min = sValue;
 }
}
