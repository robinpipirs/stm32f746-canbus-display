#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>

MainPresenter::MainPresenter(MainView& v)
    : view(v)
{
}

void MainPresenter::activate()
{
}

void MainPresenter::deactivate()
{
}

void MainPresenter::setNewValue(uint8_t* newValue)
{
	view.updateVal(newValue);
}

void MainPresenter::updateDisplaySettings(uint8_t* settings)
{
	view.updateSettings(settings);
}
