#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

float admin(float nota1 ,float nota2 ,float nota3, float nota4) {
    char login[15] = "admin", loginDig[15];
    char senha[15] = "1234", senhaDig[15];
    int adm,erro;

    do {
        system("cls");
        erro = 0;
        printf("Login: ");
        fflush(stdin);
        scanf("%14[^\n]", loginDig);
        
        if (strcmp(login, loginDig) != 0) {
            printf("Login errado.\n");
            system("pause");
            erro++;
        }
        else {
            printf("Senha: ");
            fflush(stdin);
            scanf("%14[^\n]", senhaDig);
            if (strcmp(senha, senhaDig) != 0) {
                printf("Senha errada.\n");
                system("pause");
                erro++;
            }
        }
    } while (erro != 0);

    puts("User logado.\n");
    do{
    	printf("Selecione o tema em que deseja ver as estat�sticas:\n\n");
        printf("1. 100 anos da semana de arte moderna\n");
        printf("2. 150 Anos de Santos Dumont\n");
        printf("3. Jogos Ol�mpicos de Paris 2024\n");
        printf("4. Evolu��o dos Computadores\n");
        scanf("%d",&adm);
        fflush(stdin);
        
    if (adm<1 || adm>4){
    	printf("Por favor,digite uma op��o v�lida:\n");
    	system("pause");
    	system("cls");
	}
    }while(adm<1 || adm>4);

        
        switch (adm){
        	case 1:
        	system ("cls");
        	printf("A nota m�dia recebida pelos visitantes do tema 100 anos da semana de arte moderna � de %0.1f\n",nota1);
        	    if (nota1>=8){
        		printf("\nEm geral,este tema recebeu notas altas e as obras parecem ter cativado o p�blico.\n");
                 }
         	    if (nota1>=6 && nota1<8){
        		printf("\nEsse tema tem sido bem recebido pelo p�blico,apesar das notas obtidas n�o terem sido t�o altas.Por isso,est� aberto para melhorias.\n");     		
			}
			if (nota1<6) {
			printf("\nEsse tema tem acumulado notas baixas e n�o est� sendo bem recebido pelo p�blico.� aconselh�vel que ocorra uma reformula��o parcial ou total da exposi��o.\n");
			}
			
        	break;
        	
            case 2:
        	system ("cls");
        	printf("A nota m�dia recebida pelos visitantes do tema 150 anos de Santos Dumont � de %0.1f\n",nota2);
        	        	    if (nota2>=8){
        		printf("\nEm geral,este tema recebeu notas altas e as obras parecem ter cativado o p�blico.\n");
                 }
         	    if (nota2>=6 && nota2<8){
        		printf("\nEsse tema tem sido bem recebido pelo p�blico,apesar das notas obtidas n�o terem sido t�o altas.Por isso,est� aberto para melhorias.\n");     		
			}
			if (nota2<6) {
			printf("\nEsse tema tem acumulado notas baixas e n�o est� sendo bem recebido pelo p�blico.� aconselh�vel que ocorra uma reformula��o parcial ou total da exposi��o.\n");
			}
        	break; 
        	
            case 3:
        	system ("cls");
        	printf("A nota m�dia recebida pelos visitantes do tema Jogos Ol�mpicos de Paris de 2024 � de %0.1f\n",nota3);
        	        	    if (nota3>=8){
        		printf("\nEm geral,este tema recebeu notas altas e as obras parecem ter cativado o p�blico.\n");
                 }
         	    if (nota3>=6 && nota3<8){
        		printf("\nEsse tema tem sido bem recebido pelo p�blico,apesar das notas obtidas n�o terem sido t�o altas.Por isso,est� aberto para melhorias.\n");     		
			}
			if (nota3<6) {
			printf("\nEsse tema tem acumulado notas baixas e n�o est� sendo bem recebido pelo p�blico.� aconselh�vel que ocorra uma reformula��o parcial ou total da exposi��o.\n");
			}
        	break;
        	
        	case 4:
        	system ("cls");
        	printf("A nota m�dia recebida pelos visitantes do tema Evolu��o dos Computadores � de %0.1f\n",nota4);
        	        	    if (nota4>=8){
        		printf("\nEm geral,este tema recebeu notas altas e as obras parecem ter cativado o p�blico.\n");
                 }
         	    if (nota4>=6 && nota4<8){
        		printf("\nEsse tema tem sido bem recebido pelo p�blico,apesar das notas obtidas n�o terem sido t�o altas.Por isso,est� aberto para melhorias.\n");     		
			}
			if (nota4<6) {
			printf("\nEsse tema tem acumulado notas baixas e n�o est� sendo bem recebido pelo p�blico.� aconselh�vel que ocorra uma reformula��o parcial ou total da exposi��o.\n");
			}
        	break;
            default:
        	printf("Por favor,digite uma op��o v�lida:\n\n");
			break;	
		}
    	    	
    	

	

}

