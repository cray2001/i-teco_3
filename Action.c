Action()
{

	web_url("slovardalja.net", 
		"URL=http://slovardalja.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);

	web_url("letter", 
		"URL=http://slovardalja.net/letter.php?charkod={NewParam}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);
	
	web_url("word", 
		"URL=http://slovardalja.net/word.php?wordid=12491", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		LAST);


	return 0;
}