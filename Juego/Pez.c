#include<stdio.h>
#include<stdlib.h>

//Para leer texto
int Texto();
FILE*flujo;  //Y para guardar

//Funciones
int Inicio();
int ElComienzo();
int MotosYCueros();
int ProblemasDePies();
int Pelea();
int Pelea1();
int Pelea2();
int PeleaJF();

//Variable de guardado
int carnada=0;
int SAVE; //Guardara donde se quedo en la partida

//Variables normales
int Arma[2];
float w=1;
int c = 1, d = 1,P,R,V1,V2,D,E,At,De,AtV,DeV,MN,V3,KK;


int main(){
	char S='\0';
   printf("\n\n\n\n");
   flujo=fopen("Lec/Titulo.txt","rb");
   fseek(flujo,0,SEEK_END);
	int num_elementos=ftell(flujo);
	rewind(flujo);
	char*cadena=(char*)calloc(sizeof(char),num_elementos);
	int num_elemntos_leidos=fread(cadena,sizeof(char),num_elementos,flujo);
    printf("%s",cadena);
	free(cadena);
	fclose(flujo);
    while(w<=6){
        system("color 57");
        for ( c = 1 ; c <= 10000 ; c++ )
   	     for ( d = 1 ; d <= 10000 ; d++ )
	        {}
	     system("color 07");
        for ( c = 1 ; c <= 10000 ; c++ )
   	        for ( d = 1 ; d <= 10000 ; d++ )
	        {}
	     system("color 97");
        for ( c = 1 ; c <= 10000 ; c++ )
   	     for ( d = 1 ; d <= 10000 ; d++ )
	        {}
	    w++;
    }
    flujo=fopen("G/AbrGua.txt","rb");
	fscanf(flujo,"%d",&SAVE);
	fclose(flujo);
    system("color 07");
    printf("\n\t\t  A)NEW GAME");
    if (SAVE>0){
    printf("\n\t\t  B)CONTINUE\n\n"); //Esto solo se mostrara cuando ya hallas jugado y te enviara donde quedaste
    }
    printf("\n\n");
    scanf("%c",&S);
    system("cls");
    switch(S){
    	case 'A':
    		Inicio();
    	break;
    	case 'B':
    		MotosYCueros();
    	break;
	}
   return 0;
}

int Inicio(){
	SAVE=0;
	flujo=fopen("G/AbrGua.txt","w");
    fprintf(flujo,"%d",SAVE);
    fflush(flujo);
    fclose(flujo);
	printf("\n\n");
	printf("El arte de esta obra fue grandemente limitada por la\ntecnologia, es por esto que el 90 porciento de estas \n");
	printf("imaganes son muy conceptuales, por favor usa el 200 porciento\nde tu imaginacion para encontrar una forma.");
	getch();
	system("cls");
	flujo=fopen("Lec/Ins.txt","rb");
	Texto();
	getch();
	system("cls");
	ElComienzo();
	return 0;
}

int ElComienzo(){
	flujo=fopen("Lec/Carnada.txt","rb"); Texto();
	printf("\n \tDesicion ");
	scanf("%d",&carnada);
	SAVE=1;
	flujo=fopen("G/AbrGua.txt","w"); fprintf(flujo,"%d",SAVE); fflush(flujo); fclose(flujo);
	system("cls");
	switch (carnada){
		case 1:
			carnada=1;
			MotosYCueros();
		break;
		case 2:
			carnada=2;
			ProblemasDePies();
		break;
		default:
			ElComienzo();
	}
	flujo=fopen("G/Carnada.txt","w"); fprintf(flujo,"%d",carnada); fflush(flujo); fclose(flujo);
	
	return 0;
}

