#include <gui/main_screen/MainView.hpp>

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

typedef struct {
   int    rpm;
   int    clt;
   int    map;
   float  lambda;
   float  lambda_trgt;
   int	  vehicle_spd;
   int    oil_tmp;
   int    oil_press;
   int    iat;
   int    egt;
   int	  tps;
   int	  batt_v;
} display_values;

void MainView::updateVal(uint8_t* newValue)
{
	display_values* values = (display_values*) newValue;

	RPMProgressBar.setValue(values->rpm);
	RPMProgressBar.invalidate();

	Unicode::snprintf(RPMValueBuffer, RPMVALUE_SIZE, "%d", values->rpm);
	RPMValue.resizeToCurrentText();
	RPMValue.invalidate();

	Unicode::snprintf(KpaValueBuffer, KPAVALUE_SIZE, "%d", values->map);
	KpaValue.resizeToCurrentText();
	KpaValue.invalidate();

	Unicode::snprintf(CltValueBuffer, CLTVALUE_SIZE, "%d", values->clt);
	CltValue.resizeToCurrentText();
	CltValue.invalidate();

	Unicode::snprintfFloat(LambdaValueBuffer, LAMBDAVALUE_SIZE, "%.2f",values->lambda);
	LambdaValue.resizeToCurrentText();
	LambdaValue.invalidate();

	Unicode::snprintfFloat(TrgtValueBuffer, TRGTVALUE_SIZE, "%.2f",values->lambda_trgt);
	TrgtValue.resizeToCurrentText();
	TrgtValue.invalidate();

	Unicode::snprintf(KmhValueBuffer, KMHVALUE_SIZE, "%d",values->vehicle_spd);
	KmhValue.resizeToCurrentText();
	KmhValue.invalidate();

	Unicode::snprintf(OILPressureValueBuffer, OILPRESSUREVALUE_SIZE, "%d",values->oil_press);
	OILPressureValue.resizeToCurrentText();
	OILPressureValue.invalidate();

	Unicode::snprintf(OILTempValueBuffer, OILTEMPVALUE_SIZE, "%d",values->oil_tmp);
	OILTempValue.resizeToCurrentText();
	OILTempValue.invalidate();

	Unicode::snprintf(IATValueBuffer, IATVALUE_SIZE, "%d",values->iat);
	IATValue.resizeToCurrentText();
	IATValue.invalidate();

	Unicode::snprintf(EGTValueBuffer, EGTVALUE_SIZE, "%d",values->egt);
	EGTValue.resizeToCurrentText();
	EGTValue.invalidate();

	TPSProgress.setValue(values->tps);
	RPMProgressBar.invalidate();

	Unicode::snprintfFloat(BatteryVoltageBuffer, BATTERYVOLTAGE_SIZE, "%.2f",values->batt_v);
	BatteryVoltage.resizeToCurrentText();
	BatteryVoltage.invalidate();
}
