Action_A()
{
	int letters_count;
	int first_letter_code;
	int rnd_char_code;
	int max_word_code;
	int rnd_word_code;
	int first_word_code;
	int words_count;
	int RND_value;
	
//	web_reg_save_param_regexp (
//    "ParamName=charkod",
//    "RegExp=[0-9]{3,}",
//    "Group=0",
//    	SEARCH_FILTERS,
//		"Scope=Body",
//		"Ordinal=All",
//		//"RequestUrl=*/slovardalja.net/*",
//		LAST );	

/*Correlation comment - Do not change!  Original value='192' Name ='charkod' Type ='Manual'*/
	lr_start_transaction("UC1_01_Main page");

		web_reg_save_param_ex(
		"ParamName=charkod",
		"LB=charkod=",
		"RB='>",
		SEARCH_FILTERS,
		"Scope=Body",
		"Ordinal=All",
		//"RequestUrl=*/slovardalja.net/*",
		LAST);

	web_url("slovardalja.net", 
		"URL=http://slovardalja.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		
		LAST);

	lr_end_transaction("UC1_01_Main page", LR_AUTO);

		
		
	
lr_output_message("��� ������ ����� %s", lr_eval_string("{charkod_1}")); 
lr_output_message("����� %s ����", lr_eval_string("{charkod_count}"));
	
//charkod_1 - ��� ������ �����, charkod_count - ���������� ����
//����������� ��������� ����� � ��������� (charkod_1: charkod_1+charkod_count)

first_letter_code = atoi(lr_eval_string("{charkod_1}"));
letters_count = atoi(lr_eval_string("{charkod_count}"));

RND_value=rand();

lr_output_message("��������� ����� %d", RND_value);

rnd_char_code = RND_value % letters_count + first_letter_code;

lr_output_message("������� ����� � ����� %d", rnd_char_code);

//�������� ��� ������� � ��������

lr_save_int(rnd_char_code, "param_letter");

lr_output_message("������� ����� � ����� %s", lr_eval_string("{param_letter}")); 

//������� �� �������� �� �������

//<a class='chara' href='word.php?wordid=6'><strong>������  </strong></a></td>

lr_start_transaction("UC1_02_Words page");

		web_reg_save_param_ex(
		"ParamName=wordcode",
		"LB=href='word.php?wordid=",
		"RB='><strong>",
		SEARCH_FILTERS,
		"Scope=Body",
		"Ordinal=All",
		//"RequestUrl=*/slovardalja.net/*",
		LAST);
		
web_url("word", 
		"URL=http://slovardalja.net/letter.php?charkod={param_letter}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);

	lr_end_transaction("UC1_02_Words page", LR_AUTO);

		
lr_output_message("��� ������� ����� %s", lr_eval_string("{wordcode_1}")); 
lr_output_message("����� %s ����", lr_eval_string("{wordcode_count}"));
		
//wordcode_1 - ��� ������� �����, wordcode_count - ���������� ����

words_count = atoi(lr_eval_string("{wordcode_count}"));

first_word_code = atoi(lr_eval_string("{wordcode_1}"));

lr_output_message("��� ������� ����� �� �������������� %d", first_word_code);
lr_output_message("���������� ���� �� �������������� %d", words_count);

//���� wordcode_1 �������� ����� - �������� ��� �� 1, � ���������� ���� �������� �� 1

if (first_word_code % 2 > 0) {
	first_word_code++;
	words_count--;
}

lr_output_message("��� ������� ����� ����� �������������� %d", first_word_code);
lr_output_message("���������� ���� ����� �������������� %d", words_count);

//����������� ��������� ����� � ��������� (first_word_code: first_word_code + words_count-1)

rnd_word_code = rand() % words_count + first_word_code;

lr_output_message("��������� ��� ����� %d", rnd_word_code);

//���� ���������� �������� ����� �������� ��� �� 1

if (rnd_word_code % 2 > 0) rnd_word_code--;

lr_output_message("�������� ��� ����� %d", rnd_word_code);

//�������� ��� ����� � ��������

lr_save_int(rnd_word_code, "param_word");

lr_output_message("������� ����� � ����� %s", lr_eval_string("{param_word}"));

//<p><strong>�������</strong></p><p>


//������� �� �������� � ��������� ������
/lr_start_transaction("UC1_03_Word page");

		*Correlation comment - Do not change!  Original value='�����' Name ='fin_wrd' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=final_word",
		"LB=</strong></p><p>",
		"RB=\r\n</p>\n",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/word.php*",
		LAST);


web_url("slovardalja.net", 
		"URL=http://slovardalja.net/word.php?wordid={param_word}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);	

	lr_end_transaction("UC1_03_Word page", LR_AUTO);


lr_output_message("%s", lr_eval_string("{final_word}"));
//lr_output_message("final_word_1 %s", lr_eval_string("{final_word_1}"));
//lr_output_message("final_word_count %s", lr_eval_string("{final_word_count}"));
	
//	web_link("�", 
//		"Text=�", 
//		"Snapshot=t10.inf", 
//		EXTRARES, 
//		"Url=/favicon.ico", "Referer=http://slovardalja.net/letter.php?charkod=192", ENDITEM, 
//		LAST);

	
//	web_link("�����", 
//		"Text=�����", 
//		"Snapshot=t11.inf", 
//		LAST);

	return 0;
}