int MotosYCueros(){
	int MVC;
	FILE*flujo=fopen("G/AbrGua.txt","rb"); fscanf(flujo,"%d",&SAVE); fclose(flujo);
	while(SAVE<5){
		switch(SAVE){
			case 1:
				flujo=fopen("Lec/Cerdos/ElArma.txt","rb"); Texto(); getch(); system("cls");
	            flujo=fopen("Lec/Cerdos/ElArma2.txt","rb"); Texto(); getch(); system("cls");
        	    flujo=fopen("Lec/Cerdos/ElArma3.txt","rb"); Texto();
	            printf("\n\n \tDesicion "); scanf("%d",&Arma); system("cls");
	            flujo=fopen("G/Arma.txt","w"); fprintf(flujo,"%d",Arma[0]); fflush(flujo); fclose(flujo);
	            flujo=fopen("Lec/Cerdos/ElArma4.txt","rb"); Texto(); printf("\n\n  \tSave"); getch(); system("cls");
	            SAVE=2;
	            flujo=fopen("G/AbrGua.txt","w"); fprintf(flujo,"%d",SAVE); fflush(flujo); fclose(flujo);
	        break;
	        case 2:
	        	P=0;
	        	flujo=fopen("Lec/Cerdos/Z1.txt","rb"); Texto(); getch(); system("cls");
	        	Pelea();
	        	SAVE=3;
	        	R=10;V1=5;V2=5;At=4,De=3,AtV=3;DeV=2;
	        	Pelea1();
	        	if(P==1){ break;}
	        	flujo=fopen("Lec/Cerdos/FZ1.txt","rb"); Texto(); getch(); system("cls");
	            flujo=fopen("G/Arma2.txt","w"); fprintf(flujo,"%d",Arma[1]); fflush(flujo); fclose(flujo);
	            flujo=fopen("Lec/Cerdos/Z1.1.txt","rb"); Texto(); getch(); system("cls");
	            flujo=fopen("Lec/Cerdos/Z1.2.txt","rb"); Texto(); getch(); system("cls");
	            flujo=fopen("Lec/Cerdos/Z1.3.txt","rb"); Texto(); getch(); system("cls");
	            Pelea();
	            R=10;V1=6;V2=6;At=4,De=3,AtV=4;DeV=2;
	            Pelea1();
	            flujo=fopen("Lec/Cerdos/Z1.4.txt","rb"); Texto();
	            printf("\n\n \tDesicion "); scanf("%d",&MVC); system("cls");
	            flujo=fopen("G/MVC.txt","w"); fprintf(flujo,"%d",MVC); fflush(flujo); fclose(flujo);
	            if(MVC==1){flujo=fopen("Lec/Cerdos/VC.txt","rb"); Texto(); getch(); system("cls");}
				else{flujo=fopen("Lec/Cerdos/MC.txt","rb"); Texto(); getch(); system("cls");} 
				flujo=fopen("Lec/Cerdos/Z1.5.txt","rb"); Texto(); printf("\n\n  \tSave"); getch(); system("cls");
	            flujo=fopen("G/AbrGua.txt","w"); fprintf(flujo,"%d",SAVE); fflush(flujo); fclose(flujo);
	        break;
	        case 3:
	        	flujo=fopen("Lec/Cerdos/Z2.1.txt","rb"); Texto(); getch(); system("cls");
	        	flujo=fopen("Lec/Cerdos/Z2.2.txt","rb"); Texto(); getch(); system("cls");
	        	flujo=fopen("Lec/Cerdos/Z2.3.txt","rb"); Texto(); getch(); system("cls");
	        	flujo=fopen("Lec/Cerdos/Z2.4.txt","rb"); Texto(); getch(); system("cls");
	        	FILE*flujo=fopen("G/MVC.txt","rb"); fscanf(flujo,"%d",&MVC); fclose(flujo);
				if(MVC==2){
	        		flujo=fopen("Lec/Cerdos/Z2.4M.txt","rb"); Texto();
                    printf("\n\n \tDesicion "); scanf("%d",&MN); system("cls");
                    flujo=fopen("G/MN.txt","w"); fprintf(flujo,"%d",MN); fflush(flujo); fclose(flujo);
                    flujo=fopen("Lec/Cerdos/Z2.5M.txt","rb"); Texto(); printf("\n\n  \tSave"); getch(); system("cls");
				}else{
					flujo=fopen("Lec/Cerdos/Z2.5.txt","rb"); Texto(); printf("\n\n  \tSave"); getch(); system("cls");
				}
	        	SAVE=4;
	            flujo=fopen("G/AbrGua.txt","w"); fprintf(flujo,"%d",SAVE); fflush(flujo); fclose(flujo);
	        break;
	        case 4:{
	        	flujo=fopen("Lec/Cerdos/Z3.1.txt","rb"); Texto(); getch(); system("cls");
	        	flujo=fopen("Lec/Cerdos/Z3.2.txt","rb"); Texto(); getch(); system("cls");
	        	flujo=fopen("Lec/Cerdos/Z3.3.txt","rb"); Texto(); getch(); system("cls");
	        	flujo=fopen("Lec/Cerdos/Z3.4.txt","rb"); Texto(); getch(); system("cls");
	        	flujo=fopen("Lec/Cerdos/Z3.5.txt","rb"); Texto(); getch(); system("cls");
	        	//Pelea
	        	R=15;V1=6;V2=10;V3=9;At=8,De=6,AtV=5;DeV=4;
	        	Pelea();
	        	Pelea2();
	        	flujo=fopen("Lec/Cerdos/Z3.6.txt","rb"); Texto(); getch(); system("cls");
	        	//PeleaJefe
	        	Pelea();
	        	R=15;V1=15;At=8,De=6,AtV=7;DeV=7,KK=0;
	        	PeleaJF();
	        	flujo=fopen("Lec/Cerdos/Z3.7.txt","rb"); Texto(); getch(); system("cls");
	        	//Pelea
	        	R=15;V1=10;V2=10;At=8,De=6,AtV=6;DeV=5;
	        	Pelea();
	        	Pelea1();
	        	flujo=fopen("Lec/Cerdos/Z3.8.txt","rb"); Texto(); getch(); system("cls");
	        	//PeleaJefe
	        	Pelea();
	        	R=15;V1=20;At=8,De=6,AtV=8;DeV=7,KK=1;
	        	PeleaJF();
	        	FILE*flujo=fopen("G/MVC.txt","rb"); fscanf(flujo,"%d",&MVC); fclose(flujo);
	        	flujo=fopen("G/MN.txt","rb"); fscanf(flujo,"%d",&MN); fclose(flujo);
	        	if(MVC==1){
	        		//Final Bueno
	        		flujo=fopen("Lec/Cerdos/FB1.txt","rb"); Texto(); getch(); system("cls");
	        		flujo=fopen("Lec/Cerdos/FB2.txt","rb"); Texto(); getch(); system("cls");
	        		w=1;
	        		system("color 17");
	        		while(w<=5){
                        system("cls");  flujo=fopen("Lec/Cerdos/FB3.1.txt","rb"); Texto();
                               for ( c = 1 ; c <= 10000 ; c++ )
                          	     for ( d = 1 ; d <= 10000 ; d++ )
                       	        {}
                       	system("cls"); flujo=fopen("Lec/Cerdos/FB3.2.txt","rb"); Texto(); 
                               for ( c = 1 ; c <= 10000 ; c++ )
                          	        for ( d = 1 ; d <= 10000 ; d++ )
                       	        {}
                       	system("cls");    flujo=fopen("Lec/Cerdos/FB3.3.txt","rb"); Texto(); 
                               for ( c = 1 ; c <= 10000 ; c++ )
                          	     for ( d = 1 ; d <= 10000 ; d++ )
                       	        {}
                       	system("cls");    flujo=fopen("Lec/Cerdos/FB3.4.txt","rb"); Texto(); 
                               for ( c = 1 ; c <= 10000 ; c++ )
                          	     for ( d = 1 ; d <= 10000 ; d++ )
                       	        {}
                       	system("cls");    flujo=fopen("Lec/Cerdos/FB3.5.txt","rb"); Texto(); 
                               for ( c = 1 ; c <= 10000 ; c++ )
                          	     for ( d = 1 ; d <= 10000 ; d++ )
                       	        {}
                       	    w++;
                           }
				} 
				system("color 07");
				if(MVC==2){
					switch(MN){
						case 1:{
							//Final Malo
							flujo=fopen("Lec/Cerdos/FM1.txt","rb"); Texto(); getch(); system("cls");
	        		        flujo=fopen("Lec/Cerdos/FM2.txt","rb"); Texto(); getch(); system("cls");
	        	          	flujo=fopen("Lec/Cerdos/FM3.txt","rb"); Texto();
	        	          	while(w<=15){
                                system("color 47");
                                for ( c = 1 ; c <= 10000 ; c++ )
   	                             for ( d = 1 ; d <= 10000 ; d++ )
	                             {}
	                        system("color 07");
                            for ( c = 1 ; c <= 10000 ; c++ )
   	                            for ( d = 1 ; d <= 10000 ; d++ )
	                            {}
	                        w++;
                        }
							break;
						}
						case 2:{
							//Final Medio
							flujo=fopen("Lec/Cerdos/FI1.txt","rb"); Texto(); getch(); system("cls");
	        		        flujo=fopen("Lec/Cerdos/FI2.txt","rb"); Texto(); getch(); system("cls");
	        	          	flujo=fopen("Lec/Cerdos/FI3.txt","rb"); Texto(); getch(); system("cls");
							break;
						}
					}
				}
	        	SAVE=5;
	        	flujo=fopen("G/AbrGua.txt","w"); fprintf(flujo,"%d",SAVE); fflush(flujo); fclose(flujo);
				break;
			}
		}
	}
	getch();
	system("cls");
	flujo=fopen("Lec/Cerdos/Fin.txt","rb"); Texto(); getch(); system("cls");
	flujo=fopen("Lec/Cerdos/Fin2.txt","rb"); Texto(); getch(); system("cls");
	SAVE=0;
	flujo=fopen("G/AbrGua.txt","w"); fprintf(flujo,"%d",SAVE); fflush(flujo); fclose(flujo);
	return 0;
}

