Action_A()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=94", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABA3d3dwdnc3RhdGljA2NvbQAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		"Url=https://dns.google/dns-query?dns=AAABAAABAAAAAAABC3Nsb3ZhcmRhbGphA25ldAAAAQABAAApEAAAAAAAAFQADABQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("slovardalja.net", 
		"URL=http://slovardalja.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google-analytics.com/urchin.js", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTQuMC40NjA2LjgxEhAJrlVfs5DBJJoSBQ1nZ7P-GKupygE=?alt=proto", "Referer=", ENDITEM, 
		"Url=https://counter.yadro.ru/hit?q;t44.1;rhttp%3A//slovardalja.net/;s1920*1080*24;uhttp%3A//slovardalja.net/letter.php%3Fcharkod%3D192;h%u0422%u043E%u043B%u043A%u043E%u0432%u044B%u0439%20%u0441%u043B%u043E%u0432%u0430%u0440%u044C%20%u0414%u0430%u043B%u044F%20%u043E%u043D%u043B%u0430%u0439%u043D;0.4659029867792641", ENDITEM, 
		"Url=https://counter.yadro.ru/hit?q;t44.1;rhttp%3A//slovardalja.net/letter.php%3Fcharkod%3D192;s1920*1080*24;uhttp%3A//slovardalja.net/word.php%3Fwordid%3D672;h%u0422%u043E%u043B%u043A%u043E%u0432%u044B%u0439%20%u0441%u043B%u043E%u0432%u0430%u0440%u044C%20%u0414%u0430%u043B%u044F%20%u043E%u043D%u043B%u0430%u0439%u043D;0.14213933560957637", ENDITEM, 
		LAST);

	web_add_cookie("__utma=196215790.1932843526.1634592306.1634592306.1634592306.1; DOMAIN=slovardalja.net");

	web_add_cookie("__utmb=196215790; DOMAIN=slovardalja.net");

	web_add_cookie("__utmc=196215790; DOMAIN=slovardalja.net");

	web_add_cookie("__utmz=196215790.1634592306.1.1.utmccn=(direct)|utmcsr=(direct)|utmcmd=(none); DOMAIN=slovardalja.net");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_link("Р", 
		"Text=Р", 
		"Snapshot=t10.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=http://slovardalja.net/letter.php?charkod=192", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(7);

	web_link("РоиЪР", 
		"Text=РоиЪР", 
		"Snapshot=t11.inf", 
		LAST);

	return 0;
}