#pragma once
namespace SnakeXD
{

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::IO;

	public ref class SelectMap: public System::Windows::Forms::Form
	{
	public:
		SelectMap()
		{
			InitializeComponent();
		}

	protected:
		~SelectMap()
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
	private: System::Windows::Forms::Button^ grayPick;
	private: System::Windows::Forms::Button^ returnMenu;
	private: System::Windows::Forms::Button^ greenPick;
	private: System::Windows::Forms::Button^ bluePick;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectMap::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->grayPick = (gcnew System::Windows::Forms::Button());
			   this->returnMenu = (gcnew System::Windows::Forms::Button());
			   this->greenPick = (gcnew System::Windows::Forms::Button());
			   this->bluePick = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
																		  static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(132, 49);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(499, 81);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Select your map";
			   // 
			   // grayPick
			   // 
			   this->grayPick->BackColor = System::Drawing::Color::DimGray;
			   this->grayPick->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->grayPick->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->grayPick->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(204)));
			   this->grayPick->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->grayPick->Location = System::Drawing::Point(279, 224);
			   this->grayPick->Name = L"grayPick";
			   this->grayPick->Size = System::Drawing::Size(210, 77);
			   this->grayPick->TabIndex = 2;
			   this->grayPick->Text = L"Gray";
			   this->grayPick->UseVisualStyleBackColor = false;
			   this->grayPick->Click += gcnew System::EventHandler(this, &SelectMap::grayPick_Click);
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
			   this->returnMenu->Location = System::Drawing::Point(710, 605);
			   this->returnMenu->Name = L"returnMenu";
			   this->returnMenu->Size = System::Drawing::Size(60, 39);
			   this->returnMenu->TabIndex = 3;
			   this->returnMenu->UseVisualStyleBackColor = false;
			   this->returnMenu->Click += gcnew System::EventHandler(this, &SelectMap::returnMenu_Click);
			   // 
			   // greenPick
			   // 
			   this->greenPick->BackColor = System::Drawing::Color::YellowGreen;
			   this->greenPick->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->greenPick->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->greenPick->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(204)));
			   this->greenPick->Location = System::Drawing::Point(279, 307);
			   this->greenPick->Name = L"greenPick";
			   this->greenPick->Size = System::Drawing::Size(210, 77);
			   this->greenPick->TabIndex = 4;
			   this->greenPick->Text = L"Green";
			   this->greenPick->UseVisualStyleBackColor = false;
			   this->greenPick->Click += gcnew System::EventHandler(this, &SelectMap::greenPick_Click);
			   // 
			   // bluePick
			   // 
			   this->bluePick->BackColor = System::Drawing::Color::DarkSlateBlue;
			   this->bluePick->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->bluePick->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->bluePick->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(204)));
			   this->bluePick->Location = System::Drawing::Point(279, 390);
			   this->bluePick->Name = L"bluePick";
			   this->bluePick->Size = System::Drawing::Size(210, 77);
			   this->bluePick->TabIndex = 5;
			   this->bluePick->Text = L"Blue";
			   this->bluePick->UseVisualStyleBackColor = false;
			   this->bluePick->Click += gcnew System::EventHandler(this, &SelectMap::bluePick_Click);
			   // 
			   // SelectMap
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoSize = true;
			   this->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(784, 657);
			   this->Controls->Add(this->bluePick);
			   this->Controls->Add(this->greenPick);
			   this->Controls->Add(this->returnMenu);
			   this->Controls->Add(this->grayPick);
			   this->Controls->Add(this->label1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->KeyPreview = true;
			   this->MaximumSize = System::Drawing::Size(784, 657);
			   this->MinimumSize = System::Drawing::Size(784, 657);
			   this->Name = L"SelectMap";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"GameForm";
			   this->Load += gcnew System::EventHandler(this, &SelectMap::SelectMap_Load);
			   this->ResumeLayout(false);

		   }

#pragma endregion

	private: System::Void SelectMap_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void grayPick_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void greenPick_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void bluePick_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void returnMenu_Click(System::Object^ sender, System::EventArgs^ e);
};
}