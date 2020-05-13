#include <gui/main_screen/MainView.hpp>

#include "display_values.h"
#include <touchgfx/Color.hpp>

MainView::MainView()
{
    // Support of larger displays for this example
    // is handled by showing a black box in the
    // unused part of the display.
    if (HAL::DISPLAY_WIDTH > backgroundImage.getWidth() ||
            HAL::DISPLAY_HEIGHT > backgroundImage.getHeight())
    {
        backgroundBox.setVisible(true);
    }
}

void MainView::setupScreen()
{
}

void MainView::tearDownScreen()
{
}

static colortype getBlackColor()
{
	colortype black_color = touchgfx::Color::getColorFrom24BitRGB(0,0,0);
}

static int color_index = 0;

static colortype getColorFromRevLimit()
{

	color_index ++;
	if(color_index >= 3)
	{
		color_index = 0;
	}

	colortype red_color = touchgfx::Color::getColorFrom24BitRGB(255,0,0);
	colortype green_color = touchgfx::Color::getColorFrom24BitRGB(0,255,0);
	colortype white_color = touchgfx::Color::getColorFrom24BitRGB(255,255,255);

	colortype color_to_set;

	if(color_index == 0)
	{
		color_to_set = red_color;
	}
	if(color_index == 1)
	{
		color_to_set = green_color;
	}
	if(color_index == 2)
	{
		color_to_set = white_color;
	}

	return color_to_set;
}

void MainView::updateVal(uint8_t* newValue)
{

	static bool background_is_black = false;
	display_values* values = (display_values*) newValue;

	bool on_rev_limiter = values->rpm >= 9000;
	if(on_rev_limiter)
	{
		background_is_black = false;
		backgroundBox.setColor(getColorFromRevLimit());
		backgroundBox.invalidate();
	}
	else if(!background_is_black){
		backgroundBox.setColor(getBlackColor());
		backgroundBox.invalidate();
		background_is_black = true;
	}


	RPMProgressBar.setValue(values->rpm);
	RPMProgressBar.invalidate();

	Unicode::snprintf(RPMValueBuffer, RPMVALUE_SIZE, "%d", values->rpm);
	RPMValue.invalidate();

	Unicode::snprintf(MAPValueBuffer, MAPVALUE_SIZE, "%d", values->map);
	MAPValue.invalidate();

	Unicode::snprintf(CLTValueBuffer, CLTVALUE_SIZE, "%d", values->clt);
	CLTValue.invalidate();

	Unicode::snprintfFloat(LambdaValueBuffer, LAMBDAVALUE_SIZE, "%.2f",values->lambda);
	LambdaValue.invalidate();

	Unicode::snprintfFloat(TrgtValueBuffer, TRGTVALUE_SIZE, "%.2f",values->lambda_trgt);
	TrgtValue.invalidate();

	Unicode::snprintf(KMHValueBuffer, KMHVALUE_SIZE, "%d",values->vehicle_spd);
	KMHValue.invalidate();

	Unicode::snprintfFloat(OILPressureValueBuffer, OILPRESSUREVALUE_SIZE, "%.1f",values->oil_press);
	OILPressureValue.invalidate();

	Unicode::snprintf(OILTempValueBuffer, OILTEMPVALUE_SIZE, "%d",values->oil_tmp);
	OILTempValue.invalidate();

	Unicode::snprintf(IATValueBuffer, IATVALUE_SIZE, "%d",values->iat);
	IATValue.invalidate();

	Unicode::snprintf(EGTValueBuffer, EGTVALUE_SIZE, "%d",values->egt);
	EGTValue.invalidate();

	TPSProgress.setValue(values->tps);
	RPMProgressBar.invalidate();

	Unicode::snprintfFloat(BatteryVoltageBuffer, BATTERYVOLTAGE_SIZE, "%.2f",values->batt_v);
	BatteryVoltage.invalidate();
}
