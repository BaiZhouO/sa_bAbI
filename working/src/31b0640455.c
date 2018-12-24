#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_6;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = 48;                           // Tag.BODY
    char entity_8[16];                       // Tag.BODY
    char entity_9[55];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_3 = 50;                           // Tag.BODY
    char entity_1[70];                       // Tag.BODY
    entity_6 = 11;                           // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    entity_1[entity_3] = '3';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_4 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 15;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'd';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_4;                    // Tag.POINTER_DEC
    entity_8[entity_6] = 'T';                // Tag.BUFWRITE_TAUT_SAFE
    char *entity_7 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER