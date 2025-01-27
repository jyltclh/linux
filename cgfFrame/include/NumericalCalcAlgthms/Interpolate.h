//////////////////////////////////////////////////////////////////////
// Interpolate.h
//
// 插值类 CInterpolate 的声明接口
//
// xiekongshu编制, 2002/8
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_INTERPOLATE_H__0AF22CA4_A4AA_486B_9D68_E074FABDAF85__INCLUDED_)
#define AFX_INTERPOLATE_H__0AF22CA4_A4AA_486B_9D68_E074FABDAF85__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <math.h>

namespace NumericalCalcAlgthms{
class NUMERICALCALCALGTHMS_API CInterpolate  
{
public:
	//
	// 构造与析构
	//

	CInterpolate();
	virtual ~CInterpolate();

	//
	// 将字符串转换成结点值
	//

	//static int GetNodesFromString(CString s, int n, double dblNodes[], const CString& sDelim = " ");

	//
	// 插值算法函数
	//

	//////////////////////////////////////////////////////////////////////
	// 一元全区间不等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x[] - 一维数组，长度为n，存放给定的n个结点的值x(i)，
	//                 要求x(0)<x(1)<...<x(n-1)
	// 3. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double t - 存放指定的插值点的值
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueLagrange(int n, double x[], double y[], double t);

	//////////////////////////////////////////////////////////////////////
	// 一元全区间等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x0 - 存放等距n个结点中第一个结点的值
	// 3. double xStep - 等距结点的步长
	// 4. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 5. double t - 存放指定的插值点的值
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueLagrange(int n, double x0, double xStep, double y[], double t);

	//////////////////////////////////////////////////////////////////////
	// 一元三点不等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x[] - 一维数组，长度为n，存放给定的n个结点的值x(i)
	// 3. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double t - 存放指定的插值点的值
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueLagrange3(int n, double x[], double y[], double t);

	//////////////////////////////////////////////////////////////////////
	// 一元三点等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x0 - 存放等距n个结点中第一个结点的值
	// 3. double xStep - 等距结点的步长
	// 4. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 5. double t - 存放指定的插值点的值
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueLagrange3(int n, double x0, double xStep, double y[], double t);

	//////////////////////////////////////////////////////////////////////
	// 连分式不等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x[] - 一维数组，长度为n，存放给定的n个结点的值x(i)
	// 3. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double t - 存放指定的插值点的值
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValuePqs(int n, double x[], double y[], double t);

	//////////////////////////////////////////////////////////////////////
	// 连分式等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x0 - 存放等距n个结点中第一个结点的值
	// 3. double xStep - 等距结点的步长
	// 4. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 5. double t - 存放指定的插值点的值
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValuePqs(int n, double x0, double xStep, double y[], double t);

	//////////////////////////////////////////////////////////////////////
	// 埃尔米特不等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x[] - 一维数组，长度为n，存放给定的n个结点的值x(i)
	// 3. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double dy[] - 一维数组，长度为n，存放给定的n个结点的函数导数值y'(i)，
	//                 y'(i) = f'(x(i)), i=0,1,...,n-1
	// 5. double t - 存放指定的插值点的值
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueHermite(int n, double x[], double y[], double dy[], double t);

	//////////////////////////////////////////////////////////////////////
	// 埃尔米特等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x0 - 存放等距n个结点中第一个结点的值
	// 3. double xStep - 等距结点的步长
	// 4. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double dy[] - 一维数组，长度为n，存放给定的n个结点的函数导数值y'(i)，
	//                 y'(i) = f'(x(i)), i=0,1,...,n-1
	// 5. double t - 存放指定的插值点的值
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueHermite(int n, double x0, double xStep, double y[], double dy[], double t);

	//////////////////////////////////////////////////////////////////////
	// 埃特金不等距逐步插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x[] - 一维数组，长度为n，存放给定的n个结点的值x(i)
	// 3. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double t - 存放指定的插值点的值
	// 5. double eps - 控制精度参数，默认值为0.000001
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueAitken(int n, double x[], double y[], double t, double eps = 0.000001);

