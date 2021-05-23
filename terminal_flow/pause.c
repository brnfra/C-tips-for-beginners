#if defined(WIN32) || defined(_WIN32) ||  defined(__WIN32__) || defined(__NT__)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
setlocale(LC_ALL,"Portuguese");
#elif __linux__
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#endif

/*     Constants       */
#define EXIT_SUCCESS 0
int main(int argc, char *argv[]) {
char hangOn;
    /*     Your Program Here!      */
    printf("\npause test!\n");






#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
        system("pause");return (EXIT_SUCCESS);
#elif __linux__
#define EXIT_SUCCESS 0
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
            
            scanf("%c%*c", &hangOn);
            return (EXIT_SUCCESS);
#elif __linux__

 			scanf("%c%*c", &hangOn);
            return EXIT_SUCCESS;
#endif

    
    return EXIT_SUCCESS;

#endif
}