int ProblemasDePies(){
	srand(time(NULL));
	int b = rand() % 4;
	while(b!=4){
		flujo=fopen("Lec/Pie/ElArma.txt","rb"); Texto(); getch(); system("cls");
		b=rand()%5;
		for ( c = 1 ; c <= 15000 ; c++ )
   	     for ( d = 1 ; d <= 15000 ; d++ )
   	     {}
	}
	MotosYCueros();	
	return 0;
}

int Texto(){
	printf("\n\n");
	fseek(flujo,0,SEEK_END);
	int num_elementos=ftell(flujo);
	rewind(flujo);
	char*cadena=(char*)calloc(sizeof(char),num_elementos);
	int num_elemntos_leidos=fread(cadena,sizeof(char),num_elementos,flujo);
    printf("%s",cadena);
	free(cadena);
	fclose(flujo);
	return 0;
}

int Pelea(){
	flujo=fopen("Lec/F.txt","rb"); Texto();
	w=1;
	while(w<=5){
        system("color 57");
        for ( c = 1 ; c <= 10000 ; c++ )
   	     for ( d = 1 ; d <= 10000 ; d++ )
	        {}
	     system("color 07");
        for ( c = 1 ; c <= 10000 ; c++ )
   	        for ( d = 1 ; d <= 10000 ; d++ )
	        {}
	    w++;
    }
    system("cls");
	return 0;
}

