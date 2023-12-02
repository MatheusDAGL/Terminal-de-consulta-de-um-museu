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
    	printf("Selecione o tema em que deseja ver as estatísticas:\n\n");
        printf("1. 100 anos da semana de arte moderna\n");
        printf("2. 150 Anos de Santos Dumont\n");
        printf("3. Jogos Olímpicos de Paris 2024\n");
        printf("4. Evolução dos Computadores\n");
        scanf("%d",&adm);
        fflush(stdin);
        
    if (adm<1 || adm>4){
    	printf("Por favor,digite uma opção válida:\n");
    	system("pause");
    	system("cls");
	}
    }while(adm<1 || adm>4);

        
        switch (adm){
        	case 1:
        	system ("cls");
        	printf("A nota média recebida pelos visitantes do tema 100 anos da semana de arte moderna é de %0.1f\n",nota1);
        	    if (nota1>=8){
        		printf("\nEm geral,este tema recebeu notas altas e as obras parecem ter cativado o público.\n");
                 }
         	    if (nota1>=6 && nota1<8){
        		printf("\nEsse tema tem sido bem recebido pelo público,apesar das notas obtidas não terem sido tão altas.Por isso,está aberto para melhorias.\n");     		
			}
			if (nota1<6) {
			printf("\nEsse tema tem acumulado notas baixas e não está sendo bem recebido pelo público.É aconselhável que ocorra uma reformulação parcial ou total da exposição.\n");
			}
			
        	break;
        	
            case 2:
        	system ("cls");
        	printf("A nota média recebida pelos visitantes do tema 150 anos de Santos Dumont é de %0.1f\n",nota2);
        	        	    if (nota2>=8){
        		printf("\nEm geral,este tema recebeu notas altas e as obras parecem ter cativado o público.\n");
                 }
         	    if (nota2>=6 && nota2<8){
        		printf("\nEsse tema tem sido bem recebido pelo público,apesar das notas obtidas não terem sido tão altas.Por isso,está aberto para melhorias.\n");     		
			}
			if (nota2<6) {
			printf("\nEsse tema tem acumulado notas baixas e não está sendo bem recebido pelo público.É aconselhável que ocorra uma reformulação parcial ou total da exposição.\n");
			}
        	break; 
        	
            case 3:
        	system ("cls");
        	printf("A nota média recebida pelos visitantes do tema Jogos Olímpicos de Paris de 2024 é de %0.1f\n",nota3);
        	        	    if (nota3>=8){
        		printf("\nEm geral,este tema recebeu notas altas e as obras parecem ter cativado o público.\n");
                 }
         	    if (nota3>=6 && nota3<8){
        		printf("\nEsse tema tem sido bem recebido pelo público,apesar das notas obtidas não terem sido tão altas.Por isso,está aberto para melhorias.\n");     		
			}
			if (nota3<6) {
			printf("\nEsse tema tem acumulado notas baixas e não está sendo bem recebido pelo público.É aconselhável que ocorra uma reformulação parcial ou total da exposição.\n");
			}
        	break;
        	
        	case 4:
        	system ("cls");
        	printf("A nota média recebida pelos visitantes do tema Evolução dos Computadores é de %0.1f\n",nota4);
        	        	    if (nota4>=8){
        		printf("\nEm geral,este tema recebeu notas altas e as obras parecem ter cativado o público.\n");
                 }
         	    if (nota4>=6 && nota4<8){
        		printf("\nEsse tema tem sido bem recebido pelo público,apesar das notas obtidas não terem sido tão altas.Por isso,está aberto para melhorias.\n");     		
			}
			if (nota4<6) {
			printf("\nEsse tema tem acumulado notas baixas e não está sendo bem recebido pelo público.É aconselhável que ocorra uma reformulação parcial ou total da exposição.\n");
			}
        	break;
            default:
        	printf("Por favor,digite uma opção válida:\n\n");
			break;	
		}
    	    	
    	

	

}

int quest(int *nota) {
    char sn;

    printf("\n\nConvidamos você a responder nossa pesquisa de satisfação. Digite s para sim, n para não.\n");
    
    do {
        scanf(" %c", &sn);
        fflush(stdin);

        if (sn == 's') {
        	system("cls");
            printf("Dê uma nota,de 0 a 10,para a exposição:\n\n10-9 Ótimo\n8-7 Bom\n6-5 Ok\n4-0 Ruim\n");
            
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
            printf("\nDigite uma opção válida.\n");
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
        printf("3. Jogos Olímpicos de Paris de 2024\n");
        printf("4. Evolução dos computadores\n");
        printf("\n5. Área do administrador\n");
        printf("\n6. Sair\n");
        scanf("%d", &op);
        fflush(stdin);
        if (op<1 || op>6){
        	printf("Por favor,digite uma opção válida(de 1 a 6)\n");
        	system("pause");
		}

      }while (op <1 || op>6);


        switch (op) {
            case 1:
            	
            	do{
                system("cls");
                printf("\t\t\t\t\t\t100 anos da semana de arte moderna\n\n\tA Semana de Arte Moderna de 1922 em São Paulo foi um evento que introduziu o modernismo no Brasil, desafiando tradições artísticas e culturais. Comemorando seu centenário em 2022, o evento destacou artistas como Tarsila do Amaral e Mário de Andrade, influenciando profundamente a identidade cultural brasileira e promovendo a diversidade na cena artística nacional. \n\nSelecione uma obra:\n\n");
                printf("1. Os Operários\n");
                printf("2. Macunaíma\n");
                scanf("%d", &op);
                fflush(stdin);

                switch (op) {
                    case 1:
                        system("cls");
                        printf("\t\t\t\t\t\tOs Operários\n\n");
                        printf("	Os Operários é uma pintura de Tarsila do Amaral, criada em 1933, que retrata a resiliência dos trabalhadores industriais brasileiros.\nA obra captura expressões determinadas e cansadas, simbolizando as difíceis condições de trabalho.\nÉ uma representação marcante da classe trabalhadora durante a industrialização do Brasil.\n");
                        break;
                    case 2:
                    	system("cls");
                    	printf("\t\t\t\t\t\t Macunaíma\n\n");
                        printf("	Macunaíma, escrito por Mário de Andrade em 1928, é uma obra fundamental da literatura brasileira. \n A história segue as aventuras de um herói preguiçoso e esperto na Amazônia, incorporando mitos e lendas indígenas. \n A narrativa é conhecida por sua linguagem inovadora e estilo modernista,tornando-se um símbolo da riqueza cultural do Brasil. \n");
                        break;
                    default:
                        printf("\nPor favor,digite uma opção válida: \n");
                        system ("pause");
                }
                }while (op !=1 && op!=2);
                quest(&resp[0]);
                somatorio[0]= resp[0]+somatorio[0];
                i[0]++;
                media[0]=somatorio[0]/((float)i[0]);
                
                do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para não.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;

            case 2:
            	
            do{
                system("cls");
                printf("\t\t\t\t\t\t150 Anos de Santos Dumont\n\n\tEm 2023, comemoram-se os 150 anos do nascimento de Santos Dumont, pioneiro da aviação. Seu legado inclui o histórico voo do 14-Bis em 1906, o primeiro voo público bem-sucedido de uma aeronave mais pesada que o ar. Dumont é celebrado por sua inovação e coragem, sendo uma fonte contínua de inspiração para o progresso científico e tecnológico.\n\nSelecione uma obra:\n\n");
                printf("1. 14-bis \n");
                printf("2. Dirigivel Santos Dumont No 6 \n");
                scanf("%d", &op);
                fflush(stdin);

                switch (op) {
                    case 1:
                    	system("cls");
                        printf("\t\t\t\t\t\t 14-Bis\n\n");
                        printf("	O 14-Bis, foi inventado por Santos Dumont em 1906, foi o primeiro avião a decolar, voar e pousar com sucesso usando um motor aeronáutico. Sua estrutura leve e aerodinâmica permitiu um voo controlado. Em 23 de outubro de 1906, o 14-Bis realizou um voo público bem-sucedido em Paris, marcando um marco crucial na história da aviação e estabelecendo Santos Dumont como um pioneiro visionário.\n");
                        break;
                    case 2:
                    	system("cls");
                    	printf("\t\t\t\t\t\t Santos-Dumont Nº 6\n\n");
                        printf("	O Dirigível Santos Dumont Número 6, criado em 1901 foi um dos primeiros dirigíveis não-rígidos bem-sucedidos. Equipado com um motor a gasolina, realizou um voo público notável ao redor da Torre Eiffel em Paris. Esse feito pioneiro destacou a viabilidade do voo motorizado e controlado, solidificando a reputação de Santos Dumont como um inovador crucial na história da aviação.\n");
                        break;
                    default:
                        printf("\nPor favor,digite uma opção válida: \n");
                        system("pause");
                }
            }while (op!=1 && op!=2);
                quest(&resp[1]);
                
                somatorio[1]= resp[1]+somatorio[1];
                i[1]++;
                media[1]=somatorio[1]/((float)i[1]);
                
                do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para não.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;

            case 3:
            	
            do{
			
                system("cls");
                printf("\t\t\t\t\t\tJogos Olímpicos de Paris 2024\n\n\tHá mais de um século, Paris foi o palco inaugural para atletas de todo o mundo, marcando o início de uma tradição olímpica que continua até hoje. Em 2024, Paris se prepara para sediar os Jogos novamente, elevando os padrões de excelência e unindo nações em um espírito de competição amigável. \n\nSelecione uma obra:\n\n");
                printf("1. Explorando Horizontes: Os Novos Esportes de Paris 2024 \n");
                printf("2. Mascotes\n");
                scanf("%d", &op);
                fflush(stdin);

                switch (op) {
                    case 1:
                    	system("cls");
                    	printf("\t\t\t\t\t\tExplorando Horizontes: Os Novos Esportes de Paris 2024\n\n");
                    	printf("	O documentário Explorando Horizontes: Os Novos Esportes de Paris 2024 destaca as novas modalidades dos Jogos Olímpicos de 2024. \n Ele explora cada nova modalidade, suas origens e perfis de atletas, oferecendo uma visão detalhada das competições. \n Além disso, examina o impacto cultural e social desses esportes, celebrando a diversidade e a criatividade no cenário olímpico. \n O documentário visa inspirar os espectadores a explorarem novas possibilidades no mundo esportivo \n");
                        break;
                    case 2:
                    	system("cls");
                        printf("\t\t\t\t\t\tMascotes\n\n");
                        printf("	As mascotes de Paris 2024 são as Phyrges, dois barretes frígio que simbolizam a liberdade e a inclusão. \n Elas têm as cores da bandeira francesa e o logotipo dos jogos, também possuem um olho feito de uma coroa da França, que expressa desafio e determinação. \n A mascote Paralímpica tem uma deficiência visível, que mostra a diversidade e a força dos atletas. \n As mascotes querem mostrar ao mundo que o esporte é capaz de mudar tudo, e a importância do seu papel na sociedade.\n");
                        break;
                    default:
                        printf("Por favor,digite uma opção válida\n");
                        system("pause");
                }
        }while(op!=1 && op!=2);
                quest(&resp[2]);
                
                somatorio[2]= resp[2]+somatorio[2];
                i[2]++;
                media[2]=somatorio[2]/((float)i[2]);
                
                do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para não.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;

            case 4:
            	
            do{
			
                system("cls");
                printf("\t\t\t\t\t\tEvolução dos Computadores.\n\n\tA história dos computadores é dividida em várias fases distintas, cada uma representando um avanço tecnológico significativo. Desde os primeiros modelos até os dispositivos modernos, essas transformações revolucionaram a computação, impactando profundamente a sociedade e a maneira como interagimos com a tecnologia digital atualmente.\n\nSelecione uma obra:\n\n");
                printf("1. 1ª Geração\n");
                printf("2. 2ª Geração\n");
                printf("3. 3ª Geração\n");
                printf("4. 4ª Geração\n");
                printf("5. 5ª Geração\n");
                scanf("%d", &op);
                fflush(stdin);

                switch (op) {
                    case 1:
                    	system("cls");
                    	printf("\t\t\t\t\t\t1ª Geração\n\n");
                        printf("	Na primeira geração de computadores (1940-1950), surgiram máquinas pioneiras, grandes e complexas, utilizando válvulas eletrônicas para cálculos científicos e militares. Esses computadores marcaram o início da era da computação eletrônica, estabelecendo fundamentos cruciais para futuros avanços tecnológicos.\n");
                        break;
                    case 2:
                    	system("cls");
                    	printf("\t\t\t\t\t\t2ª Geração\n\n");
                        printf("	Na segunda geração de computadores (1950-1960), transistores substituíram válvulas eletrônicas, resultando em dispositivos menores e mais confiáveis. A introdução dos circuitos integrados permitiu a miniaturização e eficiência energética, levando ao surgimento de mainframes, marcando uma transformação notável na história da computação.\n");
                        break;
                    case 3:
                    	system("cls");
                    	printf("\t\t\t\t\t\t3ª Geração\n\n");
                        printf("	Na terceira geração de computadores (1960-1970), os circuitos integrados substituíram transistores, permitindo computadores menores e mais rápidos. Minicomputadores surgiram, junto com linguagens de programação, tornando a computação mais acessível e versátil para diversas aplicações.\n");
                        break;
                    case 4:
                    	system("cls");
                    	printf("\t\t\t\t\t\t4ª Geração\n\n");
                        printf("	Na quarta geração de computadores (1970s-presente), os microprocessadores foram introduzidos, resultando em computadores pessoais menores, mais poderosos e acessíveis. Houve um aumento significativo na capacidade de armazenamento e o advento da Internet, transformando a forma como as pessoas interagem com a tecnologia e se comunicam globalmente.\n");
                        break;
                    case 5:
                    	system("cls");
                    	printf("\t\t\t\t\t\t5ª Geração\n\n");
                        printf("	Na quinta geração de computadores (presente-futuro), ocorrem avanços em inteligência artificial, aprendizado de máquina, computação quântica e Internet das Coisas. Estas tecnologias permitem sistemas altamente inteligentes e interconexão de dispositivos, representando um novo patamar na relação entre humanos e computadores.\n");
                        break;
                    default:
                        printf("Por favor,selecione uma opção válida\n");
                        system("pause");
                }
        }while (op<1 || op>5);
                quest(&resp[3]);
                
                somatorio[3]= resp[3]+somatorio[3];
                i[3]++;
                media[3]=somatorio[3]/((float)i[3]);
                
                do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para não.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;
        
            case 5:
            	
                admin(media[0],media[1],media[2],media[3]);
			
			    do{
                printf("\nDeseja retornar ao menu inicial?Digite s para sim,n para não.\n");
                scanf(" %c", &voltar);
                fflush(stdin);
                }while(voltar !='s' && voltar !='n');
                break;
                
            case 6:
                break;                
				default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");

        }
    } while (voltar == 's');
    if (voltar == 'n'){
    	printf("Obrigado por visitar o museu. Tenha um bom dia!\n");
    }

	
    return 0;
}	



