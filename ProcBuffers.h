#include "AUXIVA_mask_Online.h"
#define MAKE_FILE		1			//option 1 : wav ���� (IVA��� + �Է¿���)		2: strout ���(IVA���)		3: strout ��� (IVA��� + �Է� ����)
#define SAVE_OPT		2			//option 1 : Target Output�� ����				2: Target �� Noise Output ��� ����
class ProcBuffers
{
private:
	

public:
	ProcBuffers();
	~ProcBuffers();
	static int Process(double **input, int Nframe, double **output);
};