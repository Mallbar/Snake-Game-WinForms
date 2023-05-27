#include "SimpleMapForm.h"
#include "SettingsForm.h"
#include "SelectCharacter.h"
#include "SelectMap.h"

#pragma once
namespace SnakeXD {

	using namespace System;
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

	private: System::Windows::Forms::Button^ mapSelectButton;
	private: System::Windows::Forms::Button^ playButton;
	private: System::Windows::Forms::Button^ characterSelectButton;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Button^ settings;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameMainMenu::typeid));
			this->mapSelectButton = (gcnew System::Windows::Forms::Button());
			this->playButton = (gcnew System::Windows::Forms::Button());
			this->characterSelectButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->settings = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// mapSelectButton
			// 
			this->mapSelectButton->BackColor = System::Drawing::Color::YellowGreen;
			this->mapSelectButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mapSelectButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->mapSelectButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->mapSelectButton->Location = System::Drawing::Point(279, 390);
			this->mapSelectButton->Name = L"mapSelectButton";
			this->mapSelectButton->Size = System::Drawing::Size(210, 77);
			this->mapSelectButton->TabIndex = 0;
			this->mapSelectButton->Text = L"MAP";
			this->mapSelectButton->UseVisualStyleBackColor = false;
			this->mapSelectButton->Click += gcnew System::EventHandler(this, &GameMainMenu::mapSelectButton_Click);
			// 
			// playButton
			// 
			this->playButton->BackColor = System::Drawing::Color::YellowGreen;
			this->playButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->playButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->playButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->playButton->Location = System::Drawing::Point(279, 224);
			this->playButton->Name = L"playButton";
			this->playButton->Size = System::Drawing::Size(210, 77);
			this->playButton->TabIndex = 1;
			this->playButton->Text = L"PLAY";
			this->playButton->UseVisualStyleBackColor = false;
			this->playButton->Click += gcnew System::EventHandler(this, &GameMainMenu::playButton_Click);
			// 
			// characterSelectButton
			// 
			this->characterSelectButton->BackColor = System::Drawing::Color::YellowGreen;
			this->characterSelectButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->characterSelectButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->characterSelectButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->characterSelectButton->Location = System::Drawing::Point(279, 307);
			this->characterSelectButton->Name = L"characterSelectButton";
			this->characterSelectButton->Size = System::Drawing::Size(210, 77);
			this->characterSelectButton->TabIndex = 2;
			this->characterSelectButton->Text = L"CHARACTER";
			this->characterSelectButton->UseVisualStyleBackColor = false;
			this->characterSelectButton->Click += gcnew System::EventHandler(this, &GameMainMenu::characterSelectButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::YellowGreen;
			this->exitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->exitButton->Location = System::Drawing::Point(279, 473);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(210, 77);
			this->exitButton->TabIndex = 3;
			this->exitButton->Text = L"EXIT";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &GameMainMenu::exitButton_Click);
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
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->characterSelectButton);
			this->Controls->Add(this->playButton);
			this->Controls->Add(this->mapSelectButton);
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

	private: System::Void GameMainMenu_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void playButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void characterSelectButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void settings_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void mapSelectButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
