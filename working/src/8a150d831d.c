#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_2 = 10;                           // Tag.BODY
    char entity_3[75];                       // Tag.BODY
    entity_9 = 85;                           // Tag.BODY
    if(entity_2 < entity_9){                 // Tag.BODY
    entity_2 = 32;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_2] = 'm';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_2;                    // Tag.POINTER_DEC
    int entity_7;                            // Tag.BODY
    char entity_6[3];                        // Tag.BODY
    entity_7 = 47;                           // Tag.BODY
    entity_6[entity_7] = 'P';                // Tag.BUFWRITE_TAUT_UNSAFE
    char *entity_1 = (char *)(entity_0 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER