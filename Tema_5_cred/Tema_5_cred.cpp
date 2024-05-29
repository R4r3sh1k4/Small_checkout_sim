#include <iostream>
#include <string>

int main()
{
	float Variabila_1;/* Am initializat o variabila pe care o sa o tot folosim
                         ca sa nu mai creez alte variabile sa murdaresc programul */


	// Un titlu frumos ca sa se vada frumi in consola
	std::cout << "=========================================================================================" << std::endl;
	std::cout << "			TEMA 1 + 2" << std::endl;
	std::cout << "=========================================================================================" << std::endl;
	std::cout << "" << std::endl;

	// Niste cout-uri sa vada utilizatorul ce ii cerem
	std::cout << "	[Bine ati venit la self check-out-ul de ciorbe Triol ]" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "	Te rog introdu detaliile tale cu caracter personal: " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	/* Aici am insirat niste string - uri ca utilizatorul sa le completeze cu numele lui : )
	 si o variabila pe care o sa o folosim mai incolo */
	std::string Nume_U;
	std::string Prenume_U;
	int Distanta;
	

	// Aici obligam fortat utilizatorul sa isi puna detaliile personale ca sa le folosim noi in scopuri rele >:)
	std::cout << "	[ Prenume: ";
	std::cin >> Prenume_U;
	std::cout << "" << std::endl;
	std::cout << "	[ Nume: ";
	std::cin >> Nume_U;
	std::cout << "" << std::endl;
	std::cout << "	[ Distanta de livrare de la restaurant la tine in Km: ";
	std::cin >> Distanta;
	std::cout << "" << std::endl;


	// Aici Utilizatorul isi pune bugetul pentru ciorbe
	std::cout << "   { Introdu suma de Ron pe care o sa il folosesti pentru achizitionarea de ciorbe Triol: ";
	std::cin >> Variabila_1;

	// Sa se vada frumos, asta nu are niciun scop
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "=========================================================================================" << std::endl;
	std::cout << "" << std::endl;
	
	// Aici am facut un cout cu numele utilizatorului ca sa creada ca e mai important decat e >:) puterea personalizarii !!
	std::cout << "			  [ Bine ai venit " << Nume_U + " " + Prenume_U << " ]	";
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	// Aici setam o constanta cu banii utilizatorului
	const int Bani = long(Variabila_1);

	std::cout << "	[ Contul tau curent are: " << Bani  << " Ron";
	std::cout << " ] " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	
	
	// Aici refolosim variabila aia de mai sus (amongus) si setam un constant cu numarul de ciorbe
	std::cout << "	[ Te rog introdu numarul de ciorbe Trio: ";
	std::cin >> Variabila_1;
	const int Ciorbe_Trio = Variabila_1;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	// Aici precizam pretul pestilor ca utilizatorul sa stie si scriem cati pesti a comandat.
	std::cout << "==================================" << std::endl;
	std::cout << "{ Tinand cont ca valoarea unui peste este 10 Ron }" << std::endl;
	std::cout << "{ Pentru " << Ciorbe_Trio << " ciorbe Trio se folosesc: ";
	std::cout << " [ " << (Ciorbe_Trio * 3) << " Pesti ] }" << std::endl;
	std::cout << "==================================" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	// Aici niste calcule pentru taxe :)
	std::cout << "" << std::endl;
	std::cout << "{ Costul doar pentru pesti este de: " << (Ciorbe_Trio * 3 * 10) << " Ron" << std::endl;
	std::cout << "{ Costurile de preparare pentru ciorbe: " << ((Ciorbe_Trio * 3 * 10) * 0.65)  << " Ron" << std::endl;
	std::cout << "{ Costurile de livrare pentru ciorbe: " << (((Ciorbe_Trio * 3 * 10) * 0.35) + (Distanta * 6)) << " Ron" << std::endl;
	std::cout << "" << std::endl;

	// Pretul total cu si fara TVA
	
	std::cout << "{ Costurile totale fara TVA: " << ((Ciorbe_Trio * 3 * 10) + ((Ciorbe_Trio * 3 * 10) * 0.65) + (((Ciorbe_Trio * 3 * 10) * 0.35) + (Distanta * 6))) << " Ron" << std::endl;
	double TVA = ((Ciorbe_Trio * 3 * 10) + ((Ciorbe_Trio * 3 * 10) * 0.65) + (((Ciorbe_Trio * 3 * 10) * 0.35) + (Distanta * 6))) * 19 / 100;
	std::cout << "{ Costurile totale cu TVA: "<< (((Ciorbe_Trio * 3 * 10) + ((Ciorbe_Trio * 3 * 10) * 0.65) + (((Ciorbe_Trio * 3 * 10) * 0.35) + (Distanta * 6))) + TVA) << " Ron" << std::endl;

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	// Luam bani din contul bancar aici
	std::cout << "{ Contul tau curent dupa efectuarea tranzactiei: " << Bani - (((Ciorbe_Trio * 3 * 10) + ((Ciorbe_Trio * 3 * 10) * 0.65) + (((Ciorbe_Trio * 3 * 10) * 0.35) + (Distanta * 6))) + TVA) << " Ron }" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	// Aici am folosit cu div si mod, div pentru ore mod pentru minute
	std::cout << "___________" << std::endl;
	std::cout << "Comanda va fi livrata la tine in: " << int(((Ciorbe_Trio * 25) + (Distanta * 2)) / 60) << " ore si " << int(((Ciorbe_Trio * 25) + (Distanta * 2)) % 60) << " minute" << std::endl;
	std::cout << "___________" << std::endl;
	std::cout << "" << std::endl;


	std::cout << "=========================================================================================" << std::endl;
	std::cout << "			TEMA 3" << std::endl;
	std::cout << "=========================================================================================" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	
	// Asta e floare la ureche dar, am refolosit variabila aia de sus (amongus) si am folosit formula de convertire din celsius in fahrenheit
	std::cout << "Te rog sa introduci gradele in Celsius: ";
	std::cin >> Variabila_1;
	std::cout << "Gradele fahrenheit: "<< Variabila_1 * 1.8 + 32 << std::endl;









	// Gata boys, la culcare :D
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	return 0;
}