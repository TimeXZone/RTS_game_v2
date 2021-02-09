#pragma once
#include<string>
#include<vector>
using namespace std;
class  vir_bio_class
{
public:
	vir_bio_class();
	~vir_bio_class();
	int	id;//病毒序号
	string name;//病毒名
	vector<string> who_can_carry; //病毒携带者
private:
	float time_worsen;//每多久进行一次恶化判定,单位s/可能与物理帧进行交互
	float death_percent;//死亡率
	float heavy_percent;//重症率
	float infect_percent;//感染率
	float infect_radius;//感染半径
public:
	void set_time_worsen(float num);							//设置各个private值
	void set_death_percent(float num);
	void set_heavy_percent(float num);
	void set_infect_percent(float num);
	void set_infect_radius(float num);
	float show_time_worsen();									//显示各个private值
	float show_death_percent();
	float show_heavy_percent();
	float show_infect_percent();
	float show_infect_radius();
};
