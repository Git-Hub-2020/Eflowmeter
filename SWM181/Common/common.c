void delay(int t)
{
	register int i,j,k;
	for(i=0;i<t;i++)
		for(j=0;j<125;j++)
			for(k=0;k<8;k++);
}

void delay_us(int t)
{
	register int i,j;
	for(i=0;i<t;i++)
		for( j=0;j<24;j++);

}
