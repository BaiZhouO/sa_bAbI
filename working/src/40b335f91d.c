#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    char entity_6[57];                       // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 20;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    char entity_5[21];                       // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    entity_4 = 55;                           // Tag.BODY
    entity_1 = 49;                           // Tag.BODY
    char entity_0[79];                       // Tag.BODY
    if(entity_3 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 76;                           // Tag.BODY
    entity_5[entity_1] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    }                                        // Tag.BODY
    entity_0[entity_2] = 'F';                // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_3] = '0';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_7 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER