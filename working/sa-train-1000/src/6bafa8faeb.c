#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_1 = 90;                           // Tag.BODY
    char entity_8[75];                       // Tag.BODY
    int entity_6;                            // Tag.BODY
    char entity_3[50];                       // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    entity_2 = 93;                           // Tag.BODY
    entity_6 = 28;                           // Tag.BODY
    entity_3[entity_1] = '8';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_9[76];                       // Tag.BODY
    entity_8[entity_6] = '8';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_7 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 12;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_7] = 'f';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_4;                           // Tag.POINTER_DEC
    entity_4 = &entity_7;                    // Tag.POINTER_DEC
    char *entity_0 = (char *)(entity_4 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER