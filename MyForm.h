#pragma once

namespace TesteAtividade02 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::PictureBox^ Picture1;
	private: System::Windows::Forms::Button^ Load;
	private: System::Windows::Forms::Button^ close_img;

	protected:

	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Picture1 = (gcnew System::Windows::Forms::PictureBox());
			this->Load = (gcnew System::Windows::Forms::Button());
			this->close_img = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture1))->BeginInit();
			this->SuspendLayout();
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(879, 495);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(75, 23);
			this->Exit->TabIndex = 0;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// Picture1
			// 
			this->Picture1->Location = System::Drawing::Point(262, 85);
			this->Picture1->Name = L"Picture1";
			this->Picture1->Size = System::Drawing::Size(294, 329);
			this->Picture1->TabIndex = 1;
			this->Picture1->TabStop = false;
			// 
			// Load
			// 
			this->Load->Location = System::Drawing::Point(365, 457);
			this->Load->Name = L"Load";
			this->Load->Size = System::Drawing::Size(75, 23);
			this->Load->TabIndex = 2;
			this->Load->Text = L"Load";
			this->Load->UseVisualStyleBackColor = true;
			this->Load->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// close_img
			// 
			this->close_img->Location = System::Drawing::Point(483, 456);
			this->close_img->Name = L"close_img";
			this->close_img->Size = System::Drawing::Size(75, 23);
			this->close_img->TabIndex = 3;
			this->close_img->Text = L"close";
			this->close_img->UseVisualStyleBackColor = true;
			this->close_img->Click += gcnew System::EventHandler(this, &MyForm::close_img_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 540);
			this->Controls->Add(this->close_img);
			this->Controls->Add(this->Load);
			this->Controls->Add(this->Picture1);
			this->Controls->Add(this->Exit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	Bitmap^ bmpPicture;
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		OpenFileDialog^ ofd = gcnew OpenFileDialog();

		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			int Width=100, Height = 100;
			bmpPicture = gcnew Bitmap(ofd->FileName);
			bmpPicture = gcnew Bitmap(bmpPicture, Width, Height);
			Picture1->Image = bmpPicture;
			//Picture1->ImageLocation = ofd->FileName;

		}

	private: System::Void close_img_Click(System::Object^ sender, System::EventArgs^ e) {
		//Picture1->ImageLocation = "";
		Picture1->Image = nullptr;
		//delete Picture1->Image;
		//Picture1->Refresh();
	}
};
}
