#pragma once
namespace SnakeXD
{

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::IO;
	using namespace System::Media;

	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(SoundPlayer^ sound)
		{
			InitializeComponent();

			this->sound = sound;
		}

	protected:
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: SoundPlayer^ sound;
	private: String^ skin;
	private:	String^ isPlaying;
	private:	String^ map;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ resetRecord;
	private: System::Windows::Forms::Button^ returnMenu;
	private: System::Windows::Forms::Button^ soundButton;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->resetRecord = (gcnew System::Windows::Forms::Button());
			this->returnMenu = (gcnew System::Windows::Forms::Button());
			this->soundButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(260, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 81);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Settings";
			// 
			// resetRecord
			// 
			this->resetRecord->BackColor = System::Drawing::Color::Silver;
			this->resetRecord->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resetRecord->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->resetRecord->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->resetRecord->Location = System::Drawing::Point(286, 152);
			this->resetRecord->Name = L"resetRecord";
			this->resetRecord->Size = System::Drawing::Size(210, 77);
			this->resetRecord->TabIndex = 2;
			this->resetRecord->Text = L"Reset Record";
			this->resetRecord->UseVisualStyleBackColor = false;
			this->resetRecord->Click += gcnew System::EventHandler(this, &SettingsForm::resetRecord_Click);
			// 
			// returnMenu
			// 
			this->returnMenu->BackColor = System::Drawing::Color::Transparent;
			this->returnMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"returnMenu.BackgroundImage")));
			this->returnMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->returnMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->returnMenu->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			this->returnMenu->Location = System::Drawing::Point(712, 606);
			this->returnMenu->Name = L"returnMenu";
			this->returnMenu->Size = System::Drawing::Size(60, 39);
			this->returnMenu->TabIndex = 4;
			this->returnMenu->UseVisualStyleBackColor = false;
			this->returnMenu->Click += gcnew System::EventHandler(this, &SettingsForm::returnMenu_Click);
			// 
			// soundButton
			// 
			this->soundButton->BackColor = System::Drawing::Color::Silver;
			this->soundButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->soundButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->soundButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(204)));
			this->soundButton->Location = System::Drawing::Point(286, 235);
			this->soundButton->Name = L"soundButton";
			this->soundButton->Size = System::Drawing::Size(210, 77);
			this->soundButton->TabIndex = 5;
			this->soundButton->Text = L"Sound: ON";
			this->soundButton->UseVisualStyleBackColor = false;
			this->soundButton->Click += gcnew System::EventHandler(this, &SettingsForm::soundSettings_Click);
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(784, 657);
			this->Controls->Add(this->soundButton);
			this->Controls->Add(this->returnMenu);
			this->Controls->Add(this->resetRecord);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(784, 657);
			this->MinimumSize = System::Drawing::Size(784, 657);
			this->Name = L"SettingsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameForm";
			this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void resetRecord_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void returnMenu_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void soundSettings_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void SettingsForm_Load(System::Object^ sender, System::EventArgs^ e);
	};
}