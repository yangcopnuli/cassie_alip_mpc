/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftToeBottom_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t176;
  double t220;
  double t244;
  double t196;
  double t222;
  double t225;
  double t159;
  double t246;
  double t250;
  double t273;
  double t341;
  double t226;
  double t282;
  double t302;
  double t148;
  double t342;
  double t360;
  double t365;
  double t395;
  double t313;
  double t372;
  double t378;
  double t122;
  double t408;
  double t410;
  double t412;
  double t108;
  double t445;
  double t452;
  double t454;
  double t391;
  double t420;
  double t433;
  double t460;
  double t489;
  double t441;
  double t465;
  double t474;
  double t106;
  double t491;
  double t492;
  double t504;
  double t506;
  double t507;
  double t522;
  double t565;
  double t477;
  double t542;
  double t543;
  double t101;
  double t567;
  double t582;
  double t585;
  double t13;
  double t633;
  double t786;
  double t611;
  double t705;
  double t799;
  double t802;
  double t814;
  double t816;
  double t629;
  double t901;
  double t904;
  double t907;
  double t879;
  double t931;
  double t937;
  double t956;
  double t958;
  double t943;
  double t963;
  double t964;
  double t980;
  double t990;
  double t995;
  double t1015;
  double t1030;
  double t1038;
  double t974;
  double t1002;
  double t1006;
  double t1009;
  double t1041;
  double t1044;
  double t1053;
  double t1055;
  double t1057;
  double t1063;
  double t1069;
  double t1045;
  double t1091;
  double t1096;
  double t1115;
  double t1125;
  double t1126;
  double t556;
  double t588;
  double t590;
  double t651;
  double t671;
  double t697;
  double t716;
  double t723;
  double t748;
  double t758;
  double t763;
  double t810;
  double t817;
  double t822;
  double t828;
  double t831;
  double t833;
  double t834;
  double t839;
  double t840;
  double t842;
  double t846;
  double t1109;
  double t1127;
  double t1138;
  double t1156;
  double t1158;
  double t1160;
  double t1166;
  double t1167;
  double t1173;
  double t1187;
  double t1196;
  double t1322;
  double t1323;
  double t1326;
  double t1420;
  double t1436;
  double t1402;
  double t1409;
  double t1437;
  double t1449;
  double t1456;
  double t1457;
  double t1471;
  double t1480;
  double t1488;
  double t1490;
  double t1368;
  double t1379;
  double t1412;
  double t1419;
  double t1469;
  double t1500;
  double t1507;
  double t1518;
  double t1519;
  double t1534;
  double t1536;
  double t1557;
  double t1343;
  double t1353;
  double t1389;
  double t1394;
  double t1514;
  double t1560;
  double t1562;
  double t1576;
  double t1581;
  double t1582;
  double t1589;
  double t1592;
  double t1337;
  double t1339;
  double t1607;
  double t1612;
  double t1617;
  double t1624;
  double t1625;
  double t1363;
  double t1364;
  double t1564;
  double t1598;
  double t1599;
  double t1328;
  double t1329;
  double t1341;
  double t1600;
  double t1601;
  double t1627;
  double t1632;
  double t1637;
  double t1638;
  double t1642;
  double t1643;
  double t1647;
  double t1655;
  double t1657;
  double t1659;
  double t1666;
  double t1677;
  double t1681;
  double t1688;
  double t1307;
  double t1319;
  double t1320;
  double t1330;
  double t1331;
  double t1635;
  double t1692;
  double t1696;
  double t1699;
  double t1710;
  double t1714;
  double t1716;
  double t1725;
  double t1739;
  double t1753;
  double t1761;
  double t1765;
  double t1781;
  double t1782;
  double t1785;
  double t1697;
  double t1734;
  double t1737;
  double t1779;
  double t1792;
  double t1799;
  double t1803;
  double t1804;
  double t1813;
  double t1279;
  double t1294;
  double t1298;
  double t1738;
  double t1825;
  double t1843;
  double t1869;
  double t1882;
  double t1899;
  double t1927;
  double t1948;
  double t1973;
  double t1994;
  double t2013;
  double t2023;
  double t2139;
  double t2149;
  t176 = Cos(var1[12]);
  t220 = Sin(var1[12]);
  t244 = Cos(var1[11]);
  t196 = 0.642788*t176;
  t222 = -0.766044*t220;
  t225 = t196 + t222;
  t159 = Sin(var1[11]);
  t246 = 0.766044*t176;
  t250 = 0.642788*t220;
  t273 = t246 + t250;
  t341 = Cos(var1[10]);
  t226 = t159*t225;
  t282 = t244*t273;
  t302 = 0. + t226 + t282;
  t148 = Sin(var1[10]);
  t342 = t244*t225;
  t360 = -1.*t159*t273;
  t365 = 0. + t342 + t360;
  t395 = Cos(var1[9]);
  t313 = -1.*t148*t302;
  t372 = t341*t365;
  t378 = 0. + t313 + t372;
  t122 = Sin(var1[9]);
  t408 = t341*t302;
  t410 = t148*t365;
  t412 = 0. + t408 + t410;
  t108 = Cos(var1[8]);
  t445 = t395*t378;
  t452 = -1.*t122*t412;
  t454 = 0. + t445 + t452;
  t391 = t122*t378;
  t420 = t395*t412;
  t433 = 0. + t391 + t420;
  t460 = Sin(var1[8]);
  t489 = Cos(var1[6]);
  t441 = t108*t433;
  t465 = t454*t460;
  t474 = 0. + t441 + t465;
  t106 = Sin(var1[6]);
  t491 = Sin(var1[7]);
  t492 = t108*t454;
  t504 = -1.*t433*t460;
  t506 = 0. + t492 + t504;
  t507 = t491*t506;
  t522 = 0. + t507;
  t565 = Sin(var1[5]);
  t477 = -1.*t106*t474;
  t542 = t489*t522;
  t543 = 0. + t477 + t542;
  t101 = Cos(var1[5]);
  t567 = t489*t474;
  t582 = t106*t522;
  t585 = 0. + t567 + t582;
  t13 = Sin(var1[3]);
  t633 = Cos(var1[7]);
  t786 = 0. + t633;
  t611 = Cos(var1[3]);
  t705 = Sin(var1[4]);
  t799 = t489*t786;
  t802 = 0. + t799;
  t814 = t786*t106;
  t816 = 0. + t814;
  t629 = Cos(var1[4]);
  t901 = -0.766044*t176;
  t904 = -0.642788*t220;
  t907 = t901 + t904;
  t879 = -1.*t159*t225;
  t931 = t244*t907;
  t937 = 0. + t879 + t931;
  t956 = t159*t907;
  t958 = 0. + t342 + t956;
  t943 = t148*t937;
  t963 = t341*t958;
  t964 = 0. + t943 + t963;
  t980 = t341*t937;
  t990 = -1.*t148*t958;
  t995 = 0. + t980 + t990;
  t1015 = -1.*t122*t964;
  t1030 = t395*t995;
  t1038 = 0. + t1015 + t1030;
  t974 = t395*t964;
  t1002 = t122*t995;
  t1006 = 0. + t974 + t1002;
  t1009 = t108*t1006;
  t1041 = t1038*t460;
  t1044 = 0. + t1009 + t1041;
  t1053 = t108*t1038;
  t1055 = -1.*t1006*t460;
  t1057 = 0. + t1053 + t1055;
  t1063 = t491*t1057;
  t1069 = 0. + t1063;
  t1045 = -1.*t106*t1044;
  t1091 = t489*t1069;
  t1096 = 0. + t1045 + t1091;
  t1115 = t489*t1044;
  t1125 = t106*t1069;
  t1126 = 0. + t1115 + t1125;
  t556 = t101*t543;
  t588 = -1.*t565*t585;
  t590 = 0. + t556 + t588;
  t651 = t633*t506;
  t671 = 0. + t651;
  t697 = t629*t671;
  t716 = t565*t543;
  t723 = t101*t585;
  t748 = 0. + t716 + t723;
  t758 = t705*t748;
  t763 = 0. + t697 + t758;
  t810 = t101*t802;
  t817 = -1.*t565*t816;
  t822 = 0. + t810 + t817;
  t828 = t802*t565;
  t831 = t101*t816;
  t833 = 0. + t828 + t831;
  t834 = t705*t833;
  t839 = -1.*t491;
  t840 = 0. + t839;
  t842 = t629*t840;
  t846 = 0. + t834 + t842;
  t1109 = t101*t1096;
  t1127 = -1.*t565*t1126;
  t1138 = 0. + t1109 + t1127;
  t1156 = t633*t1057;
  t1158 = 0. + t1156;
  t1160 = t629*t1158;
  t1166 = t565*t1096;
  t1167 = t101*t1126;
  t1173 = 0. + t1166 + t1167;
  t1187 = t705*t1173;
  t1196 = 0. + t1160 + t1187;
  t1322 = -1.*t705*t1158;
  t1323 = t629*t1173;
  t1326 = 0. + t1322 + t1323;
  t1420 = -1.*t176;
  t1436 = 1. + t1420;
  t1402 = -1.*t244;
  t1409 = 1. + t1402;
  t1437 = -0.05315*t1436;
  t1449 = -0.00095*t176;
  t1456 = 0.01770000000000005*t220;
  t1457 = 0. + t1437 + t1449 + t1456;
  t1471 = -1.03354*t1436;
  t1480 = -1.05124*t176;
  t1488 = 0.0522*t220;
  t1490 = 0. + t1471 + t1480 + t1488;
  t1368 = -1.*t341;
  t1379 = 1. + t1368;
  t1412 = -0.62554*t1409;
  t1419 = 0.01315*t159;
  t1469 = t159*t1457;
  t1500 = t244*t1490;
  t1507 = 0. + t1412 + t1419 + t1469 + t1500;
  t1518 = -0.01315*t1409;
  t1519 = -0.62554*t159;
  t1534 = t244*t1457;
  t1536 = -1.*t159*t1490;
  t1557 = 0. + t1518 + t1519 + t1534 + t1536;
  t1343 = -1.*t395;
  t1353 = 1. + t1343;
  t1389 = -0.03315*t1379;
  t1394 = -0.19074*t148;
  t1514 = -1.*t148*t1507;
  t1560 = t341*t1557;
  t1562 = 0. + t1389 + t1394 + t1514 + t1560;
  t1576 = -0.19074*t1379;
  t1581 = 0.03315*t148;
  t1582 = t341*t1507;
  t1589 = t148*t1557;
  t1592 = 0. + t1576 + t1581 + t1582 + t1589;
  t1337 = -1.*t108;
  t1339 = 1. + t1337;
  t1607 = -0.08055*t1353;
  t1612 = -0.13004*t122;
  t1617 = t395*t1562;
  t1624 = -1.*t122*t1592;
  t1625 = 0. + t1607 + t1612 + t1617 + t1624;
  t1363 = -0.13004*t1353;
  t1364 = 0.08055*t122;
  t1564 = t122*t1562;
  t1598 = t395*t1592;
  t1599 = 0. + t1363 + t1364 + t1564 + t1598;
  t1328 = -1.*t489;
  t1329 = 1. + t1328;
  t1341 = -0.01004*t1339;
  t1600 = t108*t1599;
  t1601 = 0.08055*t460;
  t1627 = t1625*t460;
  t1632 = 0. + t1341 + t1600 + t1601 + t1627;
  t1637 = -1.*t633;
  t1638 = 1. + t1637;
  t1642 = 0.135*t1638;
  t1643 = 0.1305*t633;
  t1647 = 0.08055*t491;
  t1655 = -0.08055*t1339;
  t1657 = t108*t1625;
  t1659 = -0.01004*t460;
  t1666 = -1.*t1599*t460;
  t1677 = 0. + t1655 + t1657 + t1659 + t1666;
  t1681 = t491*t1677;
  t1688 = 0. + t1642 + t1643 + t1647 + t1681;
  t1307 = t629*t833;
  t1319 = -1.*t705*t840;
  t1320 = 0. + t1307 + t1319;
  t1330 = 0.135*t1329;
  t1331 = 0.07996*t106;
  t1635 = -1.*t106*t1632;
  t1692 = t489*t1688;
  t1696 = 0. + t1330 + t1331 + t1635 + t1692;
  t1699 = 0.07996*t1329;
  t1710 = -0.135*t106;
  t1714 = t489*t1632;
  t1716 = t106*t1688;
  t1725 = 0. + t1699 + t1710 + t1714 + t1716;
  t1739 = -0.08055*t1638;
  t1753 = 0.004500000000000004*t491;
  t1761 = t633*t1677;
  t1765 = 0. + t1739 + t1753 + t1761;
  t1781 = t565*t1696;
  t1782 = t101*t1725;
  t1785 = 0. + t1781 + t1782;
  t1697 = t101*t1696;
  t1734 = -1.*t565*t1725;
  t1737 = 0. + t1697 + t1734;
  t1779 = -1.*t705*t1765;
  t1792 = t629*t1785;
  t1799 = 0. + t1779 + t1792;
  t1803 = t629*t1765;
  t1804 = t705*t1785;
  t1813 = 0. + t1803 + t1804;
  t1279 = -1.*t705*t671;
  t1294 = t629*t748;
  t1298 = 0. + t1279 + t1294;
  t1738 = -1.*t822*t1737;
  t1825 = t1138*t1737;
  t1843 = -1.*t1138*t1737;
  t1869 = t1737*t590;
  t1882 = t822*t1737;
  t1899 = -1.*t1737*t590;
  t1927 = -1.*t840*t1765;
  t1948 = t1158*t1765;
  t1973 = -1.*t1158*t1765;
  t1994 = t1765*t671;
  t2013 = t840*t1765;
  t2023 = -1.*t1765*t671;
  t2139 = -1.*t1044*t1632;
  t2149 = t1632*t474;
  p_output1[0]=0. - 1.*t13*t590 + t611*t763;
  p_output1[1]=0. - 1.*t13*t822 + t611*t846;
  p_output1[2]=0. - 1.*t1138*t13 + t1196*t611;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t590*t611 + t13*t763;
  p_output1[7]=0. + t611*t822 + t13*t846;
  p_output1[8]=0. + t1196*t13 + t1138*t611;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1298;
  p_output1[13]=t1320;
  p_output1[14]=t1326;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1320*(t1326*t1799 + t1196*t1813 + t1825) + t1326*(t1738 - 1.*t1320*t1799 - 1.*t1813*t846);
  p_output1[19]=t1298*(-1.*t1326*t1799 - 1.*t1196*t1813 + t1843) + t1326*(t1298*t1799 + t1869 + t1813*t763);
  p_output1[20]=t1320*(-1.*t1298*t1799 + t1899 - 1.*t1813*t763) + t1298*(t1320*t1799 + t1882 + t1813*t846);
  p_output1[21]=t1298;
  p_output1[22]=t1320;
  p_output1[23]=t1326;
  p_output1[24]=(t1173*t1785 + t1825 + t1948)*t822 + t1138*(t1738 + t1927 - 1.*t1785*t833);
  p_output1[25]=(-1.*t1173*t1785 + t1843 + t1973)*t590 + t1138*(t1869 + t1994 + t1785*t748);
  p_output1[26]=(t1899 + t2023 - 1.*t1785*t748)*t822 + t590*(t1882 + t2013 + t1785*t833);
  p_output1[27]=t590;
  p_output1[28]=t822;
  p_output1[29]=t1138;
  p_output1[30]=t1158*(t1927 - 1.*t1696*t802 - 1.*t1725*t816) + (t1096*t1696 + t1126*t1725 + t1948)*t840;
  p_output1[31]=t1158*(t1994 + t1696*t543 + t1725*t585) + (-1.*t1096*t1696 - 1.*t1126*t1725 + t1973)*t671;
  p_output1[32]=t671*(t2013 + t1696*t802 + t1725*t816) + (t2023 - 1.*t1696*t543 - 1.*t1725*t585)*t840;
  p_output1[33]=t671;
  p_output1[34]=t840;
  p_output1[35]=t1158;
  p_output1[36]=-0.135*t474 + 0.07996*t522 + t1158*(0. + t1927 - 1.*t1688*t786) + (t1044*t1632 + t1069*t1688 + t1948)*t840;
  p_output1[37]=0. + t1158*(t1994 + t2149 + t1688*t522) + (-1.*t1069*t1688 + t1973 + t2139)*t671 + 0.07996*t786;
  p_output1[38]=-0.135*t1044 + 0.07996*t1069 + t671*(0. + t2013 + t1688*t786) + (t2023 - 1.*t1632*t474 - 1.*t1688*t522)*t840;
  p_output1[39]=t671;
  p_output1[40]=t840;
  p_output1[41]=t1158;
  p_output1[42]=0. - 0.1305*t1044 + 0.135*t506;
  p_output1[43]=0.08055 + (0. - 1.*t1057*t1677 + t2139)*t474 + t1044*(0. + t2149 + t1677*t506);
  p_output1[44]=0. + 0.135*t1057 + 0.1305*t474;
  p_output1[45]=t474;
  p_output1[46]=0.;
  p_output1[47]=t1044;
  p_output1[48]=0. - 1.*t1006*t1599 - 1.*t1038*t1625 + 0.08055*t433 - 0.01004*t454;
  p_output1[49]=0.;
  p_output1[50]=0. + 0.08055*t1006 - 0.01004*t1038 + t1599*t433 + t1625*t454;
  p_output1[51]=0.;
  p_output1[52]=-1.;
  p_output1[53]=0.;
  p_output1[54]=0. - 0.13004*t378 + 0.08055*t412 - 1.*t1592*t964 - 1.*t1562*t995;
  p_output1[55]=0.;
  p_output1[56]=0. + t1562*t378 + t1592*t412 + 0.08055*t964 - 0.13004*t995;
  p_output1[57]=0.;
  p_output1[58]=-1.;
  p_output1[59]=0.;
  p_output1[60]=0. + 0.03315*t302 - 0.19074*t365 - 1.*t1557*t937 - 1.*t1507*t958;
  p_output1[61]=0.;
  p_output1[62]=0. + t1507*t302 + t1557*t365 - 0.19074*t937 + 0.03315*t958;
  p_output1[63]=0.;
  p_output1[64]=-1.;
  p_output1[65]=0.;
  p_output1[66]=0. - 0.62554*t225 - 1.*t1490*t225 + 0.01315*t273 - 1.*t1457*t907;
  p_output1[67]=0.;
  p_output1[68]=0. + 0.01315*t225 + t1457*t225 + t1490*t273 - 0.62554*t907;
  p_output1[69]=0.;
  p_output1[70]=-1.;
  p_output1[71]=0.;
  p_output1[72]=0.0513648444;
  p_output1[73]=0.;
  p_output1[74]=0.019994554799999786;
  p_output1[75]=0.;
  p_output1[76]=-1.;
  p_output1[77]=0.;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Jb_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}