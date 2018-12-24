#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[28];                       // Tag.BODY
    int entity_8;                            // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = 69;                           // Tag.BODY
    entity_8 = rand();                       // Tag.BODY
    if(entity_8 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_8 = 74;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = '0';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_6;                           // Tag.POINTER_DEC
    entity_6 = &entity_8;                    // Tag.POINTER_DEC
    char entity_4[12];                       // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_0 = (char *)(entity_6 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 38;                           // Tag.BODY
    entity_4[entity_1] = 'A';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER