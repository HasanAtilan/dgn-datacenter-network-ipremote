//CODED HASAN ATİLAN.
//STRESSER.ME TEAM

#include <stdio.h>
#define kirmizi "\033[0;31m"
#define mavi "\033[0;36m"
#define yesil  "\x1b[92m"
int main(int argc, char **argv[]){
 
char ipayarla[255];
printf("%s  İP Basariyla Calindi !      \n",mavi,kirmizi,yesil,kirmizi,yesil,kirmizi);
printf("%s  Kodlama: HasanAtilan - Stresser.me DEVOPS Team \n",mavi,kirmizi,yesil,kirmizi,yesil,kirmizi);
sprintf(ipayarla,"sed -ie 's/%s/%s/' /etc/sysconfig/network-scripts/ifcfg-ens160",argv[1], argv[2]);
system(ipayarla);
}
