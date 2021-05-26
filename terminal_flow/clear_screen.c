/*
 * =====================================================================================
 *
 *       Filename:  clear_screen.c
 *
 *    Description: Simple to clear screen 
 *
 *        Version:  1.0
 *        Created:  26/05/2021 19:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bruno Franco (brnfra), devlabbr@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*     Constants       */
#define EXIT_SUCCESS 0

void clrscr()
{
    system("@cls||clear");
}



int main(int argc, char *argv[]) {

    /*     Your Program Here!      */
    printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur molestie magna et nisl blandit suscipit. Sed ac consequat erat, sed semper sapien. Nam eu tempor mauris, pharetra tincidunt justo. Nam congue lectus dui, ac dapibus nisl finibus sagittis. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nulla vitae ornare libero, vitae laoreet orci. Aliquam in porta erat, in scelerisque nulla. Pellentesque et purus vitae lacus viverra tincidunt id quis leo. Vivamus a sapien sit amet velit semper placerat at ac lectus. Sed feugiat lectus nec nibh pellentesque congue. Phasellus interdum, turpis in suscipit luctus, nisl est viverra est, eu ultrices elit ex eu purus.In auctor eget urna nec pretium. Mauris scelerisque metus sed ultricies egestas. Maecenas lobortis placerat urna, a maximus urna laoreet a. Etiam auctor, nunc eu lacinia mollis, massa erat tempor eros, nec vehicula tortor lacus ultrices ipsum. In enim ligula, pellentesque vel posuere eu, finibus nec nisl. Donec eget ultrices nisi, ac fringilla quam. Nam ullamcorper placerat rutrum. Aliquam fringilla hendrerit commodo.Donec pulvinar accumsan nunc et finibus. Proin eu erat lacus. Sed ipsum dolor, dapibus sit amet semper a, accumsan sed mi. Quisque varius accumsan quam. Vestibulum facilisis vestibulum dignissim. Aliquam vulputate imperdiet erat, at convallis odio fermentum sit amet. Pellentesque accumsan turpis id est efficitur, vitae condimentum tellus rhoncus. Ut pharetra, urna quis molestie dignissim, tortor velit tempor nulla, quis volutpat leo nunc at erat. Praesent non sem rhoncus, elementum sem nec, semper augue. Maecenas mollis lorem ut mi fringilla vestibulum. Aliquam condimentum at nunc ac pellentesque. Morbi porta ligula ac diam commodo, non dignissim erat eleifend. Sed id dolor interdum, interdum velit quis, accumsan leo. Sed leo libero, laoreet nec ipsum ut, eleifend venenatis ligula. Quisque malesuada malesuada augue.Donec nec fermentum dolor. Praesent sed imperdiet leo, at laoreet lacus. Maecenas elementum ipsum dolor, convallis maximus augue aliquet nec. Interdum et malesuada fames ac ante ipsum primis in faucibus. Fusce a nulla et diam fermentum ultricies. Pellentesque quam lacus, interdum sit amet tellus in, commodo aliquam urna. Integer vitae erat vitae purus vulputate aliquet non sit amet quam. Nunc tellus odio, ullamcorper eget vestibulum ac, cursus nec lorem.Nulla non massa at lacus pretium sollicitudin. Nulla convallis felis ac ante gravida, vitae scelerisque turpis tempus. Donec a nisi a magna tempus fringilla. Sed dictum luctus erat non suscipit. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Donec tincidunt nulla at ligula volutpat porttitor. Praesent vitae lacus mi. Curabitur pharetra, lacus vitae malesuada pellentesque, velit nibh pulvinar felis, sed vehicula elit ligula ut orci. Pellentesque tincidunt arcu nisi, egestas pulvinar nunc malesuada et. Integer consequat quis ex in sodales. Aenean eu sodales lectus, vitae consectetur risus. Mauris pulvinar ultrices sem sed accumsan. Nulla in enim convallis, tincidunt leo eu, blandit purus. Suspendisse eu tortor quis metus aliquet vehicula vitae sit amet diam. Nulla cursus tellus a risus malesuada, et blandit sapien pretium. Nunc et porta velit."); 
    clrscr();
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
        system("pause");return (EXIT_SUCCESS);
#elif __linux__
    return EXIT_SUCCESS;
#endif
}
