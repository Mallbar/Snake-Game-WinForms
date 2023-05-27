#include "SimpleMapForm.h"
#include "GameMainMenu.h"

System::Void SnakeXD::SimpleMapForm::GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	resumeGame();

	if (!isKeyClicked)
	{
		isKeyClicked = true;
		if (e->KeyCode == Keys::W && virtiñalCheck == false)
		{
			horizonCheck = false;
			virtiñalCheck = true;
			snakeX = 0;
			snakeY = -1;
			snake[0]->Image = Image::FromFile(upHead);
		}
		else if (e->KeyCode == Keys::S && virtiñalCheck == false)
		{
			horizonCheck = false;
			virtiñalCheck = true;
			snakeX = 0;
			snakeY = 1;
			snake[0]->Image = Image::FromFile(downHead);
		}
		else if (e->KeyCode == Keys::A && horizonCheck == false)
		{
			horizonCheck = true;
			virtiñalCheck = false;
			snakeX = -1;
			snakeY = 0;
			snake[0]->Image = Image::FromFile(leftHead);
		}
		else if (e->KeyCode == Keys::D && horizonCheck == false)
		{
			horizonCheck = true;
			virtiñalCheck = false;
			snakeX = 1;
			snakeY = 0;
			snake[0]->Image = Image::FromFile(rightHead);
		}
		else if (e->KeyCode == Keys::Escape)
		{
			pauseOnClick();
		}
		else if (e->KeyCode == Keys::R)
		{
			restartOnClick();
		}
	}
    return System::Void();
}

System::Void SnakeXD::SimpleMapForm::pause_Click(System::Object^ sender, System::EventArgs^ e)
{
	pauseOnClick();

	return System::Void();
}

System::Void SnakeXD::SimpleMapForm::restart_Click(System::Object^ sender, System::EventArgs^ e)
{
	restartOnClick();

	return System::Void();
}

System::Void SnakeXD::SimpleMapForm::Update(System::Object^ sender, System::EventArgs^ e)
{
	eatingChecker();
	movement();
	checkingBorders();
	eatYourself();
	isKeyClicked = false;

	return System::Void();
}

System::Void SnakeXD::SimpleMapForm::GameForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	infoLoad();
	createSnakeHead();

	for (int i = 0; i < 3; i++)
	{
		generateSnakeElement();
	}

	snake[0]->Image = Image::FromFile(downHead);

	fruit->Image = Image::FromFile(fruitImage);

	fruit->Width = animationSpeed;
	fruit->Height = animationSpeed;

	generatePositionFruit();

	backGround = gcnew PictureBox();

	backGround->Location = Point(50, 190);
	backGround->Size = System::Drawing::Size(690, 390);
	backGround->BackColor = backGroundColor;

	this->Controls->Add(backGround);

	scoreCounter();
	loadingBestScore();

	return System::Void();
}
