#include "AUXIVA_mask_Online.h"
#define MAKE_FILE		1			//option 1 : wav ���� (IVA��� + �Է¿���)		2: strout ���(IVA���)		3: strout ��� (IVA��� + �Է� ����)
#define SAVE_OPT		2			//option 1 : Target Output�� ����				2: Target �� Noise Output ��� ����
class ProcBuffers
{
private:
	int ch_save;
	int BuffCnt;
	int isNew16k;
	double** InitCond, * XX_LP, * XX, ** xx_lp, ** x;

	double** out_buff;
	short** IVA_out;
	double** input_temp;
	double** output;

	double** in_buff;
	short** origin_out;
	double** input;

	double* Mask;
	double** mic_array;


public:
	ProcBuffers();
	~ProcBuffers();
	int Process(double **input, int Nframe, double **output);
};