int Pelea1(){
	FILE*flujo=fopen("G/Arma.txt","rb"); fscanf(flujo,"%d",&Arma[0]); fclose(flujo);
	srand(time(NULL));
	int T,U=1;
	int AD=rand()%2; //Decide si el enemigo ataca o defiende
	flujo=fopen("Lec/Cerdos/Pelea.txt","rb");  Texto(); //Texto
	printf("\n\t    Vida = %d              EnemigoUno = %d  EnemigoDos = %d",R,V1,V2);
	while(V1>0 || V2>0){
		printf("\n\n\t    1)Golpe = %d\n\t    2)Defensa = %d\n\t    ",At,De);
		if(U==1){
		switch(Arma[0]){
			case 1:{
				printf("3)Cana de pescar(1 uso) = 6\n\t    ");
				break;
			}
			case 2:{
				printf("3)Banyo(1 uso) = 3 a todos\n\t    ");
				break;
			}
			case 3:{
				printf("3)Escopeta(1 uso) = un misterio\n\t    ");
				break;
			}
		}}
		scanf("%d",&D);
		switch(D){         //ciclo para atacar o defender
			case 1:{
				if(V1>0){
					printf("\t    1)Enemigo uno\n");
				}
				if(V2>0){
					printf("\t    2)Enemigo dos\n");
				}
				printf("\t    ");
				scanf("%d",&E);
				switch(E){
					case 1:
						V1=V1-At; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
					case 2:
						V2=V2-At; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
				} break;
			}
			case 2:{
				R=R+De; //Defensa
				system("color 37");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
			break;          
		}
		   case 3:{
		   	U=0;
		   	if(Arma[0]==1){
		   		if(V1>0){
					printf("\t    1)Enemigo uno\n");
				}
				if(V2>0){
					printf("\t    2)Enemigo dos\n");
				}
				printf("\t    ");
				scanf("%d",&E);
				switch(E){
					case 1:
						V1=V1-6; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
					case 2:
						V2=V2-6; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
				} break;
			   }
			if(Arma[0]==2){
					V1=V1-3; //Ataque
					V2=V2-3;
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
			}else {
				printf("\t    Vida-1000000");
				R=0;
				system("color 27");
                        for ( c = 1 ; c <= 16000 ; c++ )
   	                        for ( d = 1 ; d <= 16000 ; d++ )
	                        {}
	                    system("color 07");
			}
			break;
		   }
		   }
		if (V1<=0 && V2<=0){    //Vitoria 
			system("cls");
			flujo=fopen("Lec/Victoria.txt","rb");  Texto(); getch(); system("cls");
			break;
		} 
		
		 if(R<=0){    //Muerte por escopeta
	       U=1;
			system("cls");
			if(Arma[0]==3){
				flujo=fopen("Lec/MuerteEs.txt","rb");  Texto(); getch(); system("cls"); SAVE=1; P=1;
				break;
			}
		}
		
	    if(V1>0){
			for ( c = 1 ; c <= 15000 ; c++ )
   	        for ( d = 1 ; d <= 15000 ; d++ )
	            {}
	        AD=rand()%2;
		    switch(AD){ //Turno del enemigo 1
			    case 0:
				    R=R-AtV;  //Ataque
				    system("color C7");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf ("\t    El enemigo ataco -%d   ",AtV);
			    break;
			    case 1:
				    V1=V1+DeV; //defensa
				    system("color 67");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf("\t    El enemigo se defendio +%d",DeV);
			    break;
		    }
	    }
	    if(V2>0){
	    	for ( c = 1 ; c <= 15000 ; c++ )
   	        for ( d = 1 ; d <= 15000 ; d++ )
	            {}
	        AD=rand()%2;
		    switch(AD){ //Turno del enemigo 2
			    case 0:
				    R=R-AtV;  //ataque
				    system("color C7");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf("\t    El enemigo ataco -%d   ",AtV);
			    break;
			    case 1:
				    V2=V2+DeV;   //defensa
				    system("color 67");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf("\t    El enemigo se defendio +%d",DeV);
			    break;
		   }
	    }
	    
	    if(R<=0){    //Muerte
	        U=1;
			system("cls");
			flujo=fopen("Lec/Muerte.txt","rb");  Texto(); getch(); system("cls");
			R=10; V1=5; V2=5;
			if(SAVE==4){
				R=15; V1=10; V2=10;
			}
			flujo=fopen("Lec/Cerdos/Pelea.txt","rb");  Texto(); //Texto
	        printf("\n\t    Vida = %d              EnemigoUno = %d  EnemigoDos = %d",R,V1,V2);
			continue;
		}
	    
		for ( c = 1 ; c <= 15000 ; c++ )
   	    for ( d = 1 ; d <= 15000 ; d++ )
	        {}
	        
	    if(V1>0 && V2>0){
	    	system("cls");
		    flujo=fopen("Lec/Cerdos/Pelea.txt","rb");  Texto(); //Texto
		} else {
			if(V1>0){
				system("cls");
		        flujo=fopen("Lec/Cerdos/PeleaM2.txt","rb");  Texto(); //Texto 
			}else{
				system("cls");
		        flujo=fopen("Lec/Cerdos/PeleaM1.txt","rb");  Texto(); //Texto
			}
	    }
		printf("\n\t    Vida = %d              ",R);
		if(V1>0){
			printf("EnemigoUno = %d  ",V1);
		}
		if(V2>0){
			printf("EnemigoDos = %d",V2);  
		}
	}
	system("cls");
	return 0;	
}

