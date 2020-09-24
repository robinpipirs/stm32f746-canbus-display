#include <gui/main_screen/MainView.hpp>
#include <message_types.h>

#include <touchgfx/Color.hpp>

static int color_index = 0;
static int rev_limit = 9000;

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
	return black_color;
}

static colortype getColorFromRevLimit()
{

	color_index ++;
	if(color_index >= 3)
	{
		color_index = 0;
	}

	colortype red_color = touchgfx::Color::getColorFrom24BitRGB(255,0,0);
	colortype black_color = touchgfx::Color::getColorFrom24BitRGB(0,0,0);
	colortype white_color = touchgfx::Color::getColorFrom24BitRGB(255,255,255);

	colortype color_to_set;

	if(color_index == 0)
	{
		color_to_set = red_color;
	}
	if(color_index == 1)
	{
		color_to_set = black_color;
	}
	if(color_index == 2)
	{
		color_to_set = white_color;
	}

	return color_to_set;
}

void MainView::updateSettings(uint8_t* settings)
{
	settings_message* new_settings = (settings_message*) settings;

	rev_limit = (int)new_settings->rpmLimit;

	RPMProgressBar.setRange(0, (int)(new_settings->rpm8*1000.0f), 0, 0);
	RPMProgressBar.invalidate();

	Unicode::snprintf(rpm1Buffer, RPM1_SIZE, "%d", new_settings->rpm1);
	rpm1.resizeToCurrentText();
	rpm1.invalidate();
	Unicode::snprintf(rpm2Buffer, RPM2_SIZE, "%d", new_settings->rpm2);
	rpm2.resizeToCurrentText();
	rpm2.invalidate();
	Unicode::snprintf(rpm3Buffer, RPM3_SIZE, "%d", new_settings->rpm3);
	rpm3.resizeToCurrentText();
	rpm3.invalidate();
	Unicode::snprintf(rpm4Buffer, RPM4_SIZE, "%d", new_settings->rpm4);
	rpm4.resizeToCurrentText();
	rpm4.invalidate();
	Unicode::snprintf(rpm5Buffer, RPM5_SIZE, "%d", new_settings->rpm5);
	rpm5.resizeToCurrentText();
	rpm5.invalidate();
	Unicode::snprintf(rpm6Buffer, RPM6_SIZE, "%d", new_settings->rpm6);
	rpm6.resizeToCurrentText();
	rpm6.invalidate();
	Unicode::snprintf(rpm7Buffer, RPM7_SIZE, "%d", new_settings->rpm7);
	rpm7.resizeToCurrentText();
	rpm7.invalidate();
	Unicode::snprintf(rpm8Buffer, RPM8_SIZE, "%d", new_settings->rpm8);
	rpm8.resizeToCurrentText();
	rpm8.invalidate();

}

void MainView::updateVal(uint8_t* newValue)
{

	static bool background_is_black = false;
	display_values* values = (display_values*) newValue;

	bool on_rev_limiter = values->rpm >= rev_limit;
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

	Unicode::snprintfFloat(TrgtValueBuffer, TRGTVALUE_SIZE, "%.2f",values->lambdaTarget);
	TrgtValue.invalidate();

	Unicode::snprintfFloat(OilPressureValueBuffer, OILPRESSUREVALUE_SIZE, "%.1f",values->oilPressure);
	OilPressureValue.invalidate();

	Unicode::snprintfFloat(FuelPressureValueBuffer, FUELPRESSUREVALUE_SIZE, "%.1f",values->fuelPressure);
	FuelPressureValue.invalidate();

	Unicode::snprintf(IATValueBuffer, IATVALUE_SIZE, "%d",values->iat);
	IATValue.invalidate();

	TPSProgress.setValue(values->tps);
	RPMProgressBar.invalidate();

	Unicode::snprintfFloat(BatteryVoltageBuffer, BATTERYVOLTAGE_SIZE, "%.2f",values->battVoltage);
	BatteryVoltage.invalidate();
}