	//////////////////////////////////////////////////////////////////////
	// 埃特金等距逐步插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x0 - 存放等距n个结点中第一个结点的值
	// 3. double xStep - 等距结点的步长
	// 4. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 5. double t - 存放指定的插值点的值
	// 6. double eps - 控制精度参数，默认值为0.000001
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueAitken(int n, double x0, double xStep, double y[], double t, double eps = 0.000001);

	//////////////////////////////////////////////////////////////////////
	// 光滑不等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x[] - 一维数组，长度为n，存放给定的n个结点的值x(i)
	// 3. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double t - 存放指定的插值点的值
	// 5. double s[] - 一维数组，长度为5，其中s(0)，s(1)，s(2)，s(3)返回三次多项式的系数，
	//					s(4)返回指定插值点t处的函数近似值f(t)（k<0时）或任意值（k>=0时）
	// 6. int k - 控制参数，若k>=0，则只计算第k个子区间[x(k), x(k+1)]上的三次多项式的系数
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueAkima(int n, double x[], double y[], double t, double s[], int k = -1);

	//////////////////////////////////////////////////////////////////////
	// 光滑等距插值
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x0 - 存放等距n个结点中第一个结点的值
	// 3. double xStep - 等距结点的步长
	// 4. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 5. double t - 存放指定的插值点的值
	// 5. double s[] - 一维数组，长度为5，其中s(0)，s(1)，s(2)，s(3)返回三次多项式的系数，
	//					s(4)返回指定插值点t处的函数近似值f(t)（k<0时）或任意值（k>=0时）
	// 6. int k - 控制参数，若k>=0，则只计算第k个子区间[x(k), x(k+1)]上的三次多项式的系数
	//
	// 返回值：double 型，指定的查指点t的函数近似值f(t)
	//////////////////////////////////////////////////////////////////////
	static double GetValueAkima(int n, double x0, double xStep, double y[], double t, double s[], int k = -1);

	//////////////////////////////////////////////////////////////////////
	// 第一种边界条件的三次样条函数插值、微商与积分
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x[] - 一维数组，长度为n，存放给定的n个结点的值x(i)
	// 3. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double dy[] - 一维数组，长度为n，调用时，dy(0)存放给定区间的左端点处的一阶导数值，
	//                  dy(n-1)存放给定区间的右端点处的一阶导数值。返回时，存放n个给定点处的
	//                  一阶导数值y'(i)，i=0,1,...,n-1
	// 5. double ddy[] - 一维数组，长度为n，返回时，存放n个给定点处的二阶导数值y''(i)，
	//                  i=0,1,...,n-1
	// 6. int m - 指定插值点的个数
	// 7. double t[] - 一维数组，长度为m，存放m个指定的插值点的值。
	//                 要求x(0)<t(j)<x(n-1), j=0,1,…,m-1
	// 8. double z[] - 一维数组，长度为m，存放m个指定的插值点处的函数值
	// 9. double dz[] - 一维数组，长度为m，存放m个指定的插值点处的一阶导数值
	// 10. double ddz[] - 一维数组，长度为m，存放m个指定的插值点处的二阶导数值
	//
	// 返回值：double 型，指定函数的x(0)到x(n-1)的定积分值
	//////////////////////////////////////////////////////////////////////
	static double GetValueSpline1(int n, double x[], double y[], double dy[], double ddy[], 
								  int m, double t[], double z[], double dz[], double ddz[]);

	//////////////////////////////////////////////////////////////////////
	// 第二种边界条件的三次样条函数插值、微商与积分
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x[] - 一维数组，长度为n，存放给定的n个结点的值x(i)
	// 3. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double dy[] - 一维数组，长度为n，返回时，存放n个给定点处的一阶导数值y'(i)，
	//                 i=0,1,...,n-1
	// 5. double ddy[] - 一维数组，长度为n，返回时，存放n个给定点处的二阶导数值y''(i)，
	//                  i=0,1,...,n-1，调用时，ddy(0)存放给定区间的左端点处的二阶导数值，
	//                  ddy(n－1)存放给定区间的右端点处的二阶导数值
	// 6. int m - 指定插值点的个数
	// 7. double t[] - 一维数组，长度为m，存放m个指定的插值点的值。
	//                 要求x(0)<t(j)<x(n-1), j=0,1,…,m-1
	// 8. double z[] - 一维数组，长度为m，存放m个指定的插值点处的函数值
	// 9. double dz[] - 一维数组，长度为m，存放m个指定的插值点处的一阶导数值
	// 10. double ddz[] - 一维数组，长度为m，存放m个指定的插值点处的二阶导数值
	//
	// 返回值：double 型，指定函数的x(0)到x(n-1)的定积分值
	//////////////////////////////////////////////////////////////////////
	static double GetValueSpline2(int n, double x[], double y[], double dy[], double ddy[], 
								  int m, double t[], double z[], double dz[], double ddz[]);

