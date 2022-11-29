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

// main.cpp 
short sMin = 0;
short sMax = 0;
 // Gets the maximum and minimum Raw image values
 GetMaxAndMin((short*)RawData, mm_nWidth, m_nHeight, sMin, sMax);

 // Get the Raw image average
 double dMean = CalculateMean((short*)RawData, m_nWidth, 0, 0, m_nWidth, m_nHeight);
