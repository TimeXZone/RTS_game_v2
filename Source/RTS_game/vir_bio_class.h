#pragma once
#include<string>
#include<vector>
using namespace std;
class  vir_bio_class
{
public:
	vir_bio_class();
	~vir_bio_class();
	int	id;//�������
	string name;//������
	vector<string> who_can_carry; //����Я����
private:
	float time_worsen;//ÿ��ý���һ�ζ��ж�,��λs/����������֡���н���
	float death_percent;//������
	float heavy_percent;//��֢��
	float infect_percent;//��Ⱦ��
	float infect_radius;//��Ⱦ�뾶
public:
	void set_time_worsen(float num);							//���ø���privateֵ
	void set_death_percent(float num);
	void set_heavy_percent(float num);
	void set_infect_percent(float num);
	void set_infect_radius(float num);
	float show_time_worsen();									//��ʾ����privateֵ
	float show_death_percent();
	float show_heavy_percent();
	float show_infect_percent();
	float show_infect_radius();
};
