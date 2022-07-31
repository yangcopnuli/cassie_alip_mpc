function [output1] = dJp_RightToeBottomFront(var1,var2)
    if coder.target('MATLAB')
        [output1] = dJp_RightToeBottomFront_mex(var1,var2);
    else
        coder.cinclude('dJp_RightToeBottomFront_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('dJp_RightToeBottomFront_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) ,coder.rref(var2) );
    end
end
