MAIN: MOV P1, #55H 
ACALL DELAY1
MOV P1, #0AAH
ACALL DELAY2
SJMP MAIN
DELAY1: Mov TMOD, #10H 
MOV TCON, #00H 
MOV TH1, #01FH 
MOV TL1, #0CEH 
SETB TR1
HERE: JNB TF1, HERE 
CLR TR1 
CLR TF1
RET
DELAY2: Mov TMOD, #00H 
MOV TCON, #00H
MOV TH0, #01FH
MOV TL0, #1EH
SETB TR0
HERE1: JNB TF0, HERE1 
CLR TR0
CLR TF0
RET
END