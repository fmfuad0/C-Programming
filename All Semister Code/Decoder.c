# include <stdio.h>
# include <string.h>

int main( )
{

    int i;
    /*char s[300]="1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu51PIT'pz'h'{yhklthyr'vm'{ol'Pu{lyuh{pvuhs'I|zpulzz'Thjopul'Jvywvyh{pvu51KLJ'pz'{ol'{yhklthyr'vm'{ol'Kpnp{hs'Lx|pwtlu{'Jvywvyh{pvu5'";*/

char s[1000];
gets(s);
for(i=0;s[i]!='\0';i++){



        printf("%c",s[i]-7);
}
	return 0;
}
