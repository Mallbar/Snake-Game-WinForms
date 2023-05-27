#include "SimpleMapForm.h"
#include "PauseMenu.h"

System::Void SnakeXD::PauseMenu::resumeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();

	return System::Void();
}

System::Void SnakeXD::PauseMenu::returnToMenuButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Do you really want to finish the game?", "Your progress will be lost", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK)
	{
		simpleForm->Close();

		SoundPlayer^ sound = gcnew SoundPlayer("menu.wav");
		sound->Play();

		this->Close();
	}

	return System::Void();
}
