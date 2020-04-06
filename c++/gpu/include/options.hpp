#ifndef OPTS_INCLUDED
#define OPTS_INCLUDED
class options 
{
	public:
		//Learning rate
		float alpha = 0.001;
		float beta = 0.95;
		float decay = 0.0001;
		int epochs = 3;
		int n_x = 784;
		int n_h1 = 600;
		int n_h2 = 500;
		int n_o = 10;
		int batch_size = 300;
		int batches = 200;

};
#endif