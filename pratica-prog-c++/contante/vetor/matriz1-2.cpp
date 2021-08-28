int i, j; // i representa a linha e j representa a coluna
for (i = 0; i < 3; i++) { // vai de 0 até a quantidade de linhas - 1
    for (j = 0; j < 4; j++) { // vai de 0 até a quantidade de colunas -1
        printf ("m[%d][%d]: ", i, j);
        scanf ("%d", &m[i][j]);
    }
}