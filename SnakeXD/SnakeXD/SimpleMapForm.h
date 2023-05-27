﻿#include "PauseMenu.h"

#pragma once
namespace SnakeXD
{
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;

	public ref class SimpleMapForm : public System::Windows::Forms::Form
	{

	public:
		SimpleMapForm(void)
		{
			InitializeComponent();
		}

	protected:
		~SimpleMapForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		String^ downHead;
		String^ upHead;
		String^ rightHead;
		String^ leftHead;
		String^ tail;
		String^ body;
		String^ fruitImage;
		array<PictureBox^>^ snake;
		int snakeX = 0;
		int snakeY = 1;
		int fruitX = 0;
		int fruitY = 0;
		int elements;
		PictureBox^ backGround;
		PictureBox^ fruit = gcnew PictureBox();
		int animationSpeed = 20;
		bool horizonCheck = false;
		bool virtiсalCheck = true;
		bool isKeyClicked = false;
		bool isPauseOnClick = false;
		Color backGroundColor;
		SoundPlayer^ sound = gcnew SoundPlayer("simple map.wav");

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ LeftBorder;
	private: System::Windows::Forms::PictureBox^ RightBorder;
	private: System::Windows::Forms::PictureBox^ UpperBorder;
	private: System::Windows::Forms::PictureBox^ LowerBorder;
	private: System::Windows::Forms::Button^ pause;
	private: System::Windows::Forms::Button^ restart;
	private: System::Windows::Forms::Label^ theBestScoreLabel;
	private: System::Windows::Forms::Label^ scoreLabel;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code


		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SimpleMapForm::typeid));
			   this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			   this->LeftBorder = (gcnew System::Windows::Forms::PictureBox());
			   this->RightBorder = (gcnew System::Windows::Forms::PictureBox());
			   this->UpperBorder = (gcnew System::Windows::Forms::PictureBox());
			   this->LowerBorder = (gcnew System::Windows::Forms::PictureBox());
			   this->pause = (gcnew System::Windows::Forms::Button());
			   this->restart = (gcnew System::Windows::Forms::Button());
			   this->theBestScoreLabel = (gcnew System::Windows::Forms::Label());
			   this->scoreLabel = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // timer1
			   // 
			   this->timer1->Enabled = true;
			   this->timer1->Tick += gcnew System::EventHandler(this, &SimpleMapForm::Update);
			   // 
			   // LeftBorder
			   // 
			   this->LeftBorder->BackColor = System::Drawing::Color::Gold;
			   this->LeftBorder->Location = System::Drawing::Point(40, 180);
			   this->LeftBorder->Name = L"LeftBorder";
			   this->LeftBorder->Size = System::Drawing::Size(20, 420);
			   this->LeftBorder->TabIndex = 6;
			   this->LeftBorder->TabStop = false;
			   // 
			   // RightBorder
			   // 
			   this->RightBorder->BackColor = System::Drawing::Color::Gold;
			   this->RightBorder->Location = System::Drawing::Point(720, 180);
			   this->RightBorder->Name = L"RightBorder";
			   this->RightBorder->Size = System::Drawing::Size(20, 420);
			   this->RightBorder->TabIndex = 7;
			   this->RightBorder->TabStop = false;
			   // 
			   // UpperBorder
			   // 
			   this->UpperBorder->BackColor = System::Drawing::Color::Gold;
			   this->UpperBorder->Location = System::Drawing::Point(40, 180);
			   this->UpperBorder->Name = L"UpperBorder";
			   this->UpperBorder->Size = System::Drawing::Size(700, 20);
			   this->UpperBorder->TabIndex = 8;
			   this->UpperBorder->TabStop = false;
			   // 
			   // LowerBorder
			   // 
			   this->LowerBorder->BackColor = System::Drawing::Color::Gold;
			   this->LowerBorder->Location = System::Drawing::Point(40, 580);
			   this->LowerBorder->Name = L"LowerBorder";
			   this->LowerBorder->Size = System::Drawing::Size(700, 20);
			   this->LowerBorder->TabIndex = 9;
			   this->LowerBorder->TabStop = false;
			   // 
			   // pause
			   // 
			   this->pause->BackColor = System::Drawing::Color::Yellow;
			   this->pause->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->pause->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(204)));
			   this->pause->Location = System::Drawing::Point(725, 12);
			   this->pause->Name = L"pause";
			   this->pause->Size = System::Drawing::Size(43, 44);
			   this->pause->TabIndex = 4;
			   this->pause->Text = L" | |";
			   this->pause->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			   this->pause->UseVisualStyleBackColor = false;
			   this->pause->Click += gcnew System::EventHandler(this, &SimpleMapForm::pause_Click);
			   // 
			   // restart
			   // 
			   this->restart->BackColor = System::Drawing::Color::Yellow;
			   this->restart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->restart->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			   this->restart->Location = System::Drawing::Point(620, 12);
			   this->restart->Name = L"restart";
			   this->restart->Size = System::Drawing::Size(100, 44);
			   this->restart->TabIndex = 4;
			   this->restart->Text = L"Restart";
			   this->restart->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			   this->restart->UseVisualStyleBackColor = false;
			   this->restart->Click += gcnew System::EventHandler(this, &SimpleMapForm::restart_Click);
			   // 
			   // theBestScoreLabel
			   // 
			   this->theBestScoreLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																			static_cast<System::Byte>(204)));
			   this->theBestScoreLabel->Location = System::Drawing::Point(27, 82);
			   this->theBestScoreLabel->Name = L"theBestScoreLabel";
			   this->theBestScoreLabel->Size = System::Drawing::Size(347, 37);
			   this->theBestScoreLabel->TabIndex = 11;
			   this->theBestScoreLabel->Text = L"The Best Score ";
			   // 
			   // scoreLabel
			   // 
			   this->scoreLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>(204)));
			   this->scoreLabel->Location = System::Drawing::Point(27, 45);
			   this->scoreLabel->Name = L"scoreLabel";
			   this->scoreLabel->Size = System::Drawing::Size(143, 37);
			   this->scoreLabel->TabIndex = 10;
			   this->scoreLabel->Text = L"Score";
			   // 
			   // SimpleMapForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoSize = true;
			   this->BackColor = System::Drawing::Color::YellowGreen;
			   this->ClientSize = System::Drawing::Size(784, 657);
			   this->Controls->Add(this->theBestScoreLabel);
			   this->Controls->Add(this->scoreLabel);
			   this->Controls->Add(this->LowerBorder);
			   this->Controls->Add(this->UpperBorder);
			   this->Controls->Add(this->RightBorder);
			   this->Controls->Add(this->LeftBorder);
			   this->Controls->Add(this->pause);
			   this->Controls->Add(this->restart);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->KeyPreview = true;
			   this->MaximumSize = System::Drawing::Size(784, 657);
			   this->MinimumSize = System::Drawing::Size(784, 657);
			   this->Name = L"SimpleMapForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"GameForm";
			   this->Load += gcnew System::EventHandler(this, &SimpleMapForm::GameForm_Load);
			   this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SimpleMapForm::GameForm_KeyDown);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->EndInit();
			   this->ResumeLayout(false);

		   }

