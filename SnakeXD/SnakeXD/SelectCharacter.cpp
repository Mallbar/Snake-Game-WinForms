#include "GameMainMenu.h"
#include "SelectCharacter.h"

System::Void SnakeXD::SelectCharacter::SelectCharacter_Load(System::Object^ sender, System::EventArgs^ e)
{
	StreamReader^ reader = gcnew StreamReader("Info.txt");
	map = reader->ReadLine();
	isPlaying = reader->ReadLine();
	skin = reader->ReadLine();

	reader->Close();

	return System::Void();
}

System::Void SnakeXD::SelectCharacter::blackPick_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ writer = gcnew StreamWriter("Info.txt");
	writer->WriteLine(map);
	writer->WriteLine(isPlaying);
	writer->WriteLine("black");

	writer->Close();

	this->Close();

	return System::Void();
}

System::Void SnakeXD::SelectCharacter::redPick_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ writer = gcnew StreamWriter("Info.txt");
	writer->WriteLine(map);
	writer->WriteLine(isPlaying);
	writer->WriteLine(Convert::ToString("red"));

	writer->Close();

	this->Close();

	return System::Void();
}

System::Void SnakeXD::SelectCharacter::beigePick_Click(System::Object^ sender, System::EventArgs^ e)
{
	StreamWriter^ writer = gcnew StreamWriter("Info.txt");
	writer->WriteLine(map);
	writer->WriteLine(isPlaying);
	writer->WriteLine(Convert::ToString("beige"));

	writer->Close();

	this->Close();

	return System::Void();
}

System::Void SnakeXD::SelectCharacter::returnMenu_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();

	return System::Void();
}
