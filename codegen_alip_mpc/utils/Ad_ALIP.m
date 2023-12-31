function Ad = Ad_ALIP(m,zH,dt)
%AD_ALIP
%    AD = AD_ALIP(M,ZH,DT)

%    This function was generated by the Symbolic Math Toolbox version 8.4.
%    21-Apr-2022 13:23:57

t2 = 1.0./m;
t3 = sqrt(zH);
t5 = 1.565726668355623e+2;
t4 = 1.0./t3;
t6 = (dt.*t4.*t5)./5.0e+1;
t7 = cosh(t6);
t8 = sinh(t6);
t9 = (m.*t3.*t5.*t8)./5.0e+1;
t10 = t2.*t4.*t5.*t8.*2.039567611666327e-3;
Ad = reshape([t7,0.0,0.0,t9,0.0,t7,-t9,0.0,0.0,-t10,t7,0.0,t10,0.0,0.0,t7],[4,4]);
