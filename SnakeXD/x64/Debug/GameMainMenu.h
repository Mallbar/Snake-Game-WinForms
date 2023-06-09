#include "SimpleMapForm.h"
#include "SettingsForm.h"
#include "SelectCharacter.h"

#pragma once
namespace SnakeXD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Media;

	public ref class GameMainMenu : public System::Windows::Forms::Form
	{
	public:
		GameMainMenu(void)
		{
			InitializeComponent();
		}

	protected:
		~GameMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: SoundPlayer^ sound;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ settings;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameMainMenu::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->settings = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::YellowGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(279, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"MAP";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::YellowGreen;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(279, 224);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 77);
			this->button2->TabIndex = 1;
			this->button2->Text = L"PLAY";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GameMainMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::YellowGreen;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(279, 307);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(210, 77);
			this->button3->TabIndex = 2;
			this->button3->Text = L"CHARACTER";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &GameMainMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::YellowGreen;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(279, 473);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(210, 77);
			this->button4->TabIndex = 3;
			this->button4->Text = L"EXIT";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GameMainMenu::button4_Click);
			// 
			// settings
			// 
			this->settings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
																		 static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->settings->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"settings.BackgroundImage")));
			this->settings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->settings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->settings->Location = System::Drawing::Point(710, 570);
			this->settings->Name = L"settings";
			this->settings->Size = System::Drawing::Size(40, 40);
			this->settings->TabIndex = 6;
			this->settings->UseVisualStyleBackColor = false;
			this->settings->Click += gcnew System::EventHandler(this, &GameMainMenu::settings_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
																	   static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 55));
			this->label1->Location = System::Drawing::Point(1, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(789, 112);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Strangle the snake XD";
			// 
			// GameMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Green;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 657);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->settings);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(784, 657);
			this->MinimumSize = System::Drawing::Size(784, 657);
			this->Name = L"GameMainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Snake";
			this->Load += gcnew System::EventHandler(this, &GameMainMenu::GameMainMenu_Load);
			this->ResumeLayout(false);
		}
#pragma endregion

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SelectCharacter^ selectForm = gcnew SelectCharacter;
		selectForm->Show();
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (MessageBox::Show("Do you really want to exit?", "Are you sure?", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK)
		{
			Application::Exit();
		}
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SimpleMapForm^ simpleMap = gcnew SimpleMapForm();
		simpleMap->Show();
	}


	private: System::Void settings_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SettingsForm^ settingsForm = gcnew SettingsForm(sound);
		settingsForm->Show();
	}


	private: System::Void GameMainMenu_Load(System::Object^ sender, System::EventArgs^ e)
	{
		sound = gcnew SoundPlayer("menu.wav");

		StreamReader^ sw = gcnew StreamReader("Info.txt");
		sw->ReadLine();

		if (Convert::ToString(sw->ReadLine()) == "off")
		{
			sound->PlayLooping();
		}

		sw->Close();
	}
    };
}