int Pelea2(){
	FILE*flujo=fopen("G/Arma.txt","rb"); fscanf(flujo,"%d",&Arma[0]); fclose(flujo);
	srand(time(NULL));
	int T,U=1,PP;
	int AD=rand()%2; //Decide si el enemigo ataca o defiende
	flujo=fopen("Lec/Cerdos/Pelea2.txt","rb");  Texto(); //Texto
	printf("\n\t   Vida = %d      EnemigoUno = %d  EnemigoDos = %d  EnemigoTres = %d",R,V1,V2,V3);
	while(V1>=0 || V2>=0 || V3>=0){
		printf("\n\n\t    1)Golpe = %d\n\t    2)Defensa = %d\n\t    ",At,De);
		if(U==1){
		switch(Arma[0]){
			case 1:{
				printf("3)Cana de pescar(1 uso) = 6\n\t    ");
				break;
			}
			case 2:{
				printf("3)Banyo(1 uso) = 3 a todos\n\t    ");
				break;
			}
			case 3:{
				printf("3)Escopeta(1 uso) = un misterio\n\t    ");
				break;
			}
		}}
		scanf("%d",&D);
		switch(D){         //ciclo para atacar o defender
			case 1:{
				if(V1>0){
					printf("\t    1)Enemigo uno\n");
				}
				if(V2>0){
					printf("\t    2)Enemigo dos\n");
				}
				if(V3>0){
					printf("\t    3)Enemigo tres\n");
				}
				printf("\t    ");
				scanf("%d",&E);
				switch(E){
					case 1:
						V1=V1-At; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
					case 2:
						V2=V2-At; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
					case 3:
						V3=V3-At; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
				} break;
			}
			case 2:{
				R=R+De; //Defensa
				system("color 37");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
			break;          
		}
		   case 3:{
		   	U=0;
		   	if(Arma[0]==1){
		   		if(V1>0){
					printf("\t    1)Enemigo uno\n");
				}
				if(V2>0){
					printf("\t    2)Enemigo dos\n");
				}
				if(V3>0){
					printf("\t    3)Enemigo tres\n");
				}
				printf("\t    ");
				scanf("%d",&E);
				switch(E){
					case 1:
						V1=V1-6; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
					case 2:
						V2=V2-6; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
					case 3:
						V3=V3-6; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
				} break;
			   }
			if(Arma[0]==2){
					V1=V1-3; //Ataque
					V2=V2-3;
					V3=V3-3;
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
			}else {
				printf("\t    Vida-1000000");
				R=0;
				system("color 27");
                        for ( c = 1 ; c <= 16000 ; c++ )
   	                        for ( d = 1 ; d <= 16000 ; d++ )
	                        {}
	                    system("color 07");
			}
			break;
		   }
		   }
		if (V1<=0 && V2<=0 && V3<=0){    //Vitoria 
			system("cls");
			flujo=fopen("Lec/Victoria.txt","rb");  Texto(); getch(); system("cls");
			break;
		} 
		
		 if(R<=0){    //Muerte por escopeta
	       U=1;
			system("cls");
			if(Arma[0]==3){
				flujo=fopen("Lec/MuerteEs.txt","rb");  Texto(); getch(); system("cls"); SAVE=1; P=1;
				break;
			}
		}
		
	    if(V1>0){
			for ( c = 1 ; c <= 15000 ; c++ )
   	        for ( d = 1 ; d <= 15000 ; d++ )
	            {}
	        AD=rand()%2;
		    switch(AD){ //Turno del enemigo 1
			    case 0:
				    R=R-AtV;  //Ataque
				    system("color C7");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf ("\tEl enemigo ataco -%d   ",AtV);
			    break;
			    case 1:
				    V1=V1+DeV; //defensa
				    system("color 67");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf("\tEl enemigo se defendio +%d",DeV);
			    break;
		    }
	    }
	    
	    if(V2>0){
	    	for ( c = 1 ; c <= 15000 ; c++ )
   	        for ( d = 1 ; d <= 15000 ; d++ )
	            {}
	        AD=rand()%2;
		    switch(AD){ //Turno del enemigo 2
			    case 0:
				    R=R-AtV;  //ataque
				    system("color C7");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf("\tEl enemigo ataco -%d   ",AtV);
			    break;
			    case 1:
				    V2=V2+DeV;   //defensa
				    system("color 67");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf("\tEl enemigo se defendio +%d",DeV);
			    break;
		   }
	    }
	    
	    if(V3>0){
			for ( c = 1 ; c <= 15000 ; c++ )
   	        for ( d = 1 ; d <= 15000 ; d++ )
	            {}
	        AD=rand()%2;
		    switch(AD){ //Turno del enemigo 1
			    case 0:
				    R=R-AtV;  //Ataque
				    system("color C7");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf ("\tEl enemigo ataco -%d   ",AtV);
			    break;
			    case 1:
				    V3=V3+DeV; //defensa
				    system("color 67");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf("\tEl enemigo se defendio +%d",DeV);
			    break;
		    }
	    }
	    if(R<=0){    //Muerte
	        U=1;
			system("cls");
			flujo=fopen("Lec/Muerte.txt","rb");  Texto(); getch(); system("cls");
			R=10; V1=7; V2=7; V3=7;
			if(SAVE==4){
				R=15; V1=7; V2=7; V3=7;
			}
			flujo=fopen("Lec/Cerdos/Pelea2.txt","rb");  Texto(); //Texto
	        printf("\n\t   Vida = %d      EnemigoUno = %d  EnemigoDos = %d  EnemigoTres = %d",R,V1,V2,V3);
			continue;
		}
	    
		for ( c = 1 ; c <= 15000 ; c++ )
   	    for ( d = 1 ; d <= 15000 ; d++ )
	        {}
	    if(V1<=0){PP++;} if(V2<=0){PP++;} if(V3<=0){PP++;}     
	    if(PP==0){
	    	system("cls");
		    flujo=fopen("Lec/Cerdos/Pelea2.txt","rb");  Texto(); //Texto
		} else {
			if(PP==1){
				system("cls");
		        flujo=fopen("Lec/Cerdos/Pelea2.1.txt","rb");  Texto(); //Texto 
			}else{
				system("cls");
		        flujo=fopen("Lec/Cerdos/Pelea2.2.txt","rb");  Texto(); //Texto
			}
	    }
		printf("\n\t    Vida = %d              ",R);
		if(V1>0){
			printf("EnemigoUno = %d  ",V1);
		}
		if(V2>0){
			printf("EnemigoDos = %d  ",V2);  
		}
		if(V3>0){
			printf("EnemigoTres = %d",V3);  
		}
	}
	system("cls");
	return 0;		
}

