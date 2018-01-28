#include <stdio.h>

main()
{
	int s1, s2, secenek, sonuc , sonuc2, sonuc3, sonuc4;
	printf("Toplama yapmak icin : 1\n");
	printf("Cikarma yapmak icin : 2\n");
	printf("Carpma yapmak icin  : 3\n");
	printf("Bolme yapmak icin   : 4\n\n");
	printf("Seciniz > "); scanf("%d" , &secenek);
		switch (secenek)
		{
			case 1: tekrar : printf("Toplama islemini yapiniz > "); scanf("%d+%d" , &s1, &s2);
						sonuc = s1 + s2;
					printf("Yaptiginiz toplama isleminin sonucu : %d\n" , sonuc); goto tekrar; 
					
			case 2: tekrar2 : printf("Cikarma islemini yapiniz > "); scanf("%d-%d" , &s1 , &s2);
						sonuc2 = s1 - s2;
					printf("Yaptiginiz cikarma isleminin sonucu : %d\n" , sonuc2); goto tekrar2;
					
			case 3: tekrar3 : printf("Carpma islemini yapiniz > "); scanf("%d*%d" , &s1, &s2);
			            sonuc3 = s1 * s2;
			        printf("Yaptiginiz carpma isleminin sonucu : %d\n" , sonuc3); goto tekrar3;
			        
			case 4: tekrar4 : printf("Bolme islemini yapiniz > "); scanf("%d/%d" , &s1, &s2);
						sonuc4 = s1 / s2;
					printf("Yaptiginiz bolme isleminin sonucu : %d\n" , sonuc4); goto tekrar4;
	}
	
}
