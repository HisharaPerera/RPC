struct inputs{
 int amount;
};
 
program WITHDRAW_PROG{
 version WITHDRAW_VER{
 int READ(inputs)=1;
 }=1;
}=0x23451111;
