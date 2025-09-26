// uredi tabelo tab velikosti n
void uredi(int tab[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (tab[j] > tab[j+1]) {
                // zamenjaj elementa na j-tem in (j+1)-tem mestu

                // z uporabo dodatne spremenljivke
                /*
                int tmp  = tab[j];
                tab[j]   = tab[j+1];
                tab[j+1] = tmp;
                */

                // z uporabo sestevanja in odstevanja
                // tab[j]    = tab[j] + tab[j+1];
                // tab[j+1]  = tab[j] - tab[j+1];
                // tab[j]    = tab[j] - tab[j+1];

                // z uporabo XOR operacije
                tab[j]    = tab[j] ^ tab[j+1];
                tab[j+1]  = tab[j] ^ tab[j+1];
                tab[j]    = tab[j] ^ tab[j+1];

            }
        }
    }
}