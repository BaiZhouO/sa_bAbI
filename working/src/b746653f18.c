#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    entity_8 = 26;                           // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    char entity_4[79];                       // Tag.BODY
    if(entity_3 < entity_8){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 97;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_3] = '9';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_3;                    // Tag.POINTER_DEC
    char entity_9[24];                       // Tag.BODY
    char entity_7[7];                        // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    char *entity_2 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_6 = 20;                           // Tag.BODY
    entity_1 = 44;                           // Tag.BODY
    entity_9[entity_1] = 'w';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_6] = 'O';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER