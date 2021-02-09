#include "vir_bio_class.h"

void vir_bio_class::set_time_worsen(float num)
{
	time_worsen = num;
}

void vir_bio_class::set_death_percent(float num)
{
	death_percent = num;
}

void vir_bio_class::set_heavy_percent(float num)
{
	heavy_percent = num;
}

void vir_bio_class::set_infect_percent(float num)
{
	infect_percent = num;
}

void vir_bio_class::set_infect_radius(float num)
{
	infect_radius = num;
}

float vir_bio_class::show_time_worsen()
{
	return time_worsen;
}

float vir_bio_class::show_death_percent()
{
	return death_percent;
}

float vir_bio_class::show_heavy_percent()
{
	return heavy_percent;
}

float vir_bio_class::show_infect_percent()
{
	return infect_percent;
}

float vir_bio_class::show_infect_radius()
{
	return infect_radius;
}

vir_bio_class::vir_bio_class()
{

}

vir_bio_class::~vir_bio_class()
{
}
