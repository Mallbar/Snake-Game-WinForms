#include "SettingsForm.h"
#include "GameMainMenu.h"

System::Void SnakeXD::SettingsForm::SettingsForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	StreamReader^ reader = gcnew StreamReader("Info.txt");
	map = reader->ReadLine();
	isPlaying = reader->ReadLine();
	skin = reader->ReadLine();

	if (isPlaying == "off")
	{
		soundButton->Text = "Sound: ON";
	}
	else
	{
		soundButton->Text = "Sound: OFF";
	}

	reader->Close();


	return System::Void();
}

System::Void SnakeXD::SettingsForm::resetRecord_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Do you really want to reset record?", "Your progress will be lost", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK)
	{
		StreamWriter^ writer = gcnew StreamWriter("The Best Score.txt");
		writer->WriteLine("0");

		writer->Close();

		MessageBox::Show("Record was reset", "Massage", MessageBoxButtons::OK);
	}

	return System::Void();
}

System::Void SnakeXD::SettingsForm::soundSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (isPlaying == "off")
	{
		sound->Stop();
		isPlaying = "on";
		soundButton->Text = "Sound: OFF";
	}
	else if (isPlaying == "on")
	{
		sound->Play();
		isPlaying = "off";
		soundButton->Text = "Sound: ON";
	}

	return System::Void();
}

System::Void SnakeXD::SettingsForm::returnMenu_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ writer = gcnew StreamWriter("Info.txt");
	writer->WriteLine(map);
	writer->WriteLine(isPlaying);
	writer->WriteLine(skin);

	writer->Close();

	this->Close();

	return System::Void();
}