int PeleaJF(){
	FILE*flujo=fopen("G/Arma.txt","rb"); fscanf(flujo,"%d",&Arma[0]); fclose(flujo);
	srand(time(NULL));
	int T,U=1;
	int AD=rand()%2; //Decide si el enemigo ataca o defiende
	if(KK==0){
		flujo=fopen("Lec/Cerdos/PeleaJF.txt","rb");  Texto(); //Texto
	}else{
		flujo=fopen("Lec/Cerdos/PeleaJF2.txt","rb");  Texto(); //Texto
	}
	printf("\n\t    Vida = %d              GranjeroMotociclista = %d",R,V1);
	while(V1>0){
		printf("\n\n\t    1)Golpe = %d\n\t    2)Defensa = %d\n\t    ",At,De);
		if(U==1){
		switch(Arma[0]){
			case 1:{
				printf("3)Cana de pescar(1 uso) = 8\n\t    ");
				break;
			}
			case 2:{
				printf("3)Banyo(1 uso) = 5 a todos\n\t    ");
				break;
			}
			case 3:{
				printf("3)Escopeta(1 uso) = un misterio\n\t    ");
				break;
			}
		}}
		scanf("%d",&D);
		switch(D){         //ciclo para atacar o defender
			case 1:{
				if(V1>0){
					printf("\t    1)Enemigo uno\n");
				}
				printf("\t    ");
				scanf("%d",&E);
				switch(E){
					case 1:
						V1=V1-At; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
				} break;
			}
			case 2:{
				R=R+De; //Defensa
				system("color 37");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
			break;          
		}
		   case 3:{
		   	U=0;
		   	if(Arma[0]==1){
		   		if(V1>0){
					printf("\t    1)Enemigo uno\n");
				}
				printf("\t    ");
				scanf("%d",&E);
				switch(E){
					case 1:
						V1=V1-8; //Ataque
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
					break;
				} break;
			   }
			if(Arma[0]==2){
					V1=V1-5; //Ataque
					V2=V2-5;
						system("color 27");
                        for ( c = 1 ; c <= 10000 ; c++ )
   	                        for ( d = 1 ; d <= 10000 ; d++ )
	                        {}
	                    system("color 07");
			}else {
				printf("\t    Vida-1000000");
				R=0;
				system("color 27");
                        for ( c = 1 ; c <= 16000 ; c++ )
   	                        for ( d = 1 ; d <= 16000 ; d++ )
	                        {}
	                    system("color 07");
			}
			break;
		   }}
		   
		if (V1<=0){    //Vitoria 
			system("cls");
			flujo=fopen("Lec/Victoria.txt","rb");  Texto(); getch(); system("cls");
			break;
		} 
		
		 if(R<=0){    //Muerte por escopeta
	       U=1;
			system("cls");
			if(Arma[0]==3){
				flujo=fopen("Lec/MuerteEs.txt","rb");  Texto(); getch(); system("cls"); SAVE=1; P=1;
				break;
			}
		}
		
	    if(V1>0){
			for ( c = 1 ; c <= 15000 ; c++ )
   	        for ( d = 1 ; d <= 15000 ; d++ )
	            {}
	        AD=rand()%2;
		    switch(AD){ //Turno del enemigo 1
			    case 0:
				    R=R-AtV;  //Ataque
				    system("color C7");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf ("\t    El enemigo ataco -%d   ",AtV);
			    break;
			    case 1:
				    V1=V1+DeV; //defensa
				    system("color 67");
                    for ( c = 1 ; c <= 10000 ; c++ )
   	                    for ( d = 1 ; d <= 10000 ; d++ )
	                    {}
	                system("color 07");
				    printf("\t    El enemigo se defendio +%d",DeV);
			    break;
		    }
	    }
	    
	    if(R<=0){    //Muerte
	        U=1;
			system("cls");
			flujo=fopen("Lec/Muerte.txt","rb");  Texto(); getch(); system("cls");
			R=15; V1=20;
			if(KK==0){
		flujo=fopen("Lec/Cerdos/PeleaJF.txt","rb");  Texto(); //Texto
	}else{
		flujo=fopen("Lec/Cerdos/PeleaJF2.txt","rb");  Texto(); //Texto
	}
	        printf("\n\t    Vida = %d              GranjeroMotociclista = %d",R,V1);
			continue;
		}
	    
		for ( c = 1 ; c <= 15000 ; c++ )
   	    for ( d = 1 ; d <= 15000 ; d++ )
	        {}
	        
	    system("cls");
	    if(KK==0){
		flujo=fopen("Lec/Cerdos/PeleaJF.txt","rb");  Texto(); //Texto
	}else{
		flujo=fopen("Lec/Cerdos/PeleaJF2.txt","rb");  Texto(); //Texto
	}
		printf("\n\t    Vida = %d              ",R);
		if(V1>0){
			printf("GranjeroMotociclista = %d",V1);
		}
	}
	system("cls");
	return 0;	
}
