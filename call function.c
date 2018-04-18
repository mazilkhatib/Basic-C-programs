
void main()
{
	float vol;
	vol=volume(5.22,6.50,2.33);
	printf("volume=%f\n",vol);
}
float volume(float l,float h,float b)
{
	float v;
	v=l*h*b;
	return(v);
}