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
} display_values;

void MainView::updateVal(uint8_t* newValue)
{
	display_values* values = (display_values*) newValue;

	rpmProgress.setValue(values->rpm);
	rpmProgress.invalidate();

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


}