	//////////////////////////////////////////////////////////////////////
	// 第三种边界条件的三次样条函数插值、微商与积分
	//
	// 参数：
	// 1. int n - 结点的个数
	// 2. double x[] - 一维数组，长度为n，存放给定的n个结点的值x(i)
	// 3. double y[] - 一维数组，长度为n，存放给定的n个结点的函数值y(i)，
	//                 y(i) = f(x(i)), i=0,1,...,n-1
	// 4. double dy[] - 一维数组，长度为n，返回时，存放n个给定点处的一阶导数值y'(i)，
	//                 i=0,1,...,n-1
	// 5. double ddy[] - 一维数组，长度为n，返回时，存放n个给定点处的二阶导数值y''(i)，
	//                  i=0,1,...,n-1
	// 6. int m - 指定插值点的个数
	// 7. double t[] - 一维数组，长度为m，存放m个指定的插值点的值。
	//                 要求x(0)<t(j)<x(n-1), j=0,1,…,m-1
	// 8. double z[] - 一维数组，长度为m，存放m个指定的插值点处的函数值
	// 9. double dz[] - 一维数组，长度为m，存放m个指定的插值点处的一阶导数值
	// 10. double ddz[] - 一维数组，长度为m，存放m个指定的插值点处的二阶导数值
	//
	// 返回值：double 型，指定函数的x(0)到x(n-1)的定积分值
	//////////////////////////////////////////////////////////////////////
	static double GetValueSpline3(int n, double x[], double y[], double dy[], double ddy[], 
								  int m, double t[], double z[], double dz[], double ddz[]);

	//////////////////////////////////////////////////////////////////////
	// 二元三点插值
	//
	// 参数：
	// 1. int n - x方向上给定结点的点数
	// 2. double x[] - 一维数组，长度为n，存放给定n x m 个结点x方向上的n个值x(i)
	// 3. int m - y方向上给定结点的点数
	// 4. double y[] - 一维数组，长度为m，存放给定n x m 个结点y方向上的m个值y(i)
	// 5. double z[] - 一维数组，长度为n x m，存放给定的n x m个结点的函数值z(i,j)，
	//                 z(i,j) = f(x(i), y(j)), i=0,1,...,n-1, j=0,1,...,m-1
	// 6. double u - 存放插值点x坐标
	// 7. double v - 存放插值点y坐标
	//
	// 返回值：double 型，指定函数值f(u, v)
	//////////////////////////////////////////////////////////////////////
	static double GetValueTqip(int n, double x[], int m, double y[], double z[], double u, double v);

	//////////////////////////////////////////////////////////////////////
	// 二元全区间插值
	//
	// 参数：
	// 1. int n - x方向上给定结点的点数
	// 2. double x[] - 一维数组，长度为n，存放给定n x m 个结点x方向上的n个值x(i)
	// 3. int m - y方向上给定结点的点数
	// 4. double y[] - 一维数组，长度为m，存放给定n x m 个结点y方向上的m个值y(i)
	// 5. double z[] - 一维数组，长度为n x m，存放给定的n x m个结点的函数值z(i,j)，
	//                 z(i,j) = f(x(i), y(j)), i=0,1,...,n-1, j=0,1,...,m-1
	// 6. double u - 存放插值点x坐标
	// 7. double v - 存放插值点y坐标
	//
	// 返回值：double 型，指定函数值f(u, v)
	//////////////////////////////////////////////////////////////////////
	static double GetValueLagrange2(int n, double x[], int m, double y[], double z[], double u, double v);

};
}

#endif // !defined(AFX_INTERPOLATE_H__0AF22CA4_A4AA_486B_9D68_E074FABDAF85__INCLUDED_)
