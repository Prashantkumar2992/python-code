__kernel void pi_calc(__global double *sum, int N)
{
	int myid = get_global_id(0);
	double x, step;
	if(myid<N)
	{
	    step = 1.0/(double)N;
        x = (myid)*step;
        sum[myid] = 4.0/(1.0+x*x);
    }
}
