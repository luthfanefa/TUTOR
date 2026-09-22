cout << "Memulai Brute Force ... " << endl ;
    for (char d1 = '0' ; d1 <= '9' && cek ; d1++ ){
        for (char d2 = '0' ; d2 <= '9' && cek ; d2++){
            for (char d3 = '0' ; d3 <= '9' && cek ; d3++){
                for (char d4 = '0' ; d4 <= '9' && cek ; d4++){
                    for (char d5 = '0' ; d5 <= '9' && cek ; d5++){
                        for (char d6 = '0' ; d6 <= '9' && cek ; d6++){
                            string tebak = "";
                            tebak += d1;
                            tebak += d2;
                            tebak += d3;
                            tebak += d4;
                            tebak += d5;
                            tebak += d6; 

                            attempt++;
