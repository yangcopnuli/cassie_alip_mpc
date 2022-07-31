function RadioChannel = RadioButtonToChannel(RadioButton)
RadioChannel = zeros(16,1);
RadioChannel(1) = RadioButton.LVA;
RadioChannel(2) = RadioButton.LHA;
RadioChannel(3) = RadioButton.RVA;
RadioChannel(4) = RadioButton.RHA;
RadioChannel(5) = RadioButton.S1A;
RadioChannel(6) = RadioButton.S2A;
RadioChannel(7) = RadioButton.LSA;
RadioChannel(8) = RadioButton.RSA;
RadioChannel(9) = RadioButton.SAA;
RadioChannel(10) = RadioButton.SBA;
RadioChannel(11) = RadioButton.SCA;
RadioChannel(12) = RadioButton.SDA;
RadioChannel(13) = RadioButton.SEA;
RadioChannel(14) = RadioButton.SFA;
RadioChannel(15) = RadioButton.SGA;
RadioChannel(16) = RadioButton.SHA;
end