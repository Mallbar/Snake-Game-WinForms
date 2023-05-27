#pragma once
namespace SnakeXD
{

	public ref class SelectCharacter : public System::Windows::Forms::Form
	{
	public:
		SelectCharacter()
		{
			InitializeComponent();
		}

	protected:
		~SelectCharacter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ skin;
	private: String^ isPlaying;
	private: String^ map;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ blackPick;
	private: System::Windows::Forms::Button^ returnMenu;
	private: System::Windows::Forms::Button^ redPick;
	private: System::Windows::Forms::Button^ beigePick;



	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectCharacter::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->blackPick = (gcnew System::Windows::Forms::Button());
			this->returnMenu = (gcnew System::Windows::Forms::Button());
			this->redPick = (gcnew System::Windows::Forms::Button());
			this->beigePick = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
																	   static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(71, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(645, 81);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Select your character";
			// 
			// blackPick
			// 
			this->blackPick->BackColor = System::Drawing::Color::Black;
			this->blackPick->Cursor = System::Windows::Forms::Cursors::Hand;
			this->blackPick->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->blackPick->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(204)));
			this->blackPick->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->blackPick->Location = System::Drawing::Point(279, 224);
			this->blackPick->Name = L"blackPick";
			this->blackPick->Size = System::Drawing::Size(210, 77);
			this->blackPick->TabIndex = 2;
			this->blackPick->Text = L"Black";
			this->blackPick->UseVisualStyleBackColor = false;
			this->blackPick->Click += gcnew System::EventHandler(this, &SelectCharacter::blackPick_Click);
			// 
			// returnMenu
			// 
			this->returnMenu->BackColor = System::Drawing::Color::Transparent;
			this->returnMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"returnMenu.BackgroundImage")));
			this->returnMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->returnMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->returnMenu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->returnMenu->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			this->returnMenu->Location = System::Drawing::Point(712, 606);
			this->returnMenu->Name = L"returnMenu";
			this->returnMenu->Size = System::Drawing::Size(60, 39);
			this->returnMenu->TabIndex = 3;
			this->returnMenu->UseVisualStyleBackColor = false;
			this->returnMenu->Click += gcnew System::EventHandler(this, &SelectCharacter::returnMenu_Click);
			// 
			// redPick
			// 
			this->redPick->BackColor = System::Drawing::Color::Firebrick;
			this->redPick->Cursor = System::Windows::Forms::Cursors::Hand;
			this->redPick->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->redPick->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(204)));
			this->redPick->Location = System::Drawing::Point(279, 307);
			this->redPick->Name = L"redPick";
			this->redPick->Size = System::Drawing::Size(210, 77);
			this->redPick->TabIndex = 4;
			this->redPick->Text = L"Red";
			this->redPick->UseVisualStyleBackColor = false;
			this->redPick->Click += gcnew System::EventHandler(this, &SelectCharacter::redPick_Click);
			// 
			// beigePick
			// 
			this->beigePick->BackColor = System::Drawing::Color::Bisque;
			this->beigePick->Cursor = System::Windows::Forms::Cursors::Hand;
			this->beigePick->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->beigePick->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(204)));
			this->beigePick->Location = System::Drawing::Point(279, 390);
			this->beigePick->Name = L"beigePick";
			this->beigePick->Size = System::Drawing::Size(210, 77);
			this->beigePick->TabIndex = 5;
			this->beigePick->Text = L"Beige";
			this->beigePick->UseVisualStyleBackColor = false;
			this->beigePick->Click += gcnew System::EventHandler(this, &SelectCharacter::beigePick_Click);
			// 
			// SelectCharacter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 657);
			this->Controls->Add(this->beigePick);
			this->Controls->Add(this->redPick);
			this->Controls->Add(this->returnMenu);
			this->Controls->Add(this->blackPick);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(784, 657);
			this->MinimumSize = System::Drawing::Size(784, 657);
			this->Name = L"SelectCharacter";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameForm";
			this->Load += gcnew System::EventHandler(this, &SelectCharacter::SelectCharacter_Load);
			this->ResumeLayout(false);

		}

#pragma endregion

	private: System::Void SelectCharacter_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void blackPick_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void redPick_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void beigePick_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void returnMenu_Click(System::Object^ sender, System::EventArgs^ e);
};
}