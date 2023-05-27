#pragma once
namespace SnakeXD
{

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace Media;

	public ref class PauseMenu : public System::Windows::Forms::Form
	{
	public: Form^ simpleForm;
	public:
		PauseMenu(Form^ simpleForm)
		{
			InitializeComponent();

			this->simpleForm = simpleForm;
		}

	protected:
		~PauseMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ returnToMenuButton;
	private: System::Windows::Forms::Button^ resumeButton;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PauseMenu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->returnToMenuButton = (gcnew System::Windows::Forms::Button());
			this->resumeButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(95, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 81);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pause";
			// 
			// returnToMenuButton
			// 
			this->returnToMenuButton->BackColor = System::Drawing::Color::Silver;
			this->returnToMenuButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->returnToMenuButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->returnToMenuButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		  static_cast<System::Byte>(204)));
			this->returnToMenuButton->Location = System::Drawing::Point(95, 203);
			this->returnToMenuButton->Name = L"returnToMenuButton";
			this->returnToMenuButton->Size = System::Drawing::Size(210, 77);
			this->returnToMenuButton->TabIndex = 3;
			this->returnToMenuButton->Text = L"Back to Menu";
			this->returnToMenuButton->UseVisualStyleBackColor = false;
			this->returnToMenuButton->Click += gcnew System::EventHandler(this, &PauseMenu::returnToMenuButton_Click);
			// 
			// resumeButton
			// 
			this->resumeButton->BackColor = System::Drawing::Color::Silver;
			this->resumeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->resumeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->resumeButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(204)));
			this->resumeButton->Location = System::Drawing::Point(95, 120);
			this->resumeButton->Name = L"resumeButton";
			this->resumeButton->Size = System::Drawing::Size(210, 77);
			this->resumeButton->TabIndex = 4;
			this->resumeButton->Text = L"Resume";
			this->resumeButton->UseVisualStyleBackColor = false;
			this->resumeButton->Click += gcnew System::EventHandler(this, &PauseMenu::resumeButton_Click);
			// 
			// PauseMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(400, 400);
			this->Controls->Add(this->resumeButton);
			this->Controls->Add(this->returnToMenuButton);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(784, 657);
			this->MinimumSize = System::Drawing::Size(100, 100);
			this->Name = L"PauseMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameForm";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void resumeButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void returnToMenuButton_Click(System::Object^ sender, System::EventArgs^ e)	;
};
}