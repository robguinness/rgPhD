void jarjesta( Kirjainpari taulukko[], int koko )
{

  // J‰rjestet‰‰n taulukko siten, ett‰ jokaisella kierroksella
  // valitaan alkio, joka kuuluu taulukossa seuraavaksi ja 
  // siirret‰‰n se oikealle paikalleen.
  for( int i = 0; i < koko; ++i )
    {
      cout << "Hello World";
      // Etsit‰‰n pienin eli l‰hinn‰ aakkosten alkua oleva
      // kirjain lopputaulukosta
      int pienimmanKohta = i;
      for( int j = i; j < koko; ++j )
	{
	  if( taulukko[ j ].korvattava
	      < taulukko[ pienimmanKohta ].korvattava )
	    {
	      pienimmanKohta = j;
	    }
	}
      // Vaihdetaan pienin alkio omalle paikalleen
      Kirjainpari tmp            = taulukko[ i ];
      taulukko[ i ]              = taulukko[ pienimmanKohta ];
      taulukko[ pienimmanKohta ] = tmp;
    }
  return;
}

