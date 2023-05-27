#include "SelectMap.h"
#include "GameMainMenu.h"

System::Void SnakeXD::SelectMap::SelectMap_Load(System::Object^ sender, System::EventArgs^ e)
{
	StreamReader^ reader = gcnew StreamReader("Info.txt");
	reader->ReadLine();
	skin = reader->ReadLine();
	isPlaying = reader->ReadLine();

	reader->Close();

	return System::Void();
}

System::Void SnakeXD::SelectMap::grayPick_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ writer = gcnew StreamWriter("Info.txt");
	writer->WriteLine("gray");
	writer->WriteLine(skin);
	writer->WriteLine(isPlaying);

	writer->Close();

	this->Close();

	return System::Void();
}

System::Void SnakeXD::SelectMap::greenPick_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ writer = gcnew StreamWriter("Info.txt");
	writer->WriteLine("green");
	writer->WriteLine(skin);
	writer->WriteLine(isPlaying);

	writer->Close();

	this->Close();

	return System::Void();
}

System::Void SnakeXD::SelectMap::bluePick_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ writer = gcnew StreamWriter("Info.txt");
	writer->WriteLine("blue");
	writer->WriteLine(skin);
	writer->WriteLine(isPlaying);

	writer->Close();

	this->Close();

	return System::Void();
}

System::Void SnakeXD::SelectMap::returnMenu_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();

	return System::Void();
}
