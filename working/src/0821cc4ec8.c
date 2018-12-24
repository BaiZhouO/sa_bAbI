#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_5[36];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    char entity_8[2];                        // Tag.BODY
    int entity_2;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_1;                            // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    entity_0 = 39;                           // Tag.BODY
    entity_1 = 98;                           // Tag.BODY
    char entity_4[1];                        // Tag.BODY
    entity_6 = 79;                           // Tag.BODY
    if(entity_2 < entity_0){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 7;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_2] = 'O';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_2;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_5[entity_6] = 'd';                // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_1] = 'S';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER