#include "GameMainMenu.h"
#include <Windows.h>
using namespace SnakeXD; 

[STAThreadAttribute]

int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	SnakeXD::GameMainMenu form;
	Application::Run(%form);
}

System::Void SnakeXD::GameMainMenu::GameMainMenu_Load(System::Object^ sender, System::EventArgs^ e)
{
	sound = gcnew SoundPlayer("menu.wav");

	StreamReader^ reader = gcnew StreamReader("Info.txt");
	reader->ReadLine();

	if (reader->ReadLine() == "off")
	{
		sound->PlayLooping();
	}

	reader->Close();

	return System::Void();
}

System::Void SnakeXD::GameMainMenu::playButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	SimpleMapForm^ simpleMap = gcnew SimpleMapForm();
	simpleMap->Show();

	return System::Void();
}

System::Void SnakeXD::GameMainMenu::characterSelectButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	SelectCharacter^ selectCharacterForm = gcnew SelectCharacter;
	selectCharacterForm->Show();

	return System::Void();
}

System::Void SnakeXD::GameMainMenu::mapSelectButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	SelectMap^ selectMapForm = gcnew SelectMap;
	selectMapForm->Show();

	return System::Void();
}

System::Void SnakeXD::GameMainMenu::settings_Click(System::Object^ sender, System::EventArgs^ e)
{
	SettingsForm^ settingsForm = gcnew SettingsForm(sound);
	settingsForm->Show();

	return System::Void();
}

System::Void SnakeXD::GameMainMenu::exitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Do you really want to exit?", "Are you sure?", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK)
	{
		Application::Exit();
	}

	return System::Void();
}