#pragma endregion

	private: void infoLoad()
	{
		String^ path = Directory::GetCurrentDirectory();
		StreamReader^ reader = gcnew StreamReader("Info.txt");
		String^ line = reader->ReadLine();

		setMapColor(line, path);

		line = reader->ReadLine();

		if (line == "off")
		{
			sound->PlayLooping();
		}

		line = reader->ReadLine();

		path += "\\Images\\appearance\\" + line + " snake\\";

		downHead = path + "heads\\down " + line + ".png";
		upHead = path + "heads\\up " + line + ".png";
		leftHead = path + "heads\\left " + line + ".png";
		rightHead = path + "heads\\right " + line + ".png";
		body = path + "body " + line + ".png";
		tail = path + "tail " + line + ".png";

		reader->Close();
	}

	private: void setMapColor(String^ line, String^ path)
	{
		fruitImage = path + "\\Images\\fruits\\" + line + "_map_fruit.png";
		if (line == "green")
		{
			backGroundColor = Color::Yellow;
			this->BackColor = Color::YellowGreen;
		}
		else if (line == "gray")
		{
			backGroundColor = Color::Gray;
			this->BackColor = Color::DarkGray;
			LeftBorder->BackColor = Color::Black;
			RightBorder->BackColor = Color::Black;
			UpperBorder->BackColor = Color::Black;
			LowerBorder->BackColor = Color::Black;
		}
		else if (line == "blue")
		{
			backGroundColor = Color::Blue;
			this->BackColor = Color::DarkBlue;
			LeftBorder->BackColor = Color::Aqua;
			LeftBorder->BackColor = Color::Aqua;
			RightBorder->BackColor = Color::Aqua;
			UpperBorder->BackColor = Color::Aqua;
			LowerBorder->BackColor = Color::Aqua;
		}

	}

	private: void scoreCounter()
	{
		scoreLabel->Text = "Score: " + elements;
	}

	private: void loadingBestScore()
	{
		StreamReader^ reader = gcnew StreamReader("The Best Score.txt");
		String^ line = reader->ReadLine();

		if (line != "")
		{
			theBestScoreLabel->Text = "The Best Score " + line;
		}

		reader->Close();
	}

	private: void savingBestScore()
	{
		StreamReader^ reader = gcnew StreamReader("The Best Score.txt");
		String^ line = reader->ReadLine();

		if (Convert::ToInt32(line) <= elements)
		{
			reader->Close();
			StreamWriter^ writer = gcnew StreamWriter("The Best Score.txt");
			writer->WriteLine(Convert::ToString(elements));
			writer->Close();
		}

		reader->Close();
	}


	private: void eatingChecker()
	{
		if (snake[0]->Location == fruit->Location)
		{
			generateSnakeElement();
			scoreCounter();
			generatePositionFruit();
		}
	}

	private: void generateSnakeElement()
	{
		snake[elements] = gcnew PictureBox();
		snake[elements]->Location = Point(snake[elements - 1]->Location.X + animationSpeed
										  * snakeX, snake[elements - 1]->Location.Y - animationSpeed * snakeY);
		snake[elements]->Width = animationSpeed;
		snake[elements]->Height = animationSpeed;
		snake[elements]->Image = Image::FromFile(tail);
		snake[elements - 1]->Image = Image::FromFile(body);
		snake[elements]->BackColor = backGroundColor;

		this->Controls->Add(snake[elements]);
		snake[elements]->BringToFront();

		timer1->Interval -= 0.05;

		elements++;
	}

	private: void eatYourself()
	{
		for (int i = 4; i < elements; i++)
		{
			if (snake[0]->Location == snake[i]->Location)
			{
				gameOver();
				break;
			}
		}
	}

	private: void generateFruitLocation()
	{
		Random^ rand = gcnew Random();
		fruitX = rand->Next(60, 720);
		fruitY = rand->Next(200, 580);

		fruitX -= fruitX % animationSpeed;
		fruitY -= fruitY % animationSpeed;
	}

	private: void checkNotOnSnake()
	{
		for (int i = 0; i < elements; i++)
		{
			if (snake[i]->Location == fruit->Location)
			{
				i = 0;

				generateFruitLocation();
			}
		}
	}

	private: void generatePositionFruit()
	{
		generateFruitLocation();

		checkNotOnSnake();
		fruit->Location = Point(fruitX, fruitY);
		fruit->BackColor = backGroundColor;

		this->Controls->Add(fruit);
		fruit->BringToFront();

		for (int i = 0; i < elements; i++)
		{
			snake[i]->BringToFront();
		}
	}

	private: void movement()
	{
		for (int i = elements - 1; i >= 1; i--)
		{
			snake[i]->Location = snake[i - 1]->Location;
		}

		snake[0]->Location = Point(snake[0]->Location.X + snakeX * animationSpeed, snake[0]->Location.Y + snakeY * animationSpeed);
	}

	private: void gameOver()
	{
		timer1->Stop();
		savingBestScore();

		sound = gcnew SoundPlayer("die.wav");
		sound->Play();

		if (MessageBox::Show("Restart game or return to main menu?", "You Die", MessageBoxButtons::RetryCancel) == System::Windows::Forms::DialogResult::Retry)
		{
			restartOnClick();
		}
		else
		{
			sound = gcnew SoundPlayer("menu.wav");
			sound->Play();
		}


		this->Close();
	}

	private: void resumeGame()
	{
		if (isPauseOnClick)
		{
			sound->PlayLooping();
			timer1->Start();

			isPauseOnClick = false;
		}
	}

	private: void checkingBorders()
	{
		if (snake[0]->Location.X >= RightBorder->Location.X || snake[0]->Location.X <= LeftBorder->Location.X + 10)
		{
			gameOver();
		}
		else if (snake[0]->Location.Y <= UpperBorder->Location.Y + 10 || snake[0]->Location.Y >= LowerBorder->Location.Y)
		{
			gameOver();
		}
	}

	private: void restartOnClick()
	{
		SimpleMapForm^ simpleMap = gcnew SimpleMapForm();
		simpleMap->Show();

		this->Close();
	}

	private: void pauseOnClick()
	{
		savingBestScore();
		PauseMenu^ pauseForm = gcnew PauseMenu(this);
		pauseForm->Show();

		sound->Stop();
		timer1->Stop();
		isPauseOnClick = true;
	}

	private: void createSnakeHead()
	{
		snake = gcnew array <PictureBox^, 1>(400);
		snake[0] = gcnew PictureBox();
		snake[0]->Location = Point(60, 260);
		snake[0]->Width = animationSpeed;
		snake[0]->Height = animationSpeed;
		snake[0]->BackColor = backGroundColor;
		snake[0]->BringToFront();

		elements = 1;

		this->Controls->Add(snake[0]);

	}

	private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void pause_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void restart_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Update(System::Object^ sender, System::EventArgs^ e);
	};
}