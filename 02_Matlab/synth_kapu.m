bdclose all;
clear all;
try
delete(findall(0));
catch
end
% 25 bit
% kapu, STOP
v_st=[1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, ];
st_dt=[0, 460, 1006, 467, 994, 462, 1007, 468, 528, 922, 1024, 455, 1021, 450, 1014, 451, 1022, 452, 1013, 449, 1021, 455, 1015, 449, 1024, 446, 1024, 457, 1013, 451, 1022, 450, 537, 922, 541, 925, 1029, 440, 1024, 451, 1022, 447, 1019, 452, 1026, 441, 543, 926, 1027, 448, ];

% kapu OPEN
v_op=[1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, ];
op_dt=[0, 448, 1019, 454, 1012, 454, 1014, 454, 536, 936, 1015, 455, 1019, 450, 1018, 449, 1024, 448, 1022, 452, 1016, 478, 990, 452, 1021, 448, 1024, 450, 1018, 452, 1020, 450, 535, 928, 542, 925, 1029, 443, 1026, 441, 1030, 440, 1036, 437, 1025, 444, 1021, 448, 535, 935, ];

% kapu PERS
v_p=[1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, ];
p_dt=[0, 462, 1011, 460, 1006, 464, 1007, 473, 514, 943, 1011, 468, 1002, 467, 1002, 468, 998, 464, 1013, 461, 1004, 461, 1014, 461, 1009, 464, 999, 459, 1013, 458, 1016, 461, 521, 938, 526, 944, 1010, 454, 1020, 453, 1018, 453, 1016, 456, 1014, 455, 530, 932, 538, 929, ];


% eval
figure();
subplot(3,1,1);
lDigVctr = fCalcDigitData(st_dt);
AbsVal = fCalcUint32(lDigVctr);
fprintf('const uint32_t u32GateStop = 0x%x;\n', AbsVal);
stairs(lDigVctr, 'LineWidth',2);
legend('Kapu STOP');
grid on;

subplot(3,1,2);
lDigVctr = fCalcDigitData(op_dt);
AbsVal = fCalcUint32(lDigVctr);
fprintf('const uint32_t u32GateOpen = 0x%x;\n', AbsVal);
stairs(lDigVctr, 'LineWidth',2);
legend('Kapu OPEN');
grid on;

subplot(3,1,3);
lDigVctr = fCalcDigitData(p_dt);
AbsVal = fCalcUint32(lDigVctr);
fprintf('const uint32_t u32GatePers = 0x%x;\n', AbsVal);
stairs(lDigVctr, 'LineWidth',2);
legend('Kapu PERS');
grid on;


function fOut = fCalcDigitData(inDtVect)
A=1;
fOut = [];

C = 2;
while C <= 50
    if  (inDtVect(C) > 600)
        fOut(A) = 1; %#ok<*AGROW>
    else
        fOut(A) = 0;
    end
    A = A+1;
    C = C+2;
end

end


function aOut = fCalcUint32(inVect)

aOut = 0;
C = 1;
while C <= length(inVect)
    LocVal = pow2(C-1);
    
    if (1 == inVect(C))
        aOut = aOut + LocVal;
    else        
    end  

    C = C+1;
end
end
