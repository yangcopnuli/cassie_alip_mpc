/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftKneeSpringJoint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t345;
  double t302;
  double t401;
  double t314;
  double t480;
  double t209;
  double t225;
  double t329;
  double t572;
  double t617;
  double t627;
  double t663;
  double t683;
  double t775;
  double t855;
  double t862;
  double t997;
  double t1041;
  double t1135;
  double t1153;
  double t1173;
  double t1210;
  double t1293;
  double t119;
  double t125;
  double t1319;
  double t62;
  double t2163;
  double t2198;
  double t2214;
  double t2557;
  double t2602;
  double t2714;
  double t2130;
  double t2227;
  double t2389;
  double t1493;
  double t2474;
  double t2795;
  double t3004;
  double t3140;
  double t3169;
  double t3255;
  double t3977;
  double t4004;
  double t3732;
  double t3835;
  double t3919;
  double t4028;
  double t4037;
  double t4094;
  double t4132;
  double t4163;
  double t4416;
  double t4431;
  double t4432;
  double t4339;
  double t4363;
  double t4375;
  double t4400;
  double t4403;
  double t4406;
  double t4410;
  double t4515;
  double t4539;
  double t4552;
  double t4564;
  double t4604;
  double t4821;
  double t4822;
  double t4825;
  double t4761;
  double t4764;
  double t4772;
  double t4911;
  double t4920;
  double t4921;
  double t4760;
  double t4804;
  double t4836;
  double t4840;
  double t4852;
  double t4886;
  double t4910;
  double t4940;
  double t4962;
  double t4977;
  double t4980;
  double t5030;
  double t5179;
  double t5180;
  double t5182;
  double t5203;
  double t5211;
  double t5213;
  double t5227;
  double t5233;
  double t5234;
  double t5241;
  double t5318;
  double t5336;
  double t5337;
  double t5247;
  double t5402;
  double t5413;
  double t5430;
  double t5560;
  double t5563;
  double t5596;
  double t5642;
  double t5653;
  double t5661;
  double t5670;
  double t5677;
  double t5682;
  double t5683;
  double t5685;
  double t5691;
  double t5736;
  double t5738;
  double t5716;
  double t5727;
  double t5729;
  double t5732;
  double t5739;
  double t5745;
  double t5754;
  double t5757;
  double t5761;
  double t5790;
  double t5791;
  double t5783;
  double t5785;
  double t5789;
  double t5794;
  double t5796;
  double t5805;
  double t5811;
  double t5812;
  double t5861;
  double t5881;
  double t5883;
  double t5842;
  double t5843;
  double t5847;
  double t5848;
  double t5850;
  double t5856;
  double t5860;
  double t5892;
  double t5895;
  double t5906;
  double t5907;
  double t5908;
  double t5930;
  double t5936;
  double t5938;
  double t5941;
  double t5942;
  double t5944;
  double t5956;
  double t5957;
  double t5964;
  double t5965;
  double t5986;
  double t5987;
  double t5988;
  double t5973;
  double t5989;
  double t5990;
  double t5992;
  double t5505;
  double t5511;
  double t5530;
  double t6037;
  double t6039;
  double t6040;
  double t6041;
  double t6042;
  double t6044;
  double t6077;
  double t6080;
  double t6081;
  double t6068;
  double t6069;
  double t6070;
  double t6074;
  double t6082;
  double t6083;
  double t6090;
  double t6097;
  double t6100;
  double t6084;
  double t6102;
  double t6103;
  double t6104;
  double t6105;
  double t6107;
  double t6113;
  double t6114;
  double t6117;
  double t6130;
  double t6132;
  double t6135;
  double t6136;
  double t6137;
  double t6138;
  double t6142;
  double t6147;
  double t6151;
  double t6152;
  double t6172;
  double t6179;
  double t6185;
  double t6162;
  double t6186;
  double t6189;
  double t6190;
  double t6247;
  double t6248;
  double t6253;
  double t6233;
  double t6234;
  double t6236;
  double t6240;
  double t6241;
  double t6242;
  double t6244;
  double t6254;
  double t6257;
  double t6264;
  double t6265;
  double t6268;
  double t1287;
  double t1420;
  double t1438;
  double t1538;
  double t1732;
  double t1823;
  double t3089;
  double t3325;
  double t3406;
  double t3453;
  double t3459;
  double t3525;
  double t4047;
  double t4186;
  double t4201;
  double t4230;
  double t4233;
  double t4238;
  double t4546;
  double t4626;
  double t4670;
  double t4688;
  double t4691;
  double t4715;
  double t4976;
  double t5048;
  double t5049;
  double t5118;
  double t5119;
  double t5134;
  double t5214;
  double t5243;
  double t5245;
  double t5257;
  double t5431;
  double t5449;
  double t6383;
  double t5694;
  double t5695;
  double t5696;
  double t5699;
  double t5702;
  double t5703;
  double t5751;
  double t5763;
  double t5765;
  double t5768;
  double t5769;
  double t5774;
  double t5800;
  double t5813;
  double t5821;
  double t5826;
  double t5827;
  double t5830;
  double t5903;
  double t5910;
  double t5911;
  double t5916;
  double t5917;
  double t5918;
  double t5946;
  double t5967;
  double t5970;
  double t5975;
  double t6001;
  double t6002;
  double t6462;
  double t6012;
  double t6014;
  double t6017;
  double t5544;
  double t5545;
  double t6049;
  double t6050;
  double t6053;
  double t6055;
  double t6057;
  double t6060;
  double t6553;
  double t6556;
  double t6557;
  double t6139;
  double t6155;
  double t6161;
  double t6163;
  double t6195;
  double t6196;
  double t6571;
  double t6217;
  double t6219;
  double t6220;
  double t6262;
  double t6270;
  double t6271;
  double t6278;
  double t6281;
  double t6282;
  t345 = Cos(var1[3]);
  t302 = Cos(var1[5]);
  t401 = Sin(var1[4]);
  t314 = Sin(var1[3]);
  t480 = Sin(var1[5]);
  t209 = Cos(var1[7]);
  t225 = Cos(var1[6]);
  t329 = -1.*t302*t314;
  t572 = t345*t401*t480;
  t617 = t329 + t572;
  t627 = t225*t617;
  t663 = t345*t302*t401;
  t683 = t314*t480;
  t775 = t663 + t683;
  t855 = Sin(var1[6]);
  t862 = t775*t855;
  t997 = t627 + t862;
  t1041 = t209*t997;
  t1135 = Cos(var1[4]);
  t1153 = Sin(var1[7]);
  t1173 = -1.*t345*t1135*t1153;
  t1210 = t1041 + t1173;
  t1293 = Cos(var1[9]);
  t119 = Cos(var1[8]);
  t125 = Sin(var1[9]);
  t1319 = Sin(var1[8]);
  t62 = Cos(var1[10]);
  t2163 = t302*t314;
  t2198 = -1.*t345*t401*t480;
  t2214 = t2163 + t2198;
  t2557 = t225*t2214;
  t2602 = -1.*t775*t855;
  t2714 = t2557 + t2602;
  t2130 = t225*t775;
  t2227 = t2214*t855;
  t2389 = t2130 + t2227;
  t1493 = Sin(var1[10]);
  t2474 = t119*t2389*t1153;
  t2795 = t2714*t1319;
  t3004 = t2474 + t2795;
  t3140 = t119*t2714;
  t3169 = -1.*t2389*t1153*t1319;
  t3255 = t3140 + t3169;
  t3977 = -1.*t225*t617;
  t4004 = t3977 + t2602;
  t3732 = -1.*t617*t855;
  t3835 = t2130 + t3732;
  t3919 = t119*t3835*t1153;
  t4028 = t4004*t1319;
  t4037 = t3919 + t4028;
  t4094 = t119*t4004;
  t4132 = -1.*t3835*t1153*t1319;
  t4163 = t4094 + t4132;
  t4416 = t345*t1135*t302*t225;
  t4431 = -1.*t345*t1135*t480*t855;
  t4432 = t4416 + t4431;
  t4339 = -1.*t345*t209*t401;
  t4363 = t345*t1135*t225*t480;
  t4375 = t345*t1135*t302*t855;
  t4400 = t4363 + t4375;
  t4403 = t4400*t1153;
  t4406 = t4339 + t4403;
  t4410 = t119*t4406;
  t4515 = t4432*t1319;
  t4539 = t4410 + t4515;
  t4552 = t119*t4432;
  t4564 = -1.*t4406*t1319;
  t4604 = t4552 + t4564;
  t4821 = -1.*t302*t314*t401;
  t4822 = t345*t480;
  t4825 = t4821 + t4822;
  t4761 = -1.*t345*t302;
  t4764 = -1.*t314*t401*t480;
  t4772 = t4761 + t4764;
  t4911 = t225*t4825;
  t4920 = -1.*t4772*t855;
  t4921 = t4911 + t4920;
  t4760 = -1.*t1135*t209*t314;
  t4804 = t225*t4772;
  t4836 = t4825*t855;
  t4840 = t4804 + t4836;
  t4852 = t4840*t1153;
  t4886 = t4760 + t4852;
  t4910 = t119*t4886;
  t4940 = t4921*t1319;
  t4962 = t4910 + t4940;
  t4977 = t119*t4921;
  t4980 = -1.*t4886*t1319;
  t5030 = t4977 + t4980;
  t5179 = t345*t1135*t209;
  t5180 = t997*t1153;
  t5182 = t5179 + t5180;
  t5203 = -1.*t119*t5182;
  t5211 = -1.*t3835*t1319;
  t5213 = t5203 + t5211;
  t5227 = t119*t3835;
  t5233 = -1.*t5182*t1319;
  t5234 = t5227 + t5233;
  t5241 = t1293*t5234;
  t5318 = t119*t5182;
  t5336 = t3835*t1319;
  t5337 = t5318 + t5336;
  t5247 = -1.*t125*t5234;
  t5402 = -1.*t125*t5337;
  t5413 = t5402 + t5241;
  t5430 = t1493*t5413;
  t5560 = t345*t302;
  t5563 = t314*t401*t480;
  t5596 = t5560 + t5563;
  t5642 = t225*t5596;
  t5653 = t302*t314*t401;
  t5661 = -1.*t345*t480;
  t5670 = t5653 + t5661;
  t5677 = t5670*t855;
  t5682 = t5642 + t5677;
  t5683 = t209*t5682;
  t5685 = -1.*t1135*t314*t1153;
  t5691 = t5683 + t5685;
  t5736 = -1.*t5670*t855;
  t5738 = t4804 + t5736;
  t5716 = t225*t5670;
  t5727 = t4772*t855;
  t5729 = t5716 + t5727;
  t5732 = t119*t5729*t1153;
  t5739 = t5738*t1319;
  t5745 = t5732 + t5739;
  t5754 = t119*t5738;
  t5757 = -1.*t5729*t1153*t1319;
  t5761 = t5754 + t5757;
  t5790 = -1.*t225*t5596;
  t5791 = t5790 + t5736;
  t5783 = -1.*t5596*t855;
  t5785 = t5716 + t5783;
  t5789 = t119*t5785*t1153;
  t5794 = t5791*t1319;
  t5796 = t5789 + t5794;
  t5805 = t119*t5791;
  t5811 = -1.*t5785*t1153*t1319;
  t5812 = t5805 + t5811;
  t5861 = t1135*t302*t225*t314;
  t5881 = -1.*t1135*t314*t480*t855;
  t5883 = t5861 + t5881;
  t5842 = -1.*t209*t314*t401;
  t5843 = t1135*t225*t314*t480;
  t5847 = t1135*t302*t314*t855;
  t5848 = t5843 + t5847;
  t5850 = t5848*t1153;
  t5856 = t5842 + t5850;
  t5860 = t119*t5856;
  t5892 = t5883*t1319;
  t5895 = t5860 + t5892;
  t5906 = t119*t5883;
  t5907 = -1.*t5856*t1319;
  t5908 = t5906 + t5907;
  t5930 = t1135*t209*t314;
  t5936 = t5682*t1153;
  t5938 = t5930 + t5936;
  t5941 = -1.*t119*t5938;
  t5942 = -1.*t5785*t1319;
  t5944 = t5941 + t5942;
  t5956 = t119*t5785;
  t5957 = -1.*t5938*t1319;
  t5964 = t5956 + t5957;
  t5965 = t1293*t5964;
  t5986 = t119*t5938;
  t5987 = t5785*t1319;
  t5988 = t5986 + t5987;
  t5973 = -1.*t125*t5964;
  t5989 = -1.*t125*t5988;
  t5990 = t5989 + t5965;
  t5992 = t1493*t5990;
  t5505 = t1293*t5337;
  t5511 = t125*t5234;
  t5530 = t5505 + t5511;
  t6037 = t1135*t225*t480;
  t6039 = t1135*t302*t855;
  t6040 = t6037 + t6039;
  t6041 = t209*t6040;
  t6042 = t401*t1153;
  t6044 = t6041 + t6042;
  t6077 = -1.*t1135*t225*t480;
  t6080 = -1.*t1135*t302*t855;
  t6081 = t6077 + t6080;
  t6068 = t1135*t302*t225;
  t6069 = -1.*t1135*t480*t855;
  t6070 = t6068 + t6069;
  t6074 = t119*t6070*t1153;
  t6082 = t6081*t1319;
  t6083 = t6074 + t6082;
  t6090 = t119*t6081;
  t6097 = -1.*t6070*t1153*t1319;
  t6100 = t6090 + t6097;
  t6084 = -1.*t125*t6083;
  t6102 = t1293*t6100;
  t6103 = t6084 + t6102;
  t6104 = -1.*t62*t6103;
  t6105 = t1293*t6083;
  t6107 = t125*t6100;
  t6113 = t6105 + t6107;
  t6114 = t1493*t6113;
  t6117 = t6104 + t6114;
  t6130 = -1.*t209*t401;
  t6132 = t6040*t1153;
  t6135 = t6130 + t6132;
  t6136 = -1.*t119*t6135;
  t6137 = -1.*t6070*t1319;
  t6138 = t6136 + t6137;
  t6142 = t119*t6070;
  t6147 = -1.*t6135*t1319;
  t6151 = t6142 + t6147;
  t6152 = t1293*t6151;
  t6172 = t119*t6135;
  t6179 = t6070*t1319;
  t6185 = t6172 + t6179;
  t6162 = -1.*t125*t6151;
  t6186 = -1.*t125*t6185;
  t6189 = t6186 + t6152;
  t6190 = t1493*t6189;
  t6247 = -1.*t302*t225*t401;
  t6248 = t401*t480*t855;
  t6253 = t6247 + t6248;
  t6233 = -1.*t1135*t209;
  t6234 = -1.*t225*t401*t480;
  t6236 = -1.*t302*t401*t855;
  t6240 = t6234 + t6236;
  t6241 = t6240*t1153;
  t6242 = t6233 + t6241;
  t6244 = t119*t6242;
  t6254 = t6253*t1319;
  t6257 = t6244 + t6254;
  t6264 = t119*t6253;
  t6265 = -1.*t6242*t1319;
  t6268 = t6264 + t6265;
  t1287 = -1.*t119*t125*t1210;
  t1420 = -1.*t1293*t1210*t1319;
  t1438 = t1287 + t1420;
  t1538 = t1293*t119*t1210;
  t1732 = -1.*t125*t1210*t1319;
  t1823 = t1538 + t1732;
  t3089 = -1.*t125*t3004;
  t3325 = t1293*t3255;
  t3406 = t3089 + t3325;
  t3453 = t1293*t3004;
  t3459 = t125*t3255;
  t3525 = t3453 + t3459;
  t4047 = -1.*t125*t4037;
  t4186 = t1293*t4163;
  t4201 = t4047 + t4186;
  t4230 = t1293*t4037;
  t4233 = t125*t4163;
  t4238 = t4230 + t4233;
  t4546 = -1.*t125*t4539;
  t4626 = t1293*t4604;
  t4670 = t4546 + t4626;
  t4688 = t1293*t4539;
  t4691 = t125*t4604;
  t4715 = t4688 + t4691;
  t4976 = -1.*t125*t4962;
  t5048 = t1293*t5030;
  t5049 = t4976 + t5048;
  t5118 = t1293*t4962;
  t5119 = t125*t5030;
  t5134 = t5118 + t5119;
  t5214 = t125*t5213;
  t5243 = t5214 + t5241;
  t5245 = t1293*t5213;
  t5257 = t5245 + t5247;
  t5431 = -1.*t1293*t5337;
  t5449 = t5431 + t5247;
  t6383 = t62*t5413;
  t5694 = -1.*t119*t125*t5691;
  t5695 = -1.*t1293*t5691*t1319;
  t5696 = t5694 + t5695;
  t5699 = t1293*t119*t5691;
  t5702 = -1.*t125*t5691*t1319;
  t5703 = t5699 + t5702;
  t5751 = -1.*t125*t5745;
  t5763 = t1293*t5761;
  t5765 = t5751 + t5763;
  t5768 = t1293*t5745;
  t5769 = t125*t5761;
  t5774 = t5768 + t5769;
  t5800 = -1.*t125*t5796;
  t5813 = t1293*t5812;
  t5821 = t5800 + t5813;
  t5826 = t1293*t5796;
  t5827 = t125*t5812;
  t5830 = t5826 + t5827;
  t5903 = -1.*t125*t5895;
  t5910 = t1293*t5908;
  t5911 = t5903 + t5910;
  t5916 = t1293*t5895;
  t5917 = t125*t5908;
  t5918 = t5916 + t5917;
  t5946 = t125*t5944;
  t5967 = t5946 + t5965;
  t5970 = t1293*t5944;
  t5975 = t5970 + t5973;
  t6001 = -1.*t1293*t5988;
  t6002 = t6001 + t5973;
  t6462 = t62*t5990;
  t6012 = t1293*t5988;
  t6014 = t125*t5964;
  t6017 = t6012 + t6014;
  t5544 = t62*t5530;
  t5545 = t5430 + t5544;
  t6049 = -1.*t119*t125*t6044;
  t6050 = -1.*t1293*t6044*t1319;
  t6053 = t6049 + t6050;
  t6055 = t1293*t119*t6044;
  t6057 = -1.*t125*t6044*t1319;
  t6060 = t6055 + t6057;
  t6553 = t1493*t6103;
  t6556 = t62*t6113;
  t6557 = t6553 + t6556;
  t6139 = t125*t6138;
  t6155 = t6139 + t6152;
  t6161 = t1293*t6138;
  t6163 = t6161 + t6162;
  t6195 = -1.*t1293*t6185;
  t6196 = t6195 + t6162;
  t6571 = t62*t6189;
  t6217 = t1293*t6185;
  t6219 = t125*t6151;
  t6220 = t6217 + t6219;
  t6262 = -1.*t125*t6257;
  t6270 = t1293*t6268;
  t6271 = t6262 + t6270;
  t6278 = t1293*t6257;
  t6281 = t125*t6268;
  t6282 = t6278 + t6281;
  p_output1[0]=(t1493*t5134 - 1.*t5049*t62)*var2[3] + (t1493*t4715 - 1.*t4670*t62)*var2[4] + (t1493*t3525 - 1.*t3406*t62)*var2[5] + (t1493*t4238 - 1.*t4201*t62)*var2[6] + (t1493*t1823 - 1.*t1438*t62)*var2[7] + (t1493*t5243 - 1.*t5257*t62)*var2[8] + (t5430 - 1.*t5449*t62)*var2[9] + t5545*var2[10];
  p_output1[1]=(t1493*t5530 - 1.*t5413*t62)*var2[3] + (t1493*t5918 - 1.*t5911*t62)*var2[4] + (t1493*t5774 - 1.*t5765*t62)*var2[5] + (t1493*t5830 - 1.*t5821*t62)*var2[6] + (t1493*t5703 - 1.*t5696*t62)*var2[7] + (t1493*t5967 - 1.*t5975*t62)*var2[8] + (t5992 - 1.*t6002*t62)*var2[9] + (t5992 + t6017*t62)*var2[10];
  p_output1[2]=(-1.*t62*t6271 + t1493*t6282)*var2[4] + t6117*var2[5] + t6117*var2[6] + (t1493*t6060 - 1.*t6053*t62)*var2[7] + (t1493*t6155 - 1.*t6163*t62)*var2[8] + (t6190 - 1.*t6196*t62)*var2[9] + (t6190 + t62*t6220)*var2[10];
  p_output1[3]=(t1493*t5049 + t5134*t62)*var2[3] + (t1493*t4670 + t4715*t62)*var2[4] + (t1493*t3406 + t3525*t62)*var2[5] + (t1493*t4201 + t4238*t62)*var2[6] + (t1438*t1493 + t1823*t62)*var2[7] + (t1493*t5257 + t5243*t62)*var2[8] + (t1493*t5449 + t6383)*var2[9] + (-1.*t1493*t5530 + t6383)*var2[10];
  p_output1[4]=t5545*var2[3] + (t1493*t5911 + t5918*t62)*var2[4] + (t1493*t5765 + t5774*t62)*var2[5] + (t1493*t5821 + t5830*t62)*var2[6] + (t1493*t5696 + t5703*t62)*var2[7] + (t1493*t5975 + t5967*t62)*var2[8] + (t1493*t6002 + t6462)*var2[9] + (-1.*t1493*t6017 + t6462)*var2[10];
  p_output1[5]=(t1493*t6271 + t62*t6282)*var2[4] + t6557*var2[5] + t6557*var2[6] + (t1493*t6053 + t6060*t62)*var2[7] + (t1493*t6163 + t6155*t62)*var2[8] + (t1493*t6196 + t6571)*var2[9] + (-1.*t1493*t6220 + t6571)*var2[10];
  p_output1[6]=(-1.*t209*t4840 + t5685)*var2[3] + (-1.*t1153*t345*t401 - 1.*t209*t4400)*var2[4] - 1.*t209*t2389*var2[5] - 1.*t209*t3835*var2[6] + t5182*var2[7];
  p_output1[7]=(t1135*t1153*t345 - 1.*t209*t997)*var2[3] + (-1.*t1153*t314*t401 - 1.*t209*t5848)*var2[4] - 1.*t209*t5729*var2[5] - 1.*t209*t5785*var2[6] + t5938*var2[7];
  p_output1[8]=(-1.*t1135*t1153 - 1.*t209*t6240)*var2[4] - 1.*t209*t6070*var2[5] - 1.*t209*t6070*var2[6] + t6135*var2[7];
}



void dR_LeftKneeSpringJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}