int quest(int *nota) {
    char sn;

    printf("\n\nConvidamos voc� a responder nossa pesquisa de satisfa��o. Digite s para sim, n para n�o.\n");
    
    do {
        scanf(" %c", &sn);
        fflush(stdin);

        if (sn == 's') {
        	system("cls");
            printf("D� uma nota,de 0 a 10,para a exposi��o:\n\n10-9 �timo\n8-7 Bom\n6-5 Ok\n4-0 Ruim\n");
            
            do {
                scanf("%d", nota);
                fflush(stdin);

                if (*nota >= 0 && *nota <= 10) {
                    printf("\nObrigado por participar.\n");

                }

                else {
                    printf("\nPor favor, digite uma nota de 0 a 10.\n");
                }

            } while (*nota < 0 || *nota > 10);
        }
        else if (sn == 'n') {
            printf("\nObrigado por participar.\n");
        }
        else {
            printf("\nDigite uma op��o v�lida.\n");
        }
    } while (sn != 'n' && sn != 's');

    return *nota;
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int resp[4]={0,0,0,0};
    int somatorio[4]={0,0,0,0};
    int i[4]={0,0,0,0};
    float media[4]={7.0,7.0,7.0,7.0};
    int op;
    char voltar;
    
    

    do {
      do {
	  voltar ='n';
 
        system("cls");
        printf("Bem-vindo ao Museu Sampa Cult!\n\n");
        printf("Selecione um tema para visualizar:\n");
        printf("\n1. 100 anos da semana de arte moderna\n");
        printf("2. 150 Anos de Santos Dumont\n");
        printf("3. Jogos Ol�mpicos de Paris de 2024\n");
        printf("4. Evolu��o dos computadores\n");
        printf("\n5. �rea do administrador\n");
        printf("\n6. Sair\n");
        scanf("%d", &op);
        fflush(stdin);
        if (op<1 || op>6){
        	printf("Por favor,digite uma op��o v�lida(de 1 a 6)\n");
        	system("pause");
		}

      }while (op <1 || op>6);


        switch (op) {
            case 1:
            	
            	do{
                system("cls");
                printf("\t\t\t\t\t\t100 anos da semana de arte moderna\n\n\tA Semana de Arte Moderna de 1922 em S�o Paulo foi um evento que introduziu o modernismo no Brasil, desafiando tradi��es art�sticas e culturais. Comemorando seu centen�rio em 2022, o evento destacou artistas como Tarsila do Amaral e M�rio de Andrade, influenciando profundamente a identidade cultural brasileira e promovendo a diversidade na cena art�stica nacional. \n\nSelecione uma obra:\n\n");
                printf("1. Os Oper�rios\n");
                printf("2. Macuna�ma\n");
                scanf("%d", &op);
                fflush(stdin);

                switch (op) {
                    case 1:
                        system("cls");
                        printf("\t\t\t\t\t\tOs Oper�rios\n\n");
                        printf("	Os Oper�rios � uma pintura de Tarsila do Amaral, criada em 1933, que retrata a resili�ncia dos trabalhadores industriais brasileiros.\nA obra captura express�es determinadas e cansadas, simbolizando as dif�ceis condi��es de trabalho.\n� uma representa��o marcante da classe trabalhadora durante a industrializa��o do Brasil.\n");
                        break;
                    case 2:
                    	system("cls");
                    	printf("\t\t\t\t\t\t Macuna�ma\n\n");
                        printf("	Macuna�ma, escrito por M�rio de Andrade em 1928, � uma obra fundamental da literatura brasileira. \n A hist�ria segue as aventuras de um her�i pregui�oso e esperto na Amaz�nia, incorporando mitos e lendas ind�genas. \n A narrativa � conhecida por sua linguagem inovadora e estilo modernista,tornando-se um s�mbolo da riqueza cultural do Brasil. \n");
                        break;
                    default:
                        printf("\nPor favor,digite uma op��o v�lida: \n");
                        system ("pause");
                }
                }while (op !=1 && op!=2);
                quest(&resp[0]);
                somatorio[0]= resp[0]+somatorio[0];
                i[0]++;
                media[0]=somatorio[0]/((float)i[0]);
                
                do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para n�o.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;

            case 2:
            	
            do{
                system("cls");
                printf("\t\t\t\t\t\t150 Anos de Santos Dumont\n\n\tEm 2023, comemoram-se os 150 anos do nascimento de Santos Dumont, pioneiro da avia��o. Seu legado inclui o hist�rico voo do 14-Bis em 1906, o primeiro voo p�blico bem-sucedido de uma aeronave mais pesada que o ar. Dumont � celebrado por sua inova��o e coragem, sendo uma fonte cont�nua de inspira��o para o progresso cient�fico e tecnol�gico.\n\nSelecione uma obra:\n\n");
                printf("1. 14-bis \n");
                printf("2. Dirigivel Santos Dumont No 6 \n");
                scanf("%d", &op);
                fflush(stdin);

                switch (op) {
                    case 1:
                    	system("cls");
                        printf("\t\t\t\t\t\t 14-Bis\n\n");
                        printf("	O 14-Bis, foi inventado por Santos Dumont em 1906, foi o primeiro avi�o a decolar, voar e pousar com sucesso usando um motor aeron�utico. Sua estrutura leve e aerodin�mica permitiu um voo controlado. Em 23 de outubro de 1906, o 14-Bis realizou um voo p�blico bem-sucedido em Paris, marcando um marco crucial na hist�ria da avia��o e estabelecendo Santos Dumont como um pioneiro vision�rio.\n");
                        break;
                    case 2:
                    	system("cls");
                    	printf("\t\t\t\t\t\t Santos-Dumont N� 6\n\n");
                        printf("	O Dirig�vel Santos Dumont N�mero 6, criado em 1901 foi um dos primeiros dirig�veis n�o-r�gidos bem-sucedidos. Equipado com um motor a gasolina, realizou um voo p�blico not�vel ao redor da Torre Eiffel em Paris. Esse feito pioneiro destacou a viabilidade do voo motorizado e controlado, solidificando a reputa��o de Santos Dumont como um inovador crucial na hist�ria da avia��o.\n");
                        break;
                    default:
                        printf("\nPor favor,digite uma op��o v�lida: \n");
                        system("pause");
                }
            }while (op!=1 && op!=2);
                quest(&resp[1]);
                
                somatorio[1]= resp[1]+somatorio[1];
                i[1]++;
                media[1]=somatorio[1]/((float)i[1]);
                
                do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para n�o.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;

            case 3:
            	
            do{
			
                system("cls");
                printf("\t\t\t\t\t\tJogos Ol�mpicos de Paris 2024\n\n\tH� mais de um s�culo, Paris foi o palco inaugural para atletas de todo o mundo, marcando o in�cio de uma tradi��o ol�mpica que continua at� hoje. Em 2024, Paris se prepara para sediar os Jogos novamente, elevando os padr�es de excel�ncia e unindo na��es em um esp�rito de competi��o amig�vel. \n\nSelecione uma obra:\n\n");
                printf("1. Explorando Horizontes: Os Novos Esportes de Paris 2024 \n");
                printf("2. Mascotes\n");
                scanf("%d", &op);
                fflush(stdin);

                switch (op) {
                    case 1:
                    	system("cls");
                    	printf("\t\t\t\t\t\tExplorando Horizontes: Os Novos Esportes de Paris 2024\n\n");
                    	printf("	O document�rio Explorando Horizontes: Os Novos Esportes de Paris 2024 destaca as novas modalidades dos Jogos Ol�mpicos de 2024. \n Ele explora cada nova modalidade, suas origens e perfis de atletas, oferecendo uma vis�o detalhada das competi��es. \n Al�m disso, examina o impacto cultural e social desses esportes, celebrando a diversidade e a criatividade no cen�rio ol�mpico. \n O document�rio visa inspirar os espectadores a explorarem novas possibilidades no mundo esportivo \n");
                        break;
                    case 2:
                    	system("cls");
                        printf("\t\t\t\t\t\tMascotes\n\n");
                        printf("	As mascotes de Paris 2024 s�o as Phyrges, dois barretes fr�gio que simbolizam a liberdade e a inclus�o. \n Elas t�m as cores da bandeira francesa e o logotipo dos jogos, tamb�m possuem um olho feito de uma coroa da Fran�a, que expressa desafio e determina��o. \n A mascote Paral�mpica tem uma defici�ncia vis�vel, que mostra a diversidade e a for�a dos atletas. \n As mascotes querem mostrar ao mundo que o esporte � capaz de mudar tudo, e a import�ncia do seu papel na sociedade.\n");
                        break;
                    default:
                        printf("Por favor,digite uma op��o v�lida\n");
                        system("pause");
                }
        }while(op!=1 && op!=2);
                quest(&resp[2]);
                
                somatorio[2]= resp[2]+somatorio[2];
                i[2]++;
                media[2]=somatorio[2]/((float)i[2]);
                
                do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para n�o.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;

            case 4:
            	
            do{
			
                system("cls");
                printf("\t\t\t\t\t\tEvolu��o dos Computadores.\n\n\tA hist�ria dos computadores � dividida em v�rias fases distintas, cada uma representando um avan�o tecnol�gico significativo. Desde os primeiros modelos at� os dispositivos modernos, essas transforma��es revolucionaram a computa��o, impactando profundamente a sociedade e a maneira como interagimos com a tecnologia digital atualmente.\n\nSelecione uma obra:\n\n");
                printf("1. 1� Gera��o\n");
                printf("2. 2� Gera��o\n");
                printf("3. 3� Gera��o\n");
                printf("4. 4� Gera��o\n");
                printf("5. 5� Gera��o\n");
                scanf("%d", &op);
                fflush(stdin);

                switch (op) {
                    case 1:
                    	system("cls");
                    	printf("\t\t\t\t\t\t1� Gera��o\n\n");
                        printf("	Na primeira gera��o de computadores (1940-1950), surgiram m�quinas pioneiras, grandes e complexas, utilizando v�lvulas eletr�nicas para c�lculos cient�ficos e militares. Esses computadores marcaram o in�cio da era da computa��o eletr�nica, estabelecendo fundamentos cruciais para futuros avan�os tecnol�gicos.\n");
                        break;
                    case 2:
                    	system("cls");
                    	printf("\t\t\t\t\t\t2� Gera��o\n\n");
                        printf("	Na segunda gera��o de computadores (1950-1960), transistores substitu�ram v�lvulas eletr�nicas, resultando em dispositivos menores e mais confi�veis. A introdu��o dos circuitos integrados permitiu a miniaturiza��o e efici�ncia energ�tica, levando ao surgimento de mainframes, marcando uma transforma��o not�vel na hist�ria da computa��o.\n");
                        break;
                    case 3:
                    	system("cls");
                    	printf("\t\t\t\t\t\t3� Gera��o\n\n");
                        printf("	Na terceira gera��o de computadores (1960-1970), os circuitos integrados substitu�ram transistores, permitindo computadores menores e mais r�pidos. Minicomputadores surgiram, junto com linguagens de programa��o, tornando a computa��o mais acess�vel e vers�til para diversas aplica��es.\n");
                        break;
                    case 4:
                    	system("cls");
                    	printf("\t\t\t\t\t\t4� Gera��o\n\n");
                        printf("	Na quarta gera��o de computadores (1970s-presente), os microprocessadores foram introduzidos, resultando em computadores pessoais menores, mais poderosos e acess�veis. Houve um aumento significativo na capacidade de armazenamento e o advento da Internet, transformando a forma como as pessoas interagem com a tecnologia e se comunicam globalmente.\n");
                        break;
                    case 5:
                    	system("cls");
                    	printf("\t\t\t\t\t\t5� Gera��o\n\n");
                        printf("	Na quinta gera��o de computadores (presente-futuro), ocorrem avan�os em intelig�ncia artificial, aprendizado de m�quina, computa��o qu�ntica e Internet das Coisas. Estas tecnologias permitem sistemas altamente inteligentes e interconex�o de dispositivos, representando um novo patamar na rela��o entre humanos e computadores.\n");
                        break;
                    default:
                        printf("Por favor,selecione uma op��o v�lida\n");
                        system("pause");
                }
        }while (op<1 || op>5);
                quest(&resp[3]);
                
                somatorio[3]= resp[3]+somatorio[3];
                i[3]++;
                media[3]=somatorio[3]/((float)i[3]);
                
                do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para n�o.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;
        
            case 5:
            	
                admin(media[0],media[1],media[2],media[3]);
			
			    do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para n�o.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;
                
            case 6:
                break;                
				default:
                printf("Op��o inv�lida. Por favor, escolha uma op��o v�lida.\n");

        }
    } while (voltar == 's');
    if (voltar == 'n'){
    	printf("Obrigado por visitar o museu. Tenha um bom dia!\n");
    }

	
    return 0;
}	



